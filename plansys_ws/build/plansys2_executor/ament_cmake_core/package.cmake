set(_AMENT_PACKAGE_NAME "plansys2_executor")
set(plansys2_executor_VERSION "2.0.9")
set(plansys2_executor_MAINTAINER "Francisco Martin Rico <fmrico@gmail.com>")
set(plansys2_executor_BUILD_DEPENDS "eigen" "rclcpp" "rclcpp_action" "rclcpp_lifecycle" "lifecycle_msgs" "rclcpp_cascade_lifecycle" "ament_index_cpp" "plansys2_core" "plansys2_pddl_parser" "plansys2_msgs" "plansys2_domain_expert" "plansys2_problem_expert" "plansys2_planner" "pluginlib" "behaviortree_cpp_v3" "std_msgs" "std_srvs" "libzmq3-dev")
set(plansys2_executor_BUILDTOOL_DEPENDS "ament_cmake" "eigen3_cmake_module")
set(plansys2_executor_BUILD_EXPORT_DEPENDS "rclcpp" "rclcpp_action" "rclcpp_lifecycle" "lifecycle_msgs" "rclcpp_cascade_lifecycle" "ament_index_cpp" "plansys2_core" "plansys2_pddl_parser" "plansys2_msgs" "plansys2_domain_expert" "plansys2_problem_expert" "plansys2_planner" "pluginlib" "behaviortree_cpp_v3" "std_msgs" "std_srvs" "libzmq3-dev")
set(plansys2_executor_BUILDTOOL_EXPORT_DEPENDS )
set(plansys2_executor_EXEC_DEPENDS "popf" "rclcpp" "rclcpp_action" "rclcpp_lifecycle" "lifecycle_msgs" "rclcpp_cascade_lifecycle" "ament_index_cpp" "plansys2_core" "plansys2_pddl_parser" "plansys2_msgs" "plansys2_domain_expert" "plansys2_problem_expert" "plansys2_planner" "pluginlib" "behaviortree_cpp_v3" "std_msgs" "std_srvs" "libzmq3-dev")
set(plansys2_executor_TEST_DEPENDS "ament_lint_common" "ament_lint_auto" "ament_cmake_gtest")
set(plansys2_executor_GROUP_DEPENDS )
set(plansys2_executor_MEMBER_OF_GROUPS )
set(plansys2_executor_DEPRECATED "")
set(plansys2_executor_EXPORT_TAGS)
list(APPEND plansys2_executor_EXPORT_TAGS "<build_type>ament_cmake</build_type>")
list(APPEND plansys2_executor_EXPORT_TAGS "<plansys2_executor plugin=\"plugins.xml\"/>")