cmake_minimum_required(VERSION 2.6)
project(hw06)
add_compile_options(-Wall)

include_directories(include test)

add_executable(${CMAKE_PROJECT_NAME} src/${CMAKE_PROJECT_NAME}.c)
add_executable(${CMAKE_PROJECT_NAME}_test test/${CMAKE_PROJECT_NAME}_test.c)
add_library(${CMAKE_PROJECT_NAME}_lib src/${CMAKE_PROJECT_NAME}_lib.c)
target_link_libraries(${CMAKE_PROJECT_NAME}_lib m)
target_link_libraries(${CMAKE_PROJECT_NAME} ${CMAKE_PROJECT_NAME}_lib)

add_custom_target(correct_outputs ALL DEPENDS correct_output_files)
add_custom_command(
	OUTPUT correct_output_files
	COMMAND ${CMAKE_COMMAND} -E copy 
	${CMAKE_CURRENT_SOURCE_DIR}/test/*.correct 
	${CMAKE_CURRENT_BINARY_DIR}
	DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/test/*.correct 
	)
add_custom_target(python_src ALL DEPENDS python_src_files)
add_custom_command(
	OUTPUT python_src_files
	COMMAND ${CMAKE_COMMAND} -E copy 
	${CMAKE_CURRENT_SOURCE_DIR}/src/*.py
	${CMAKE_CURRENT_BINARY_DIR}
	DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/src/*.py
	)
add_custom_target(python_test ALL DEPENDS python_test_files)
add_custom_command(
	OUTPUT python_test_files
	COMMAND ${CMAKE_COMMAND} -E copy 
	${CMAKE_CURRENT_SOURCE_DIR}/test/*.py
	${CMAKE_CURRENT_BINARY_DIR}
	DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/test/*.py
	)

add_custom_target(test 
	DEPENDS ${CMAKE_PROJECT_NAME}_test python_test python_src 
		correct_outputs ${CMAKE_PROJECT_NAME}_test 
	)
add_custom_command(TARGET test
	COMMAND ./${CMAKE_PROJECT_NAME}_test
	COMMAND python3 ${CMAKE_PROJECT_NAME}_test.py
	DEPENDS python_test python_src correct_outputs 
		${CMAKE_PROJECT_NAME}_test
	)
