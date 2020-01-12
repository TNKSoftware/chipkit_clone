#include <USB.h>

USBFS usbDriver;
USBManager USB(usbDriver, 0x0403, 0xA662);
HID_Keyboard Keyboard;

void setup() 
{
    USB.addDevice(Keyboard);
    USB.begin();
}

void loop()
{
    delay(1000);
    Keyboard.print("Hello");
}