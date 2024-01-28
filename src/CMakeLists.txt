cmake_minimum_required(VERSION 3.20)
project(ltbm)
file(GLOB cpp "*.cpp")
add_library(${PROJECT_NAME} ${cpp})
set_target_properties(${PROJECT_NAME} PROPERTIES PUBLIC_HEADER ltbm.h)
install(TARGETS ${PROJECT_NAME}
	LIBRARY DESTINATION lib
	PUBLIC_HEADER DESTINATION include)
