#ifdef HAVE_CONFIG_H
# include "config.h"
#endif

extern "C" {
#include "php.h"
#include "ext/standard/info.h"
#include "Zend/zend_exceptions.h"
#include "php_objectguid.h"
#include "stubs/ObjectGuid_arginfo.h"
}

#include "src/ObjectGuid.h"

#define PHP_OBJECTGUID_VERSION "0.1.0"

template<typename class_name>
static inline class_name * fetch_from_zend_object(zend_object *obj) {
	return (class_name *)((char *)obj - XtOffsetOf(class_name, std));
}

template<typename class_name>
static class_name* alloc_custom_zend_object(zend_class_entry* ce, zend_object_handlers *handlers) {
	class_name* object = (class_name*)emalloc(sizeof(class_name) + zend_object_properties_size(ce));

	zend_object_std_init(&object->std, ce);
	object_properties_init(&object->std, ce);

	object->std.handlers = handlers;

	return object;
}

typedef struct _objectguid_object {
    ObjectGuid *guid;
    zend_object std;
} objectguid_object;

static zend_object_handlers objectguid_handlers;

#define OBJECTGUID_METHOD(name) PHP_METHOD(ObjectGuid, name)
#define OBJECTGUID_THIS() fetch_from_zend_object<objectguid_object>(Z_OBJ_P(ZEND_THIS))

OBJECTGUID_METHOD(__construct) {
    objectguid_object* intern;

    zend_string* guid_str = nullptr;
    zend_string* hi_str = nullptr;
    zend_string* lo_str = nullptr;

    if (ZEND_NUM_ARGS() == 1) {
        if (zend_parse_parameters(ZEND_NUM_ARGS(), "S", &guid_str) == SUCCESS) {
            intern = OBJECTGUID_THIS();
            std::string guidValue = ZSTR_VAL(guid_str) ? std::string(ZSTR_VAL(guid_str)) : "";
            intern->guid = new ObjectGuid(guidValue);
        }
        return;
    } else if (ZEND_NUM_ARGS() == 3) {
        if (zend_parse_parameters(ZEND_NUM_ARGS(), "SSS", &guid_str, &hi_str, &lo_str) == SUCCESS) {
            intern = OBJECTGUID_THIS();
            std::string guidValue = ZSTR_VAL(guid_str) ? std::string(ZSTR_VAL(guid_str)) : "";
            long high = hi_str ? std::stol(ZSTR_VAL(hi_str)) : 0;
            long low = lo_str ? std::stol(ZSTR_VAL(lo_str)) : 0;
            if (guidValue.empty())
                intern->guid = new ObjectGuid(HighGuid(high), ObjectGuid::LowType(low));
            else
                intern->guid = new ObjectGuid(guidValue);
        }
        return;
    } 

    zend_throw_exception_ex(nullptr, 0, "Invalid number of constructor parameters for ObjectGuid");
}

OBJECTGUID_METHOD(ToString) {
    std::string str = OBJECTGUID_THIS()->guid->ToString();
    RETURN_STRING(str.c_str());
}

OBJECTGUID_METHOD(GetTypeName) {
    RETURN_STRING(OBJECTGUID_THIS()->guid->GetTypeName());
}

OBJECTGUID_METHOD(GetCounter) {
    RETURN_LONG(OBJECTGUID_THIS()->guid->GetCounter());
}

OBJECTGUID_METHOD(GetEntry) {
    RETURN_LONG(OBJECTGUID_THIS()->guid->GetEntry());
}

OBJECTGUID_METHOD(GetRawValueString) {
    std::string rawValue = OBJECTGUID_THIS()->guid->GetRawValueString();
    RETURN_STRING(rawValue.c_str());
}

OBJECTGUID_METHOD(IsEmpty) {
    RETURN_BOOL(OBJECTGUID_THIS()->guid->IsEmpty());
}

OBJECTGUID_METHOD(IsCreature) {
    RETURN_BOOL(OBJECTGUID_THIS()->guid->IsCreature());
}

OBJECTGUID_METHOD(IsPet) {
    RETURN_BOOL(OBJECTGUID_THIS()->guid->IsPet());
}

OBJECTGUID_METHOD(IsVehicle) {
    RETURN_BOOL(OBJECTGUID_THIS()->guid->IsVehicle());
}

