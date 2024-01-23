# Copyright 2019 Intelligent Robotics Lab
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

import os

from ament_index_python.packages import get_package_share_directory

from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node


def generate_launch_description():
    # Get the launch directory
    example_dir = get_package_share_directory('plansys2_simple_example')
    namespace = LaunchConfiguration('namespace')

    declare_namespace_cmd = DeclareLaunchArgument(
        'namespace',
        default_value='',
        description='Namespace')

    plansys2_cmd = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(os.path.join(
            get_package_share_directory('plansys2_bringup'),
            'launch',
            'plansys2_bringup_launch_monolithic.py')),
        launch_arguments={
          'model_file': example_dir + '/pddl/simple_example.pddl',
          'namespace': namespace
          }.items())

    # Specify the actions

    
    bolt_acquired_cmd = Node(
        package='plansys2_simple_example',
        executable='bolt_acquired_action_node',
        name='bolt_acquired_action_node',
        namespace=namespace,
        output='screen',
        parameters=[])
    deliver_box_cmd = Node(
        package='plansys2_simple_example',
        executable='deliver_box_action_node',
        name='deliver_box_action_node',
        namespace=namespace,
        output='screen',
        parameters=[])
    empty_box_cmd = Node(  
        package='plansys2_simple_example',
        executable='empty_box_action_node',
        name='empty_box_action_node',
        namespace=namespace,
        output='screen',
        parameters=[])
    fill_box_cmd = Node(
        package='plansys2_simple_example',
        executable='fill_box_action_node',
        name='fill_box_action_node',
        namespace=namespace,
        output='screen',
        parameters=[])
    move_box_robot_cmd = Node(
        package='plansys2_simple_example',
        executable='move_box_robot_action_node',
        name='move_box_robot_action_node',
        namespace=namespace,
        output='screen',
        parameters=[])
    move_robot_cmd= Node(
        package='plansys2_simple_example',
        executable='move_robot_action_node',
        name='move_robot_action_node',
        namespace=namespace,
        output='screen',
        parameters=[])
    pick_up_box_cmd = Node(
        package='plansys2_simple_example',
        executable='pick_up_box_action_node',
        name='pick_up_box_action_node',
        namespace=namespace,
        output='screen',
        parameters=[])
    tool_acquired_cmd = Node(
        package='plansys2_simple_example',
        executable='tool_acquired_action_node',
        name='tool_acquired_action_node',
        namespace=namespace,
        output='screen',
        parameters=[])
    valve_acquired_cmd = Node(
        package='plansys2_simple_example',
        executable='valve_acquired_action_node',
        name='valve_acquired_action_node',
        namespace=namespace,
        output='screen',
        parameters=[])
  

    
    
    ld = LaunchDescription()

    ld.add_action(declare_namespace_cmd)

    # Declare the launch options
    ld.add_action(plansys2_cmd)

    ld.add_action(bolt_acquired_cmd)
    ld.add_action(deliver_box_cmd)
    ld.add_action(empty_box_cmd)
    ld.add_action(fill_box_cmd)
    ld.add_action(move_box_robot_cmd)
    ld.add_action(move_robot_cmd)
    ld.add_action(pick_up_box_cmd)
    ld.add_action(tool_acquired_cmd)
    ld.add_action(valve_acquired_cmd)
  



    return ld
