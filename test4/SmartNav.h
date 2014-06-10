/**********************************************************************************/
/*                                                                                */
/*                                                                               */
/*  DATE                :May 05, 2014,TIME->13:58:32                                    */
/*  Project name        :SmartNav                                                  */
/*  FileName            :SmartNav.h*/
/*  CPU GROUP       	:27                                                        */
/*  Designer Engg     	: Nithin.P               
/*                                                                                */
/*  This file is generated by Renesas Project Generator (Ver.4.18).      		  */
/*                                     											  */
/**********************************************************************************/

#ifndef  	__SmartNav_h_

#define 	__SmartNav_h_

/********************************************************************************************/
/*  DATE			:May 05, 2014,TIME->14:04:32             */
/*  FileName		:SmartNav.h 			*/
/*  Designer Engg	:Nithin.P                          	                */
/* 	Include File																						*/
/*                                                                                         */
/*                                                                                         */
/******************************************************************************************/



#include "bsp/BSP.h"
#include "Display/CreateObj.h"
#include "Display/MainForm.h"
#include "Display/xEvent.h"
#include "Display/framebuffer.h"
#include <stdio.h>
#include <string.h>




/********************************************************************************************/
/*  DATE			:May 20, 2014,TIME->16:14:36             */
/*  FileName		:SmartNav.h 			*/
/*  Designer Engg	:Nithin.P                          	                */
/* variables used in smart navi like fuel ignition etc*/
/*                                                                                         */
/*                                                                                         */
/******************************************************************************************/

enum _RTC_State{
RTC_Init,
RTC_Start,
RTC_Update,
RTC_RUN,
};

enum Taxi_State{
Vacant_State,
Hired_State,
Topay_State,
};

extern enum Taxi_State Taxi_Mode;

enum _Engage_Status{
	Engage_State,
	Engaged_State,
};


enum Smart_mode{
HiredDAY_AC_mode=1,
HiredDAY_NAC_mode=2,
HiredNight_AC_mode=3,
HiredNight_NAC_mode=4,
Transit_mode=9,
Topay_Mode=5,
Bid_Accept_MOde=8,
Vaccant_Mode=0,
};

enum _Bidding_State{
Bidding_msg_Received,
Bidding_Accepted,
Bidding_Rejected,
Bidding_Init,
	
};

typedef struct {
uchar * Lat;
uchar * Lon;	
uchar D_Id[6];	
uint16_t BIDDING_ID,FARE,DIST;
uint16_t WAITING_TIME_HOUR,WAITING_TIME_MIN;
uint8_t  SPEED[6],TIMEBUFF[9],ODDMETER_DEC,DIST_DEC,FARE_DEC;  ///TIMEBUFF NEED TO CIRRECTED AFTER COMMUNICATION IS PROPER
unsigned long ODDMETER;
enum Smart_mode GMODE; 
uchar FUEL;
uchar IGNITION;
enum _RTC_State RTC_State;
enum _Engage_Status  Engage_Status;
enum _Bidding_State  Bidding_State;
} SmartNav;
extern SmartNav Navigation;






/********************************************************************************************/
/*  DATE			:May 05, 2014,TIME->14:08:57                */
/*  FileName		:SmartNav.h 						    	*/
/*  Designer Engg	:Nithin.P   			                    */
/* 	VARIABLE INITILIZATION 										*/
/*                                                                                         */
/*                                                                                         */
/******************************************************************************************/

extern 		struct 		xEvent		e,eFrm1,eBt1,eBt2,eBt3,eBt4,eBt5,eBt6,eBt7,eBt8;
extern volatile  	struct 		xEvent 		* e1;


void InitVariable();

#endif