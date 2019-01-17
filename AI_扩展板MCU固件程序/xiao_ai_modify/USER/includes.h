/*
*********************************************************************************************************
*
*	模块名称 : 头文件汇总
*	文件名称 : includes.h
*	版    本 : V1.0
*	说    明 : 当前使用头文件汇总
*
*	修改记录 :
*		版本号    日期        作者     说明
*		V1.0    2015-08-02  Eric2013   首次发布
*
*
*********************************************************************************************************
*/

#ifndef  __INCLUDES_H__
#define  __INCLUDES_H__

/*
*********************************************************************************************************
*                                         标准库
*********************************************************************************************************
*/
#include  <stdarg.h>
#include  <stdio.h>
#include  <stdlib.h>
#include  <math.h>
#include  <string.h>

/*
*********************************************************************************************************
*                                         其它库
*********************************************************************************************************
*/


/*
*********************************************************************************************************
*                                           OS
*********************************************************************************************************
*/
#include "FreeRTOS.h"
#include "task.h"
#include "queue.h"
//#include "croutine.h"
#include "semphr.h"
//#include "event_groups.h"


/*
*********************************************************************************************************
*                                           宏定义
*********************************************************************************************************
*/




/*
*********************************************************************************************************
*                                        APP / BSP
*********************************************************************************************************
*/

//#include  <bsp.h>
#include "sys.h"
#include "delay.h"
#include "usart.h"
#include "led.h"
#include "key.h"
#include "sn3218_drv.h"
#include "sn3218_api.h"
#include "protocol.h"
#include "spi.h"
#include "wireless_drv.h"
#include "wireless_app.h"
#include "exti.h"
#include "crc16.h"
#include "74.h"
#include "frame_74.h"
#include "device.h"
#include "frame_route.h"

#include "stmflash.h"
#include "rsa.h"
#include "aes.h"
#include "encrypt.h"
#include "wdg.h"
#include "app.h"

/* 在主函数中调用 */
//extern void vSetupSysInfoTest(void);

#endif

/******************************************* (END OF FILE) *********************************/
