/**********************************************************************************/
/*                                                                                */
/*                                                                               */
/*  DATE                   :May 06, 2014,TIME->10:58:24                                    */
/*  Project name        :SmartNav                                                  */
/*  FileName              :framebuffer.h*/
/*  CPU GROUP       :27                                                        */
/*  Designer Engg     : Nithin.P               
/*                                                                                */
/*  This file is generated by Renesas Project Generator (Ver.4.18).      		  */
/*                                     											  */
/**********************************************************************************/

#ifndef  __framebuffer_h_

#define __framebuffer_h_
void LcdPixel ( unsigned int x, unsigned int y, unsigned char mode );
void LcdClear ();
void LcdLine ( unsigned int x1, unsigned int y1, unsigned int x2, unsigned int y2, unsigned char mode );
void LcdRect(unsigned int x,unsigned int y, unsigned int w,unsigned int h,unsigned char mode);
void LcdBox(unsigned int x,unsigned int y, unsigned int w,unsigned int h,unsigned char mode);
void LcdUpdate (  );


//string printing function
void LcdPutChar2(unsigned char const * bmp,unsigned int x,unsigned int y,unsigned char w,unsigned char h);
void LcdPutStr2(char *str,unsigned int x,unsigned y);

void LcdPutChar3(unsigned char const * bmp,unsigned int x,unsigned int y,unsigned char w,unsigned char h,char mode);
void LcdPutStr3(char *str,unsigned int x,unsigned y,char mode);

void LcdPutStr1(char *str,unsigned int x,unsigned y);
void LcdPutStr4(char *str,unsigned int x,unsigned y);

void print_clock(int x,int y);
void show_gps(int x,int y);
void show_power(int x,int y);
void show_gprs(int x,int y);
void show_forhire(int x,int y);
extern unsigned char const  clock[];
extern unsigned char const  power_symbole[];
extern unsigned char const  gps_symbole[];
extern unsigned char const  gprs_symbole[];
#endif