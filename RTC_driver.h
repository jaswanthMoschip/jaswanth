#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

/*RTC Registers */
#define RTCCR 0x000 /* Control registers for RTC 32 bit*/
#define RTCLR_T 0X004 /* Time Load register for RTC 32 bit */
#define RTCLR_D 0x008 /*Date load register for RTC 32 bit*/
#define RTCDR_T 0x00c /*Time data register for RTC 32bit */
#define RTCDR_D 0x010 /*Date Data register for RTC 32bit*/
#define RTCMR_T 0x014 /*Time match register for RTC 32 bit*/
#define RTCMR_D 0x018 /*Data match register for RTC 32bit*/ 

typedef struct RTC_DATE
{
    uint8_t day_of_month;
    uint8_t day_of_week;
    uint8_t day_of_year;
    uint8_t month;
    uint8_t year;
}RTC_Date;

typedef struct RTC_Time
{
    uint8_t am_pm;
    uint8_t hours;
    uint8_t seconds;
    uint8_t minutes;
}