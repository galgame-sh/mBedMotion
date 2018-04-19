#include "mbed.h"
#include "LM75B.h"

LM75B tmp(p28,p27);
Serial PC (USBTX,USBRX);
int main ()
{
    while (1) {
        PC.printf("%.2f degree Celsius\n",tmp.read());
        wait(1.0);
    }
}
