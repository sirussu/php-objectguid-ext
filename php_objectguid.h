/* objectguid extension for PHP */

#ifndef PHP_OBJECTGUID_H
# define PHP_OBJECTGUID_H

extern zend_module_entry objectguid_module_entry;
# define phpext_objectguid_ptr &objectguid_module_entry

# define PHP_OBJECTGUID_VERSION "0.1.0"

# if defined(ZTS) && defined(COMPILE_DL_OBJECTGUID)
ZEND_TSRMLS_CACHE_EXTERN()
# endif

#endif	/* PHP_OBJECTGUID_H */