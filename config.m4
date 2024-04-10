PHP_ARG_ENABLE(objectguid, whether to enable ObjectGuid support,
[ --enable-objectguid   Enable ObjectGuid support])

if test "$PHP_OBJECTGUID" = "yes"; then
  PHP_REQUIRE_CXX()
  PHP_ADD_INCLUDE(.)

  dnl the 6th parameter here is required for C++ shared extensions
  PHP_NEW_EXTENSION(objectguid, objectguid.cpp src/ObjectGuid.cpp, $ext_shared)
fi
