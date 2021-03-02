#include "DRV8830_headers/DRV8830.h"
HAL_StatusTypeDef DRV8830_drive()
// void MiniMoto::drive(int speed) {
//     byte regValue = 0x80;             // Before we do anything, we'll want to
//     //  clear the fault status. To do that
//     //  write 0x80 to register 0x01 on the
//     //  DRV8830.
//     I2CWriteBytes(0x01, &regValue, 1); // Clear the fault status.
//     regValue = (byte)abs(speed);      // Find the byte-ish abs value of the input
//     if (regValue > 63) {
//         regValue = 63;    // Cap the value at 63.
//     }
//     regValue = regValue << 2;         // Left shift to make room for bits 1:0
//     if (speed < 0) {
//         regValue |= 0x01;    // Set bits 1:0 based on sign of input.
//     } else {
//         regValue |= 0x02;
//     }
//
//     I2CWriteBytes(0x00, &regValue, 1);
// }
