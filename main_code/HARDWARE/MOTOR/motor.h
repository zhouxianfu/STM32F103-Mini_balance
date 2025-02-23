#ifndef __MOTOR_H
#define __MOTOR_H
#include <sys.h>	 
//#define PWMA   TIM1->CCR1  //PA8   �Ĵ����ĸ�ֵ��
#define AIN2   PBout(12)
#define AIN1   PBout(13)
#define BIN1   PBout(14)
#define BIN2   PBout(15)
//#define PWMB   TIM1->CCR4  //PA11
void MiniBalance_PWM_Init(u16 arr,u16 psc);
void MiniBalance_Motor_Init(void);
int myabs(int a);
void Set_Pwm(int moto1,int moto2);
void Limit_Pwm(void);
u8 Turn_Off(signed int angle);
void TIM3_PWM_Init(u16 arr,u16 psc);
void TIM3_Int_Init(u16 arr,u16 psc);
#endif
