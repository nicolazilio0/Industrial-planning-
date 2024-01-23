# CMake generated Testfile for 
# Source directory: /root/plansys_ws/src/ros2_planning_system/plansys2_bt_actions/test/unit
# Build directory: /root/plansys_ws/build/plansys2_bt_actions/test/unit
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(bt_action_test "/usr/bin/python3.10" "-u" "/opt/ros/humble/share/ament_cmake_test/cmake/run_test.py" "/root/plansys_ws/build/plansys2_bt_actions/test_results/plansys2_bt_actions/bt_action_test.gtest.xml" "--package-name" "plansys2_bt_actions" "--output-file" "/root/plansys_ws/build/plansys2_bt_actions/ament_cmake_gtest/bt_action_test.txt" "--command" "/root/plansys_ws/build/plansys2_bt_actions/test/unit/bt_action_test" "--gtest_output=xml:/root/plansys_ws/build/plansys2_bt_actions/test_results/plansys2_bt_actions/bt_action_test.gtest.xml")
set_tests_properties(bt_action_test PROPERTIES  LABELS "gtest" REQUIRED_FILES "/root/plansys_ws/build/plansys2_bt_actions/test/unit/bt_action_test" TIMEOUT "60" WORKING_DIRECTORY "/root/plansys_ws/build/plansys2_bt_actions/test/unit" _BACKTRACE_TRIPLES "/opt/ros/humble/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/humble/share/ament_cmake_gtest/cmake/ament_add_gtest_test.cmake;86;ament_add_test;/opt/ros/humble/share/ament_cmake_gtest/cmake/ament_add_gtest.cmake;93;ament_add_gtest_test;/root/plansys_ws/src/ros2_planning_system/plansys2_bt_actions/test/unit/CMakeLists.txt;24;ament_add_gtest;/root/plansys_ws/src/ros2_planning_system/plansys2_bt_actions/test/unit/CMakeLists.txt;0;")
subdirs("../../gtest")
