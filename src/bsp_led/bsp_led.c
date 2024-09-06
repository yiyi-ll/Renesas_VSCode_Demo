#include "bsp_led.h"

void LED_Port_Init(void)
{
    R_IOPORT_Open(&g_ioport_ctrl, g_ioport.p_cfg);
}