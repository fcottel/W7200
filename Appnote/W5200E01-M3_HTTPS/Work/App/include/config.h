#ifndef _CONFIG_H_
#define _CONFIG_H_

#include "stm32f10x.h"
#include "Types.h"
//=================================================
// Port define 

// Port A
#define LED3				GPIO_Pin_0	// out
#define LED4				GPIO_Pin_1	// out

#define PA2				GPIO_Pin_2	// 
#define PA3				GPIO_Pin_3	// 

#define WIZ_SCS			        GPIO_Pin_4	// out
#define WIZ_SCLK			GPIO_Pin_5	// out
#define WIZ_MISO			GPIO_Pin_6	// in
#define WIZ_MOSI			GPIO_Pin_7	// out

#define PA8				GPIO_Pin_8	// 

#define USART1_TX		        GPIO_Pin_9	// out
#define USART1_RX		        GPIO_Pin_10	// in 

#define PA11				GPIO_Pin_11	// 
#define PA12				GPIO_Pin_12	// 
#define PA13				GPIO_Pin_13	// 
#define PA14				GPIO_Pin_14	// 
#define PA15				GPIO_Pin_15	// 

//Port B
#define WIZ_INT			        GPIO_Pin_0	// in

#define PB1				GPIO_Pin_1	// 
#define PB2				GPIO_Pin_2	// 
#define PB3				GPIO_Pin_3	// 
#define PB4				GPIO_Pin_4	// 
#define PB5				GPIO_Pin_5	// 
#define PB6				GPIO_Pin_6	// 
#define PB7				GPIO_Pin_7	// 
#define WIZ_RESET		        GPIO_Pin_8	// out
#define WIZ_PWDN		        GPIO_Pin_9	// out
#define PB10			  	GPIO_Pin_10	// 
#define PB11				GPIO_Pin_11	// 
#define PB12				GPIO_Pin_12	// 
#define PB13				GPIO_Pin_13	// 
#define PB14				GPIO_Pin_14	// 
#define PB15				GPIO_Pin_15	// 


// Port C
#define PC13				GPIO_Pin_13	//
#define PC14				GPIO_Pin_14	//
#define PC15				GPIO_Pin_15	//



//=================================================
typedef struct _CONFIG_MSG
{
	uint8 Mac[6];
	uint8 Lip[4];
	uint8 Sub[4];
	uint8 Gw[4];
	uint8 DNS_Server_IP[4];	
	uint8  DHCP;
}
CONFIG_MSG;


typedef struct _CONFIG_TYPE_DEF
{
	uint16 port;
	uint8 destip[4];
}CHCONFIG_TYPE_DEF;

	
#define SOCK_CONFIG		2	// UDP
#define SOCK_DNS		2	// UDP
#define SOCK_DHCP		3	// UDP

#define MAX_BUF_SIZE		1460
#define KEEP_ALIVE_TIME	30	// 30sec

#define ON	1
#define OFF	0

#define HIGH		1
#define LOW		0

#define __GNUC__


#define TX_RX_MAX_BUF_SIZE	2048

extern uint8 TX_BUF[TX_RX_MAX_BUF_SIZE];
extern uint8 RX_BUF[TX_RX_MAX_BUF_SIZE];

//For resetting app after HTTP cgi networking setting
//Added by Gang 2011-9-27
typedef  void (*pFunction)(void);
#define ApplicationAddress 	0x08000000
#endif

