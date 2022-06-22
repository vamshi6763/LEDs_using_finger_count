# LEDs_using_finger_count

This Experiment is used to integrate python program with arduino using serial communication.

Packages required : opencv, pyserial, cvzone, mediapipe

Steps for doing this Experiment:
About main.py:
1. Open any Python IDE, and use my main.py program.
2. Install serial package using the following command in terminal "pip install pyserial".
3. Install openCv package using the following command in terminal "pip install opencv-python".
4. Install cvzone package using the following command in terminal "pip install cvzone".
5. Install mediapipe package using the following command in terminal "pip install meidapipe".
6. In line number 5, we have port='COM_'. for getting the serial port number, goto device manager of your system > ports > check your arduino port number.


![py](https://user-images.githubusercontent.com/101927825/173759396-3acc4995-b5dc-4b1f-94b7-b10b96be5f73.png)


About LEDs_using_finger_count.ino:
1. Open arduino IDE and copy paste the program.
2. select the correct board and COM port and then upload the program.


For Connections:

we require:
1. 4 LEDs
2. Arduino
3. some wires

circuit diagram:

![py2](https://user-images.githubusercontent.com/101927825/173783092-0775f784-3454-472d-963e-4fb7337b9005.png)



1. First of all Upload the LEDs_using_finger_count.ino program on to the arduino
2. Next in python IDE, Run the main.py program
3. Then check for the output

![py3](https://user-images.githubusercontent.com/101927825/173783939-08312f2e-c324-426f-9da9-8a2938c5c804.png)



OUTPUT:

https://user-images.githubusercontent.com/101927825/173785829-30357f42-c405-4343-84e1-14d8d2d07455.mp4
