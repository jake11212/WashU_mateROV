import serial
import random
import time

#change /dev/ttyUSB0 to the com port of the pi
ser = serial.Serial('/dev/ttyUSB0', 9600)

while True:
    x = random.randint(-32767, 32767)
    ser.write(f"{x}\n".encode('utf-8'))
    time.sleep(2)
