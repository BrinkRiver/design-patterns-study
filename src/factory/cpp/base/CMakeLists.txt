add_library(base STATIC Product.cpp )

target_include_directories(base PUBLIC ${CMAKE_CURRENT_SOURCE_DIR} )