OBJECTGUID_METHOD(IsCreatureOrPet) {
    RETURN_BOOL(OBJECTGUID_THIS()->guid->IsCreatureOrPet());
}

OBJECTGUID_METHOD(IsCreatureOrVehicle) {
    RETURN_BOOL(OBJECTGUID_THIS()->guid->IsCreatureOrVehicle());
}

OBJECTGUID_METHOD(IsAnyTypeCreature) {
    RETURN_BOOL(OBJECTGUID_THIS()->guid->IsAnyTypeCreature());
}

OBJECTGUID_METHOD(IsPlayer) {
    RETURN_BOOL(OBJECTGUID_THIS()->guid->IsPlayer());
}

OBJECTGUID_METHOD(IsUnit) {
    RETURN_BOOL(OBJECTGUID_THIS()->guid->IsUnit());
}

OBJECTGUID_METHOD(IsItem) {
    RETURN_BOOL(OBJECTGUID_THIS()->guid->IsItem());
}

OBJECTGUID_METHOD(IsGameObject) {
    RETURN_BOOL(OBJECTGUID_THIS()->guid->IsGameObject());
}

OBJECTGUID_METHOD(IsDynamicObject) {
    RETURN_BOOL(OBJECTGUID_THIS()->guid->IsDynamicObject());
}

OBJECTGUID_METHOD(IsCorpse) {
    RETURN_BOOL(OBJECTGUID_THIS()->guid->IsCorpse());
}

OBJECTGUID_METHOD(IsTransport) {
    RETURN_BOOL(OBJECTGUID_THIS()->guid->IsTransport());
}

OBJECTGUID_METHOD(IsMOTransport) {
    RETURN_BOOL(OBJECTGUID_THIS()->guid->IsMOTransport());
}

OBJECTGUID_METHOD(IsAnyTypeGameObject) {
    RETURN_BOOL(OBJECTGUID_THIS()->guid->IsAnyTypeGameObject());
}

OBJECTGUID_METHOD(IsInstance) {
    RETURN_BOOL(OBJECTGUID_THIS()->guid->IsInstance());
}

OBJECTGUID_METHOD(IsGroup) {
    RETURN_BOOL(OBJECTGUID_THIS()->guid->IsGroup());
}

static zend_object* objectguid_create_handler(zend_class_entry* class_type) {
	auto object = alloc_custom_zend_object<objectguid_object>(class_type, &objectguid_handlers);

	return &object->std;
}

static void objectguid_free_storage(zend_object* object) {
    objectguid_object* intern = fetch_from_zend_object<objectguid_object>(object);

    if (intern->guid != nullptr) {
        delete intern->guid;
        intern->guid = nullptr;
    }

    zend_object_std_dtor(object);
}

PHP_MINIT_FUNCTION(objectguid) {
	zend_class_entry *base_objectguid = register_class_ObjectGuid();
	base_objectguid->create_object = objectguid_create_handler;

    register_class_HighGuid();
    register_class_TypeID();

    objectguid_handlers = *zend_get_std_object_handlers();
    objectguid_handlers.offset = XtOffsetOf(objectguid_object, std);
    objectguid_handlers.free_obj = objectguid_free_storage;
    objectguid_handlers.clone_obj = NULL;

    return SUCCESS;
}

PHP_MINFO_FUNCTION(objectguid)
{
	php_info_print_table_start();
	php_info_print_table_header(2, "Version", PHP_OBJECTGUID_VERSION);
	php_info_print_table_header(2, "Partial exposing of TrinityCore ObjectGuid class", "https://github.com/TrinityCore/TrinityCore/blob/3.3.5/src/server/game/Entities/ObjectGuid.h");
	php_info_print_table_end();
}

// Module entry
zend_module_entry objectguid_module_entry = {
    STANDARD_MODULE_HEADER,
    "objectguid",                    // Extension name
    NULL,                            // Function entries
    PHP_MINIT(objectguid),           // MINIT
    NULL,                            // MSHUTDOWN
    NULL,                            // RINIT
    NULL,                            // RSHUTDOWN
    PHP_MINFO(objectguid),           // MINFO
    PHP_OBJECTGUID_VERSION,          // Version
    STANDARD_MODULE_PROPERTIES
};

#ifdef COMPILE_DL_OBJECTGUID
extern "C" {
ZEND_GET_MODULE(objectguid)
}
#endif
