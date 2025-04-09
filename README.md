# Line-follower
This is a simple Line Follower Robot made with an Arduino Uno, IR sensors, L293D motor driver, and Johnson motors. The robot can follow a white line on a black surface through the use of 5 IR sensors.

The IR sensors function based on sensing reflected infrared light—white reflects, and black absorbs IR. When the middle sensor senses white, and the rest sense black, the bot is positioned correctly. When other sensors also sense white, it means certain maneuvers. For instance:

If the middle, left, and farthest left sensors sense white, it means a 90° left turn.

Likewise, right-side readings mean a right turn.

Employing these readings, the Arduino interprets the line and controls the motors through the L293D driver so that the robot smoothly and accurately traces the white line.