#ifndef _BSP_LED_H
#define _BSP_LED_H

#include "hal_data.h"

#define LED_RED_ON              (R_IOPORT_PinWrite(&g_ioport_ctrl, LED1_P403, BSP_IO_LEVEL_LOW))
#define LED_RED_OFF             (R_IOPORT_PinWrite(&g_ioport_ctrl, LED1_P403, BSP_IO_LEVEL_HIGH))

#define LED_BLUE_ON             (R_IOPORT_PinWrite(&g_ioport_ctrl, LED2_P404, BSP_IO_LEVEL_LOW))
#define LED_BLUE_OFF            (R_IOPORT_PinWrite(&g_ioport_ctrl, LED2_P404, BSP_IO_LEVEL_HIGH))

#define LED_GREEN_ON            (R_IOPORT_PinWrite(&g_ioport_ctrl, LED3_P405, BSP_IO_LEVEL_LOW))
#define LED_GREEN_OFF           (R_IOPORT_PinWrite(&g_ioport_ctrl, LED3_P405, BSP_IO_LEVEL_HIGH))

extern void LED_Port_Init(void);

#endif //_BSP_LED_H