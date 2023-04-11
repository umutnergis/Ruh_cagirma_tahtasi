import serial.tools.list_ports
from tkinter import *
from tkinter import messagebox
import time 
def get_ports():

    ports = serial.tools.list_ports.comports()
    
    return ports

def findArduino(portsFound):
    
    commPort = 'None'
    numConnection = len(portsFound)
    
    for i in range(0,numConnection):
        port = foundPorts[i]
        strPort = str(port)
        
        if 'CH340' in strPort: 
            splitPort = strPort.split(' ')
            commPort = (splitPort[0])

    return commPort
            
def reconnect():
    foundPorts = get_ports()        
    connectPort = findArduino(foundPorts)

foundPorts = get_ports()        
connectPort = findArduino(foundPorts)

if connectPort != 'None':
    ser = serial.Serial(connectPort,baudrate = 9600, timeout=1)
    time.sleep(2)
    print('Connected to ' + connectPort)

else:
    print('Connection Issue!')

root = Tk()
root.title("Ruh Çağirma Tahtası")
root.geometry("500x500")
root.configure(background='black')
bg = PhotoImage(file="logo.png")


def myClick():
    myLabel = Label(root, text = "Gönderilen isim = "+ e.get() , bg = "black", fg = "white")
    myLabel.pack()
    ser.write(e.get().encode('utf-8'))
    e.delete(0, END)


e = Entry(root, width = 50, borderwidth = 5)
e.pack()
send_button = Button(root, text = "Gönder", bg = "black", fg = "white", command = myClick).pack()

if connectPort != 'None':
    connectionLabel = Label(root, text = "Bağlandı " + connectPort, bg = "black", fg = "white")
    connectionLabel.pack()
    #name_input = Entry(root, width = 50, borderwidth = 5).pack()
    



else:
    connectionLabel = Label(root, text = "BAĞLANTI BAŞARISIZ", bg = "black", fg = "white")
    connectionLabel.pack()
    response = messagebox.showinfo("Bağlantı Hatası", "Bağlantı hatası oluştu. Tekrar bağlanmak için tekrar bağlana basınız.")
    reconnect_button = Button(root, text = "Tekrar bağlan", bg = "black", fg = "white",command=reconnect).pack()
   

root.mainloop()