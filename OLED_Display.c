
#include "headfile.h"

uint32_t OLED_i=0;
//uint8_t Oled_Page=1;
//uint8_t Old_Oled_Page=1;

//void Oled_Page0(void);
//void Oled_Page1(void);
//void Oled_Page2(void);
//void Oled_Page3(void);


void Oled_Page_Display(void)
{
    uint8_t x,y;
	
	  x=0;y=0;
	  OLED_ShowString(x,y,OLEDString_ADG1208_1,16);
	  x=72;
	  OLED_ShowCHinesePhrase(x,y,&(tongdaoxuanze[0][0]),2);
		x=104;
	  OLED_ShowString(x,y,"S",16);
	  x=112;
    OLED_ShowNum(x,y,(u32)ADG1208_1Channel,1,16);	

	
   	x=0;y=2;
	  OLED_ShowString(x,y,OLEDString_ADG1208_2,16);
	  x=72;
	  OLED_ShowCHinesePhrase(x,y,&(tongdaoxuanze[0][0]),2);
		x=104;
	  OLED_ShowString(x,y,"S",16);
	  x=112;
    OLED_ShowNum(x,y,(u32)ADG1208_2Channel,1,16);	
		
		x=0;y=4;
    OLED_ShowNum(x,y,(u32)ADG1208_DATA[0],2,16);	
		x=48;y=4;
		OLED_ShowNum(x,y,(u32)ADG1208_DATA[1],2,16);	
		x=96;y=4;
		OLED_ShowNum(x,y,(u32)ADG1208_DATA[2],2,16);	
		
		x=0;y=6;
		OLED_ShowNum(x,y,(u32)OLED_i,8,16);	
		
		OLED_i++;

}





//void Oled_Page_Display(void)
//{
//	if(Oled_Page!=Old_Oled_Page)
//		OLED_Clear();
//		
//	switch(Oled_Page)
//	{
//		case 0: Oled_Page0();break;
//		case 1: Oled_Page1();break;
//		case 2: Oled_Page2();break;
//		case 3: Oled_Page3();break;
//		default:break;	
//	}
//	Old_Oled_Page=Oled_Page;
//}

//void Oled_Page0(void)
//{
//    uint8_t x,y;
//	
//	  x=2;y=0;
//	  OLED_ShowCHinesePhrase(x,y,&(qishipinlu[0][0]),4);
//		x=66;
//    OLED_ShowNum(x,y,(u32)(Start_Frequency_KHz*1000),8,16);	

//		x=2;y=2;
//	  OLED_ShowCHinesePhrase(x,y,&(pinluzenggliang[0][0]),4);
//		x=66;
//	  OLED_ShowNum(x,y,(u32)Frequency_Increment_Hz,5,16);
//	
//		x=2;y=4;
//	  OLED_ShowCHinesePhrase(x,y,&(zengliangshu[0][0]),3);
//		x=56;
//	  OLED_ShowNum(x,y,(u32)Increment_Number,7,16);
//	
//	
//	
//}
//void Oled_Page1(void)
//{
//	  uint8_t x,y;
//	
//  	x=2;y=0;
//	  OLED_ShowCHinesePhrase(x,y,&(zukang[0][0]),2);
//		x=50;
//    OLED_ShowNum(x,y,(u32) Impedance_Measurement,9,16);	

//		x=2;y=2;
//	  OLED_ShowCHinesePhrase(x,y,&(xiangwei[0][0]),2);
//		x=35;
//	  OLED_ShowNum(x,y,(u32) Phase_ACtual,3,16);	
//		x=68;
//	  OLED_ShowCHinesePhrase(x,y,&(wendu[0][0]),2);
//		x=104;
//	  OLED_ShowNum(x,y,(u32) AD5933_Temperature,2,16);	
//	
//	  Get_OledDates();
//	  x=45;y=6;
//	  OLED_ShowString(x,y,&(OledDates1_string.dates[0]),8);	
//		y=7;
//	  OLED_ShowString(x,y,&(OledDates2_string.dates[0]),8);	
//}

