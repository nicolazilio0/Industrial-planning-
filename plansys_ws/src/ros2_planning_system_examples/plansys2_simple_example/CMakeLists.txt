cmake_minimum_required(VERSION 3.5)
project(plansys2_simple_example)


find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(plansys2_msgs REQUIRED)
find_package(plansys2_executor REQUIRED)

set(CMAKE_CXX_STANDARD 17)

set(dependencies
    rclcpp
    plansys2_msgs
    plansys2_executor
)

add_executable(move_action_node src/move_action_node.cpp)
ament_target_dependencies(move_action_node ${dependencies})

add_executable(charge_action_node src/charge_action_node.cpp)
ament_target_dependencies(charge_action_node ${dependencies})

add_executable(ask_charge_action_node src/ask_charge_action_node.cpp)
ament_target_dependencies(ask_charge_action_node ${dependencies})

add_executable(bolt_acquired_action_node src/bolt_acquired_action_node.cpp)
ament_target_dependencies(bolt_acquired_action_node ${dependencies})

add_executable(deliver_box_action_node src/deliver_box_action_node.cpp)
ament_target_dependencies(deliver_box_action_node ${dependencies})

add_executable(empty_box_action_node src/empty_box_action_node.cpp)
ament_target_dependencies(empty_box_action_node ${dependencies})

add_executable(fill_box_action_node src/fill_box_action_node.cpp)
ament_target_dependencies(fill_box_action_node ${dependencies})

add_executable(pick_up_box_action_node src/pick_up_box_action_node.cpp)
ament_target_dependencies(pick_up_box_action_node ${dependencies})

add_executable(tool_acquired_action_node src/tool_acquired_action_node.cpp)
ament_target_dependencies(tool_acquired_action_node ${dependencies})

add_executable(valve_acquired_action_node src/valve_acquired_action_node.cpp)
ament_target_dependencies(valve_acquired_action_node ${dependencies})



add_executable(move_robot_action_node src/move_robot_action_node.cpp)
ament_target_dependencies(move_robot_action_node ${dependencies})

add_executable(move_box_robot_action_node src/move_box_robot_action_node.cpp)
ament_target_dependencies(move_box_robot_action_node ${dependencies})



install(DIRECTORY launch pddl DESTINATION share/${PROJECT_NAME})

install(TARGETS
  move_action_node
  charge_action_node
  ask_charge_action_node
  bolt_acquired_action_node
  deliver_box_action_node
  empty_box_action_node
  fill_box_action_node
  pick_up_box_action_node
  tool_acquired_action_node
  valve_acquired_action_node
  move_robot_action_node
  move_box_robot_action_node
  


  ARCHIVE DESTINATION lib
  LIBRARY DESTINATION lib
  RUNTIME DESTINATION lib/${PROJECT_NAME}
)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  ament_lint_auto_find_test_dependencies()

  find_package(ament_cmake_gtest REQUIRED)
endif()

ament_export_dependencies(${dependencies})

ament_package()