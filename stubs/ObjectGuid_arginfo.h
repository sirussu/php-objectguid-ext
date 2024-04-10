/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: bf8104fa116fe54a8b2fcc8aea86255fb080d520 */

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_ObjectGuid___construct, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, guid, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, hi, IS_STRING, 0, "\"\"")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, lo, IS_STRING, 0, "\"\"")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_ObjectGuid_GetRawValueString, 0, 0, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_ObjectGuid_GetEntry, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_ObjectGuid_GetCounter arginfo_class_ObjectGuid_GetEntry

#define arginfo_class_ObjectGuid_GetTypeName arginfo_class_ObjectGuid_GetRawValueString

#define arginfo_class_ObjectGuid_ToString arginfo_class_ObjectGuid_GetRawValueString

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_ObjectGuid_IsEmpty, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_ObjectGuid_IsCreature arginfo_class_ObjectGuid_IsEmpty

#define arginfo_class_ObjectGuid_IsPet arginfo_class_ObjectGuid_IsEmpty

#define arginfo_class_ObjectGuid_IsVehicle arginfo_class_ObjectGuid_IsEmpty

#define arginfo_class_ObjectGuid_IsCreatureOrPet arginfo_class_ObjectGuid_IsEmpty

#define arginfo_class_ObjectGuid_IsCreatureOrVehicle arginfo_class_ObjectGuid_IsEmpty

#define arginfo_class_ObjectGuid_IsAnyTypeCreature arginfo_class_ObjectGuid_IsEmpty

#define arginfo_class_ObjectGuid_IsPlayer arginfo_class_ObjectGuid_IsEmpty

#define arginfo_class_ObjectGuid_IsUnit arginfo_class_ObjectGuid_IsEmpty

#define arginfo_class_ObjectGuid_IsItem arginfo_class_ObjectGuid_IsEmpty

#define arginfo_class_ObjectGuid_IsGameObject arginfo_class_ObjectGuid_IsEmpty

#define arginfo_class_ObjectGuid_IsDynamicObject arginfo_class_ObjectGuid_IsEmpty

#define arginfo_class_ObjectGuid_IsCorpse arginfo_class_ObjectGuid_IsEmpty

#define arginfo_class_ObjectGuid_IsTransport arginfo_class_ObjectGuid_IsEmpty

#define arginfo_class_ObjectGuid_IsMOTransport arginfo_class_ObjectGuid_IsEmpty

#define arginfo_class_ObjectGuid_IsAnyTypeGameObject arginfo_class_ObjectGuid_IsEmpty

#define arginfo_class_ObjectGuid_IsInstance arginfo_class_ObjectGuid_IsEmpty

#define arginfo_class_ObjectGuid_IsGroup arginfo_class_ObjectGuid_IsEmpty


ZEND_METHOD(ObjectGuid, __construct);
ZEND_METHOD(ObjectGuid, GetRawValueString);
ZEND_METHOD(ObjectGuid, GetEntry);
ZEND_METHOD(ObjectGuid, GetCounter);
ZEND_METHOD(ObjectGuid, GetTypeName);
ZEND_METHOD(ObjectGuid, ToString);
ZEND_METHOD(ObjectGuid, IsEmpty);
ZEND_METHOD(ObjectGuid, IsCreature);
ZEND_METHOD(ObjectGuid, IsPet);
ZEND_METHOD(ObjectGuid, IsVehicle);
ZEND_METHOD(ObjectGuid, IsCreatureOrPet);
ZEND_METHOD(ObjectGuid, IsCreatureOrVehicle);
ZEND_METHOD(ObjectGuid, IsAnyTypeCreature);
ZEND_METHOD(ObjectGuid, IsPlayer);
ZEND_METHOD(ObjectGuid, IsUnit);
ZEND_METHOD(ObjectGuid, IsItem);
ZEND_METHOD(ObjectGuid, IsGameObject);
ZEND_METHOD(ObjectGuid, IsDynamicObject);
ZEND_METHOD(ObjectGuid, IsCorpse);
ZEND_METHOD(ObjectGuid, IsTransport);
ZEND_METHOD(ObjectGuid, IsMOTransport);
ZEND_METHOD(ObjectGuid, IsAnyTypeGameObject);
ZEND_METHOD(ObjectGuid, IsInstance);
ZEND_METHOD(ObjectGuid, IsGroup);


static const zend_function_entry class_HighGuid_methods[] = {
	ZEND_FE_END
};


static const zend_function_entry class_TypeID_methods[] = {
	ZEND_FE_END
};


