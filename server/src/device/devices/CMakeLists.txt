add_library(opengloves_devices STATIC lucidgloves_device.h lucidgloves_device.cpp)

target_link_libraries(opengloves_devices PUBLIC opengloves_server-includes communication_managers communication-includes device-includes)

target_link_libraries(opengloves_devices PRIVATE ipc_grpc)