# linefollower
Introduction
 The line follower is a self operating robot that detects and follows a line that is drawn on the floor. The path consists of a black line on a white surface (or it may be reverse of that). The control system used must sense a line and while constantly correcting the wrong moves using feedback mechanism, thus forming a simple yet effective closed loop System. The robot is designed to follow very tight curves.

Basic design and requirements 
The robot is built with arduino Uno, L293D motor driver, IR sensors LM324, platform consisting of a toy car chassis (or hand made Al sheet chassis). The robot is designed using two motors controlling wheels. It has infrared sensors on the bottom for detect black tracking tape . when the sensors detect black surface, output of comparator, LM324 is low logic for black surface and for white surface the output is high. It reports to the microcontroller for accurate control and steering of motors. Arduino Uno and Motor driver L293D were used to drive the motors.

IR reflective sensors have one emitter (IR LED) and one receiver (Phototransistor or photo diode. If we have white surface it reflects the light and it will sensed by the receiver, similarly if we have black surface it absorbs the light and receiver cannot sense light. Photo diode has property that if IR light fall on it its electrical resistance comes down .

L293D is a typical Motor driver or Motor Driver IC which allows DC motor to drive on either direction. L293D is a 16-pin IC which can control a set of two DC motors simultaneously in any direction. It means that you can control two DC motor with a single L293D IC. Dual H-bridge Motor Driver integrated circuit (IC).

 
APPLICATIONS

One of the applications can be to transport items from the point of production to the point of utilisation like a line following robot can be useful for transporting food items made by a cook to the customers' table in a restaurant.

