
import serial
import pyautogui # a package allows you to manipulate you keyboard
# set up the serial communication
ser = serial.Serial(port='/dev/ttyACM1', baudrate=9600, timeout=.1)
# if you are using windows
#ser =serial.Serial(prot='comPort', baudrate=9600,timeout=.1)

while True:                                              

    data = str(ser.readline())# get the data
    #print(data)# printing the value
    if "J" in data:
        pyautogui.press(" ") #press space
    data = "" # reset the data buffer to null


