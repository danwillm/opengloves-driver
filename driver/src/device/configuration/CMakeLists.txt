add_library(device_configuration STATIC device_configuration.h device_configuration.cpp)

find_package(OpenVR REQUIRED)

target_link_libraries(device_configuration PUBLIC opengloves_server-includes OpenVR::OpenVR)
target_link_libraries(device_configuration PRIVATE device-includes)