# CMake generated Testfile for 
# Source directory: /root/plansys_ws/src/plansys2_tfd_plan_solver/test/unit
# Build directory: /root/plansys_ws/build/plansys2_tfd_plan_solver/test/unit
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(tfd_test "/usr/bin/python3.10" "-u" "/opt/ros/humble/share/ament_cmake_test/cmake/run_test.py" "/root/plansys_ws/build/plansys2_tfd_plan_solver/test_results/plansys2_tfd_plan_solver/tfd_test.gtest.xml" "--package-name" "plansys2_tfd_plan_solver" "--output-file" "/root/plansys_ws/build/plansys2_tfd_plan_solver/ament_cmake_gtest/tfd_test.txt" "--command" "/root/plansys_ws/build/plansys2_tfd_plan_solver/test/unit/tfd_test" "--gtest_output=xml:/root/plansys_ws/build/plansys2_tfd_plan_solver/test_results/plansys2_tfd_plan_solver/tfd_test.gtest.xml")
set_tests_properties(tfd_test PROPERTIES  LABELS "gtest" REQUIRED_FILES "/root/plansys_ws/build/plansys2_tfd_plan_solver/test/unit/tfd_test" TIMEOUT "60" WORKING_DIRECTORY "/root/plansys_ws/build/plansys2_tfd_plan_solver/test/unit" _BACKTRACE_TRIPLES "/opt/ros/humble/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/humble/share/ament_cmake_gtest/cmake/ament_add_gtest_test.cmake;86;ament_add_test;/opt/ros/humble/share/ament_cmake_gtest/cmake/ament_add_gtest.cmake;93;ament_add_gtest_test;/root/plansys_ws/src/plansys2_tfd_plan_solver/test/unit/CMakeLists.txt;1;ament_add_gtest;/root/plansys_ws/src/plansys2_tfd_plan_solver/test/unit/CMakeLists.txt;0;")
subdirs("../../gtest")
