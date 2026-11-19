# generated from rosidl_cmake/cmake/rosidl_cmake_aggregate_target-extras.cmake.in

# Create a convenience aggregate target communication::communication
# that links all generated interface targets, so downstream packages can use
# a single modern CMake target name instead of ${communication_TARGETS}.
if(communication_TARGETS AND NOT TARGET communication::communication)
  add_library(communication::communication INTERFACE IMPORTED)
  set_target_properties(communication::communication PROPERTIES
    INTERFACE_LINK_LIBRARIES "${communication_TARGETS}")
endif()
