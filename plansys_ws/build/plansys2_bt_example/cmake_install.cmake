# Install script for directory: /root/plansys_ws/src/ros2_planning_system_examples/plansys2_bt_example

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/root/plansys_ws/install/plansys2_bt_example")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/plansys2_bt_example" TYPE DIRECTORY FILES
    "/root/plansys_ws/src/ros2_planning_system_examples/plansys2_bt_example/launch"
    "/root/plansys_ws/src/ros2_planning_system_examples/plansys2_bt_example/pddl"
    "/root/plansys_ws/src/ros2_planning_system_examples/plansys2_bt_example/behavior_trees_xml"
    "/root/plansys_ws/src/ros2_planning_system_examples/plansys2_bt_example/config"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/plansys2_bt_example/assemble_action_node" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/plansys2_bt_example/assemble_action_node")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/plansys2_bt_example/assemble_action_node"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/plansys2_bt_example" TYPE EXECUTABLE FILES "/root/plansys_ws/build/plansys2_bt_example/assemble_action_node")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/plansys2_bt_example/assemble_action_node" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/plansys2_bt_example/assemble_action_node")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/plansys2_bt_example/assemble_action_node"
         OLD_RPATH "/opt/ros/humble/lib:/root/plansys_ws/install/plansys2_msgs/lib:/root/plansys_ws/install/plansys2_executor/lib:/root/plansys_ws/install/plansys2_planner/lib:/root/plansys_ws/install/plansys2_problem_expert/lib:/root/plansys_ws/install/plansys2_domain_expert/lib:/root/plansys_ws/install/plansys2_popf_plan_solver/lib:/root/plansys_ws/install/plansys2_pddl_parser/lib:/root/plansys_ws/install/plansys2_core/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/plansys2_bt_example/assemble_action_node")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/plansys2_bt_example/assemble_controller_node" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/plansys2_bt_example/assemble_controller_node")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/plansys2_bt_example/assemble_controller_node"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/plansys2_bt_example" TYPE EXECUTABLE FILES "/root/plansys_ws/build/plansys2_bt_example/assemble_controller_node")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/plansys2_bt_example/assemble_controller_node" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/plansys2_bt_example/assemble_controller_node")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/plansys2_bt_example/assemble_controller_node"
         OLD_RPATH "/opt/ros/humble/lib:/root/plansys_ws/install/plansys2_msgs/lib:/root/plansys_ws/install/plansys2_executor/lib:/root/plansys_ws/install/plansys2_planner/lib:/root/plansys_ws/install/plansys2_problem_expert/lib:/root/plansys_ws/install/plansys2_domain_expert/lib:/root/plansys_ws/install/plansys2_popf_plan_solver/lib:/root/plansys_ws/install/plansys2_pddl_parser/lib:/root/plansys_ws/install/plansys2_core/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/plansys2_bt_example/assemble_controller_node")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/plansys2_bt_example/nav2_sim_node" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/plansys2_bt_example/nav2_sim_node")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/plansys2_bt_example/nav2_sim_node"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/plansys2_bt_example" TYPE EXECUTABLE FILES "/root/plansys_ws/build/plansys2_bt_example/nav2_sim_node")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/plansys2_bt_example/nav2_sim_node" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/plansys2_bt_example/nav2_sim_node")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/plansys2_bt_example/nav2_sim_node"
         OLD_RPATH "/opt/ros/humble/lib:/root/plansys_ws/install/plansys2_msgs/lib:/root/plansys_ws/install/plansys2_executor/lib:/root/plansys_ws/install/plansys2_planner/lib:/root/plansys_ws/install/plansys2_problem_expert/lib:/root/plansys_ws/install/plansys2_domain_expert/lib:/root/plansys_ws/install/plansys2_popf_plan_solver/lib:/root/plansys_ws/install/plansys2_pddl_parser/lib:/root/plansys_ws/install/plansys2_core/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/plansys2_bt_example/nav2_sim_node")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libplansys2_recharge_bt_node.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libplansys2_recharge_bt_node.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libplansys2_recharge_bt_node.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/root/plansys_ws/build/plansys2_bt_example/libplansys2_recharge_bt_node.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libplansys2_recharge_bt_node.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libplansys2_recharge_bt_node.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libplansys2_recharge_bt_node.so"
         OLD_RPATH "/opt/ros/humble/lib:/root/plansys_ws/install/plansys2_msgs/lib:/root/plansys_ws/install/plansys2_executor/lib:/root/plansys_ws/install/plansys2_planner/lib:/root/plansys_ws/install/plansys2_problem_expert/lib:/root/plansys_ws/install/plansys2_domain_expert/lib:/root/plansys_ws/install/plansys2_popf_plan_solver/lib:/root/plansys_ws/install/plansys2_pddl_parser/lib:/root/plansys_ws/install/plansys2_core/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libplansys2_recharge_bt_node.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libplansys2_close_gripper_bt_node.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libplansys2_close_gripper_bt_node.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libplansys2_close_gripper_bt_node.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/root/plansys_ws/build/plansys2_bt_example/libplansys2_close_gripper_bt_node.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libplansys2_close_gripper_bt_node.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libplansys2_close_gripper_bt_node.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libplansys2_close_gripper_bt_node.so"
         OLD_RPATH "/opt/ros/humble/lib:/root/plansys_ws/install/plansys2_msgs/lib:/root/plansys_ws/install/plansys2_executor/lib:/root/plansys_ws/install/plansys2_planner/lib:/root/plansys_ws/install/plansys2_problem_expert/lib:/root/plansys_ws/install/plansys2_domain_expert/lib:/root/plansys_ws/install/plansys2_popf_plan_solver/lib:/root/plansys_ws/install/plansys2_pddl_parser/lib:/root/plansys_ws/install/plansys2_core/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libplansys2_close_gripper_bt_node.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libplansys2_open_gripper_bt_node.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libplansys2_open_gripper_bt_node.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libplansys2_open_gripper_bt_node.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/root/plansys_ws/build/plansys2_bt_example/libplansys2_open_gripper_bt_node.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libplansys2_open_gripper_bt_node.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libplansys2_open_gripper_bt_node.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libplansys2_open_gripper_bt_node.so"
         OLD_RPATH "/opt/ros/humble/lib:/root/plansys_ws/install/plansys2_msgs/lib:/root/plansys_ws/install/plansys2_executor/lib:/root/plansys_ws/install/plansys2_planner/lib:/root/plansys_ws/install/plansys2_problem_expert/lib:/root/plansys_ws/install/plansys2_domain_expert/lib:/root/plansys_ws/install/plansys2_popf_plan_solver/lib:/root/plansys_ws/install/plansys2_pddl_parser/lib:/root/plansys_ws/install/plansys2_core/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libplansys2_open_gripper_bt_node.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libplansys2_move_bt_node.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libplansys2_move_bt_node.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libplansys2_move_bt_node.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/root/plansys_ws/build/plansys2_bt_example/libplansys2_move_bt_node.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libplansys2_move_bt_node.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libplansys2_move_bt_node.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libplansys2_move_bt_node.so"
         OLD_RPATH "/opt/ros/humble/lib:/root/plansys_ws/install/plansys2_msgs/lib:/root/plansys_ws/install/plansys2_executor/lib:/root/plansys_ws/install/plansys2_planner/lib:/root/plansys_ws/install/plansys2_problem_expert/lib:/root/plansys_ws/install/plansys2_domain_expert/lib:/root/plansys_ws/install/plansys2_popf_plan_solver/lib:/root/plansys_ws/install/plansys2_pddl_parser/lib:/root/plansys_ws/install/plansys2_core/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libplansys2_move_bt_node.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libplansys2_approach_object_bt_node.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libplansys2_approach_object_bt_node.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libplansys2_approach_object_bt_node.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/root/plansys_ws/build/plansys2_bt_example/libplansys2_approach_object_bt_node.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libplansys2_approach_object_bt_node.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libplansys2_approach_object_bt_node.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libplansys2_approach_object_bt_node.so"
         OLD_RPATH "/opt/ros/humble/lib:/root/plansys_ws/install/plansys2_msgs/lib:/root/plansys_ws/install/plansys2_executor/lib:/root/plansys_ws/install/plansys2_planner/lib:/root/plansys_ws/install/plansys2_problem_expert/lib:/root/plansys_ws/install/plansys2_domain_expert/lib:/root/plansys_ws/install/plansys2_popf_plan_solver/lib:/root/plansys_ws/install/plansys2_pddl_parser/lib:/root/plansys_ws/install/plansys2_core/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libplansys2_approach_object_bt_node.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/package_run_dependencies" TYPE FILE FILES "/root/plansys_ws/build/plansys2_bt_example/ament_cmake_index/share/ament_index/resource_index/package_run_dependencies/plansys2_bt_example")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/parent_prefix_path" TYPE FILE FILES "/root/plansys_ws/build/plansys2_bt_example/ament_cmake_index/share/ament_index/resource_index/parent_prefix_path/plansys2_bt_example")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/plansys2_bt_example/environment" TYPE FILE FILES "/opt/ros/humble/share/ament_cmake_core/cmake/environment_hooks/environment/ament_prefix_path.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/plansys2_bt_example/environment" TYPE FILE FILES "/root/plansys_ws/build/plansys2_bt_example/ament_cmake_environment_hooks/ament_prefix_path.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/plansys2_bt_example/environment" TYPE FILE FILES "/opt/ros/humble/share/ament_cmake_core/cmake/environment_hooks/environment/path.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/plansys2_bt_example/environment" TYPE FILE FILES "/root/plansys_ws/build/plansys2_bt_example/ament_cmake_environment_hooks/path.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/plansys2_bt_example" TYPE FILE FILES "/root/plansys_ws/build/plansys2_bt_example/ament_cmake_environment_hooks/local_setup.bash")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/plansys2_bt_example" TYPE FILE FILES "/root/plansys_ws/build/plansys2_bt_example/ament_cmake_environment_hooks/local_setup.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/plansys2_bt_example" TYPE FILE FILES "/root/plansys_ws/build/plansys2_bt_example/ament_cmake_environment_hooks/local_setup.zsh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/plansys2_bt_example" TYPE FILE FILES "/root/plansys_ws/build/plansys2_bt_example/ament_cmake_environment_hooks/local_setup.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/plansys2_bt_example" TYPE FILE FILES "/root/plansys_ws/build/plansys2_bt_example/ament_cmake_environment_hooks/package.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/packages" TYPE FILE FILES "/root/plansys_ws/build/plansys2_bt_example/ament_cmake_index/share/ament_index/resource_index/packages/plansys2_bt_example")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/plansys2_bt_example/cmake" TYPE FILE FILES "/root/plansys_ws/build/plansys2_bt_example/ament_cmake_export_dependencies/ament_cmake_export_dependencies-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/plansys2_bt_example/cmake" TYPE FILE FILES
    "/root/plansys_ws/build/plansys2_bt_example/ament_cmake_core/plansys2_bt_exampleConfig.cmake"
    "/root/plansys_ws/build/plansys2_bt_example/ament_cmake_core/plansys2_bt_exampleConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/plansys2_bt_example" TYPE FILE FILES "/root/plansys_ws/src/ros2_planning_system_examples/plansys2_bt_example/package.xml")
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/root/plansys_ws/build/plansys2_bt_example/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
