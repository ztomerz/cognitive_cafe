# cognitive_cafe
The workspace under which we ran our simulation.

Under /home/san/tiago_public_ws/src/pal_gazebo_worlds/worlds store our world file, which stores the simulation environment.

Under /home/san/tiago_public_ws/src/tiago_tutorials/tiago_pick_demo/scripts we store the Python scripts which serve as nodes in our simulation. 

pick_client.py sends orders for the robot to do (movement and actions), and uses pick_and_place_server.py to compute cup location and joint planning for the pick up of the cup. 

Under /home/san/tiago_public_ws/src/tiago_tutorials/tiago_pick_demo/scripts we store the launch files which start the simulation with the nodes and the environment + robot.