static const zend_function_entry class_ObjectGuid_methods[] = {
	ZEND_ME(ObjectGuid, __construct, arginfo_class_ObjectGuid___construct, ZEND_ACC_PUBLIC)
	ZEND_ME(ObjectGuid, GetRawValueString, arginfo_class_ObjectGuid_GetRawValueString, ZEND_ACC_PUBLIC)
	ZEND_ME(ObjectGuid, GetEntry, arginfo_class_ObjectGuid_GetEntry, ZEND_ACC_PUBLIC)
	ZEND_ME(ObjectGuid, GetCounter, arginfo_class_ObjectGuid_GetCounter, ZEND_ACC_PUBLIC)
	ZEND_ME(ObjectGuid, GetTypeName, arginfo_class_ObjectGuid_GetTypeName, ZEND_ACC_PUBLIC)
	ZEND_ME(ObjectGuid, ToString, arginfo_class_ObjectGuid_ToString, ZEND_ACC_PUBLIC)
	ZEND_ME(ObjectGuid, IsEmpty, arginfo_class_ObjectGuid_IsEmpty, ZEND_ACC_PUBLIC)
	ZEND_ME(ObjectGuid, IsCreature, arginfo_class_ObjectGuid_IsCreature, ZEND_ACC_PUBLIC)
	ZEND_ME(ObjectGuid, IsPet, arginfo_class_ObjectGuid_IsPet, ZEND_ACC_PUBLIC)
	ZEND_ME(ObjectGuid, IsVehicle, arginfo_class_ObjectGuid_IsVehicle, ZEND_ACC_PUBLIC)
	ZEND_ME(ObjectGuid, IsCreatureOrPet, arginfo_class_ObjectGuid_IsCreatureOrPet, ZEND_ACC_PUBLIC)
	ZEND_ME(ObjectGuid, IsCreatureOrVehicle, arginfo_class_ObjectGuid_IsCreatureOrVehicle, ZEND_ACC_PUBLIC)
	ZEND_ME(ObjectGuid, IsAnyTypeCreature, arginfo_class_ObjectGuid_IsAnyTypeCreature, ZEND_ACC_PUBLIC)
	ZEND_ME(ObjectGuid, IsPlayer, arginfo_class_ObjectGuid_IsPlayer, ZEND_ACC_PUBLIC)
	ZEND_ME(ObjectGuid, IsUnit, arginfo_class_ObjectGuid_IsUnit, ZEND_ACC_PUBLIC)
	ZEND_ME(ObjectGuid, IsItem, arginfo_class_ObjectGuid_IsItem, ZEND_ACC_PUBLIC)
	ZEND_ME(ObjectGuid, IsGameObject, arginfo_class_ObjectGuid_IsGameObject, ZEND_ACC_PUBLIC)
	ZEND_ME(ObjectGuid, IsDynamicObject, arginfo_class_ObjectGuid_IsDynamicObject, ZEND_ACC_PUBLIC)
	ZEND_ME(ObjectGuid, IsCorpse, arginfo_class_ObjectGuid_IsCorpse, ZEND_ACC_PUBLIC)
	ZEND_ME(ObjectGuid, IsTransport, arginfo_class_ObjectGuid_IsTransport, ZEND_ACC_PUBLIC)
	ZEND_ME(ObjectGuid, IsMOTransport, arginfo_class_ObjectGuid_IsMOTransport, ZEND_ACC_PUBLIC)
	ZEND_ME(ObjectGuid, IsAnyTypeGameObject, arginfo_class_ObjectGuid_IsAnyTypeGameObject, ZEND_ACC_PUBLIC)
	ZEND_ME(ObjectGuid, IsInstance, arginfo_class_ObjectGuid_IsInstance, ZEND_ACC_PUBLIC)
	ZEND_ME(ObjectGuid, IsGroup, arginfo_class_ObjectGuid_IsGroup, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static zend_class_entry *register_class_HighGuid(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "HighGuid", class_HighGuid_methods);
	class_entry = zend_register_internal_class_ex(&ce, NULL);

	zval const_Item_value;
	ZVAL_LONG(&const_Item_value, 0x4000);
	zend_string *const_Item_name = zend_string_init_interned("Item", sizeof("Item") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_Item_name, &const_Item_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_Item_name);

	zval const_Container_value;
	ZVAL_LONG(&const_Container_value, 0x4000);
	zend_string *const_Container_name = zend_string_init_interned("Container", sizeof("Container") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_Container_name, &const_Container_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_Container_name);

	zval const_Player_value;
	ZVAL_LONG(&const_Player_value, 0x0);
	zend_string *const_Player_name = zend_string_init_interned("Player", sizeof("Player") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_Player_name, &const_Player_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_Player_name);

	zval const_GameObject_value;
	ZVAL_LONG(&const_GameObject_value, 0xf110);
	zend_string *const_GameObject_name = zend_string_init_interned("GameObject", sizeof("GameObject") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_GameObject_name, &const_GameObject_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_GameObject_name);

	zval const_Transport_value;
	ZVAL_LONG(&const_Transport_value, 0xf120);
	zend_string *const_Transport_name = zend_string_init_interned("Transport", sizeof("Transport") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_Transport_name, &const_Transport_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_Transport_name);

	zval const_Unit_value;
	ZVAL_LONG(&const_Unit_value, 0xf130);
	zend_string *const_Unit_name = zend_string_init_interned("Unit", sizeof("Unit") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_Unit_name, &const_Unit_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_Unit_name);

	zval const_Pet_value;
	ZVAL_LONG(&const_Pet_value, 0xf140);
	zend_string *const_Pet_name = zend_string_init_interned("Pet", sizeof("Pet") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_Pet_name, &const_Pet_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_Pet_name);

	zval const_Vehicle_value;
	ZVAL_LONG(&const_Vehicle_value, 0xf150);
	zend_string *const_Vehicle_name = zend_string_init_interned("Vehicle", sizeof("Vehicle") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_Vehicle_name, &const_Vehicle_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_Vehicle_name);

	zval const_DynamicObject_value;
	ZVAL_LONG(&const_DynamicObject_value, 0xf100);
	zend_string *const_DynamicObject_name = zend_string_init_interned("DynamicObject", sizeof("DynamicObject") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_DynamicObject_name, &const_DynamicObject_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_DynamicObject_name);

	zval const_Corpse_value;
	ZVAL_LONG(&const_Corpse_value, 0xf101);
	zend_string *const_Corpse_name = zend_string_init_interned("Corpse", sizeof("Corpse") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_Corpse_name, &const_Corpse_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_Corpse_name);

	zval const_Mo_Transport_value;
	ZVAL_LONG(&const_Mo_Transport_value, 0x1fc0);
	zend_string *const_Mo_Transport_name = zend_string_init_interned("Mo_Transport", sizeof("Mo_Transport") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_Mo_Transport_name, &const_Mo_Transport_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_Mo_Transport_name);

	zval const_Instance_value;
	ZVAL_LONG(&const_Instance_value, 0x1f40);
	zend_string *const_Instance_name = zend_string_init_interned("Instance", sizeof("Instance") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_Instance_name, &const_Instance_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_Instance_name);

	zval const_Group_value;
	ZVAL_LONG(&const_Group_value, 0x1f50);
	zend_string *const_Group_name = zend_string_init_interned("Group", sizeof("Group") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_Group_name, &const_Group_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_Group_name);

	return class_entry;
}

static zend_class_entry *register_class_TypeID(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "TypeID", class_TypeID_methods);
	class_entry = zend_register_internal_class_ex(&ce, NULL);

	zval const_OBJECT_value;
	ZVAL_LONG(&const_OBJECT_value, 0);
	zend_string *const_OBJECT_name = zend_string_init_interned("OBJECT", sizeof("OBJECT") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_OBJECT_name, &const_OBJECT_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_OBJECT_name);

	zval const_ITEM_value;
	ZVAL_LONG(&const_ITEM_value, 1);
	zend_string *const_ITEM_name = zend_string_init_interned("ITEM", sizeof("ITEM") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_ITEM_name, &const_ITEM_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_ITEM_name);

	zval const_CONTAINER_value;
	ZVAL_LONG(&const_CONTAINER_value, 2);
	zend_string *const_CONTAINER_name = zend_string_init_interned("CONTAINER", sizeof("CONTAINER") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_CONTAINER_name, &const_CONTAINER_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_CONTAINER_name);

	zval const_UNIT_value;
	ZVAL_LONG(&const_UNIT_value, 3);
	zend_string *const_UNIT_name = zend_string_init_interned("UNIT", sizeof("UNIT") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_UNIT_name, &const_UNIT_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_UNIT_name);

	zval const_PLAYER_value;
	ZVAL_LONG(&const_PLAYER_value, 4);
	zend_string *const_PLAYER_name = zend_string_init_interned("PLAYER", sizeof("PLAYER") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_PLAYER_name, &const_PLAYER_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_PLAYER_name);

	zval const_GAMEOBJECT_value;
	ZVAL_LONG(&const_GAMEOBJECT_value, 5);
	zend_string *const_GAMEOBJECT_name = zend_string_init_interned("GAMEOBJECT", sizeof("GAMEOBJECT") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_GAMEOBJECT_name, &const_GAMEOBJECT_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_GAMEOBJECT_name);

	zval const_DYNAMICOBJECT_value;
	ZVAL_LONG(&const_DYNAMICOBJECT_value, 6);
	zend_string *const_DYNAMICOBJECT_name = zend_string_init_interned("DYNAMICOBJECT", sizeof("DYNAMICOBJECT") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_DYNAMICOBJECT_name, &const_DYNAMICOBJECT_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_DYNAMICOBJECT_name);

	zval const_CORPSE_value;
	ZVAL_LONG(&const_CORPSE_value, 7);
	zend_string *const_CORPSE_name = zend_string_init_interned("CORPSE", sizeof("CORPSE") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_CORPSE_name, &const_CORPSE_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_CORPSE_name);

	return class_entry;
}

static zend_class_entry *register_class_ObjectGuid(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ObjectGuid", class_ObjectGuid_methods);
	class_entry = zend_register_internal_class_ex(&ce, NULL);
	class_entry->ce_flags |= ZEND_ACC_NO_DYNAMIC_PROPERTIES;

	return class_entry;
}
