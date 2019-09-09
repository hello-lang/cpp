add_executable(hello_world
	${hello_world_SOURCE_DIR}/src/main.cpp)


add_custom_command(
	TARGET hello_world
	POST_BUILD
	COMMAND $<TARGET_FILE:hello_world>
	COMMENT "Running the binary"
)

