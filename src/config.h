
#ifndef		__CONFIG_H
#define		__CONFIG_H


/*********************************************************/

#define MAIN_Fosc		22118400L	//������ʱ��
//#define MAIN_Fosc		12000000L	//������ʱ��
//#define MAIN_Fosc		11059200L	//������ʱ��
//#define MAIN_Fosc		 5529600L	//������ʱ��
//#define MAIN_Fosc		24000000L	//������ʱ��


/*********************************************************/

#include	"STC15Fxxxx.H"


/**************************************************************************/

#define USART_BAUDRATE  (115200ul)

/***********************************************************/


#define USE_USART1
//#define USART_USE_TIMER1  //not ok
//#define USART_USE_TIMER2  //not ok

#define	COM_TX1_Lenth	64
#define	COM_RX1_Lenth	64

#define	USART_BUF_type	idata



#define	SPI_BUF_type	idata


#define USE_TIMER0
#define TIMER0_FREQ     (1000)

#endif
