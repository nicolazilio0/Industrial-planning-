# Industrial-planning-


# PROBLEM 1

# PROBLEM 2

# PROBLEM 3

# PROBLEM 4

# PROBLEM 5


Usage: 
Build the colcon workspace
```

cd /plansys_ws
colcon build --symlink-install
source install/setup.bash

```
Then export the environment variable for TFD planner 

```
export TFD_HOME = ${HOME}/plansys_ws/src/plansys2_tfd_plan_solver/TemporalFastDownward/downward

```

Now on first terminal run 

```
ros2 launch plansys2_simple_example plansys2_simple_example_launch.py
```

On a separate terminal
```
source install/setup.bash
cd plansys_ws/src/ros2_planning_system_examples/plansys2_simple_example/launch
ros2 run plansys2_terminal plansys2_terminal
```

Now the PlanSys2 terminal will open
Here to test the problems you can do 
```
source commands
run
```

The planner should now execute the predefined plan



https://github.com/nicolazilio0/Industrial-planning-/assets/67425578/07d9ab6e-15a9-476a-9079-3f9d0df7f044




