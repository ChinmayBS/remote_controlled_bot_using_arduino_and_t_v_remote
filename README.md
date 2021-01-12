
<div align="center">

##  Remote Controlled Car using Arduino and T V Remote

</div>


**Steps**

1. Arduino and I R remote (Finding Hexadecimal values for remote keys)
3. L293D motor driver connections and testing motors
4. Final bot



### Arduino and I R remote

[I R sensor connections](https://www.wevideo.com/view/2001222707)

After uploading code remote.ino. Open serial monitor and press any keys on remote and  note the corresponding values
(ignore FFFFFFF).

### L293D motor driver connections and testing motors

[L293D IC Connections](https://www.wevideo.com/view/2000061079)

After connecting L293D motor driver with Arduino upload
testing-motors.ino file. Then observe the rotation of motors.

For left motor to rotate input1 and input2 in the code(line 40,41) should be opposite i.e, HIGH and LOW or LOW and HIGH.

For right motor to rotate input1 and input2 in the code(line 43,44) should be opposite i.e, HIGH and LOW or LOW and HIGH.

For left motor to be in off state both input1 and 2 should be LOW. For right motor to be in off state both input1 and 2 should be LOW.

## Final bot

Now in the code final-bot replace ------ with the corresponding hexadecimal values you got.

And also note that the values on input1,2,3 and 4 in loop()
function may change. So change HIGH and LOW values according to your connections.
