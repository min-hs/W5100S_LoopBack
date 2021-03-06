/*
 * wizchip_init.c
 *
 *  Created on: JUL 20, 2021
 *      Author: Louis
 */

#include "wizchip_init.h"


void WIZCHIPInitialize(){

	csDisable();
	reg_wizchip_spi_cbfunc(spiReadByte, spiWriteByte);
	reg_wizchip_cs_cbfunc(csEnable, csDisable);


	uint8_t tmp;
	//w5500, w5200
#if _WIZCHIP_SOCK_NUM_ == 8
	uint8_t memsize[2][8] = { {2,2,2,2,2,2,2,2},{2,2,2,2,2,2,2,2}};
#else
	uint8_t memsize[2][4] = { {2,2,2,2},{2,2,2,2}};
#endif
	if(ctlwizchip(CW_INIT_WIZCHIP,(void*)memsize) == -1)
	{
		//myprintf("WIZCHIP Initialized fail.\r\n");
		printf("WIZCHIP Initialized fail.\r\n", 1, 10);
	  return;
	}
	/* PHY link status check */
	do {
		if(ctlwizchip(CW_GET_PHYLINK, (void*)&tmp) == -1)
		{
			printf("Unknown PHY Link status.\r\n", 1, 10);
		  return;
		}
	} while (tmp == PHY_LINK_OFF);



}

void resetAssert(void)
{
	HAL_GPIO_WritePin(W5x00_RESET_PORT, W5x00_RESET_PIN, GPIO_PIN_RESET);
}

void resetDeassert(void)
{
	HAL_GPIO_WritePin(W5x00_RESET_PORT, W5x00_RESET_PIN, GPIO_PIN_SET);
}


