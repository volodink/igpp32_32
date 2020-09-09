/*MIT License

Copyright (c) 2020 Artem Kashkanov

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.*/

#include <Igpp.h>
#include "define.h"

//Double buffering mechanism
volatile uint8_t frameBuffer[2][(DISPLAY_HEIGTH >> 3) * DISPLAY_WIDTH] = {{0x00}, {0x00}};

volatile uint8_t currentFrame = 0;//or 1

uint8_t sendCathode(uint8_t num)
{
    uint8_t status = 0;

    return status;
}

uint8_t send Anode(uint8_t num)
{
    uint8_t status = 0;

    return status;
}