//void Oled_Page2(void)
//{
//	  uint8_t x,y;
//	  
//    x=2;y=0;
//	  OLED_ShowCHinesePhrase(x,y,&(shibu[0][0]),2);
//	  x=50;
//    OLED_ShowNum(x,y,(u32)Real_part,7,16);	
//    
//  	x=2;y=2;
//	  OLED_ShowCHinesePhrase(x,y,&(xubu[0][0]),2);
//	  x=50;
//	  OLED_ShowNum(x,y,(u32)Imaginary_part,7,16);
//	
//	  x=2;y=4;
//	  OLED_ShowCHinesePhrase(x,y,&(fankuidianzu[0][0]),4);
//	  x=80;
//		switch(R_Value) 
//		{
//			case  Resistance_200R: OLED_ShowString(x,y,OLEDString_R_200R,16);break;//A2=0;A1=0;A0=0
//			case  Resistance_510R: OLED_ShowString(x,y,OLEDString_R_510R,16);break;//A2=0;A1=0;A0=1
//			case  Resistance_1K:   OLED_ShowString(x,y,OLEDString_R_1K,16);break;//A2=0;A1=1;A0=0
//			case  Resistance_10K:  OLED_ShowString(x,y,OLEDString_R_10K,16);break;//A2=0;A1=1;A0=1
//			case  Resistance_100K: OLED_ShowString(x,y,OLEDString_R_100K,16);break;//A2=1;A1=0;A0=0
//			case  Resistance_220K: OLED_ShowString(x,y,OLEDString_R_220K,16);break;//A2=1;A1=0;A0=1
//			case  Resistance_510K: OLED_ShowString(x,y,OLEDString_R_510K,16);break;//A2=1;A1=1;A0=0
//			case  Resistance_1M:   OLED_ShowString(x,y,OLEDString_R_1M,16);break;//A2=1;A1=1;A0=1
//			default:break;	
//		}	
//		
//		x=2;y=6;
//		OLED_ShowCHinesePhrase(2,6,&(jiaozhengdianzu[0][0]),4);	  
//		x=80;
//		switch(GainCoefficient_Resisitance) 
//		{
//			case  R_200R: OLED_ShowString(x,y,OLEDString_R_200R,16);break;//A2=0;A1=0;A0=0
//			case  R_510R: OLED_ShowString(x,y,OLEDString_R_510R,16);break;//A2=0;A1=0;A0=1
//			case  R_1K:   OLED_ShowString(x,y,OLEDString_R_1K,16);break;//A2=0;A1=1;A0=0
//			case  R_10K:  OLED_ShowString(x,y,OLEDString_R_10K,16);break;//A2=0;A1=1;A0=1
//			case  R_100K: OLED_ShowString(x,y,OLEDString_R_100K,16);break;//A2=1;A1=0;A0=0
//			case  R_220K: OLED_ShowString(x,y,OLEDString_R_220K,16);break;//A2=1;A1=0;A0=1
//			case  R_510K: OLED_ShowString(x,y,OLEDString_R_510K,16);break;//A2=1;A1=1;A0=0
//			case  R_1M:   OLED_ShowString(x,y,OLEDString_R_1M,16);break;//A2=1;A1=1;A0=1
//			default:break;	
//		}	
//		
////		OLED_ShowCHinesePhrase(2,6,&(zengyixishu[0][0]),2);
////	  OLED_ShowNum(34,6,(u32)Gain_Coefficient,11,16);
//	
//}

//void Oled_Page3(void)
//{
//    	uint8_t x,y;
//	    x=2;y=0;
//			OLED_ShowCHinesePhrase(x,y,&(zengyixishu[0][0]),4);
//    	y=2;
//	    OLED_ShowNum(x,y,(u32)Gain_Coefficient,16,16);
//}
