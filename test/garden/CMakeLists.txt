#-- polygon_triangulator test

if( SFCGAL_USE_STATIC_LIBS )
  add_definitions( "-DSFCGAL_USE_STATIC_LIBS" )
endif()

file( GLOB_RECURSE SFCGAL_REGRESS_GARDEN_TEST_SOURCES *.cpp )

find_package(Boost REQUIRED COMPONENTS program_options serialization)

set( REGRESS_NAME garden-test-SFCGAL )
add_executable( ${REGRESS_NAME} ${SFCGAL_REGRESS_GARDEN_TEST_SOURCES} )

target_link_libraries( ${REGRESS_NAME} SFCGAL)
target_link_libraries( ${REGRESS_NAME} ${CGAL_3RD_PARTY_LIBRARIES} ${Boost_LIBRARIES})

set_target_properties( ${REGRESS_NAME} PROPERTIES DEBUG_POSTFIX "d" )
install( TARGETS ${REGRESS_NAME} DESTINATION bin )

if (CMAKE_BUILD_TYPE STREQUAL "Debug" )
    add_test( garden-testd ${CMAKE_CURRENT_BINARY_DIR}/garden-test-SFCGALd --verbose)
else()
    add_test( garden-test ${CMAKE_CURRENT_BINARY_DIR}/garden-test-SFCGAL --verbose)
endif()


