/*
 * lib_stm32.h
 *
 *  Created on: Nov 18, 2022
 *      Author: Admin
 */

#ifndef LIB_STM32_H_
#define LIB_STM32_H_



#define PORTA_BASE_ADDR 0x40020000
#define PORTB_BASE_ADDR 0x40020400
#define PORTC_BASE_ADDR 0x40020800
#define PORTD_BASE_ADDR 0x40020C00
#define PORTE_BASE_ADDR 0x40021000

#define INPUT_MODE 		0b00
#define OUTPUT_MODE 	0b01
#define ALTERNATE_MODE	0b10
#define ANALOG_MODE		0b11
typedef union
{
	struct
	{
		char MODER0 : 2;
		char MODER1 : 2;
		char MODER2 : 2;
		char MODER3 : 2;
		char MODER4 : 2;
		char MODER5 : 2;
		char MODER6 : 2;
		char MODER7 : 2;
		char MODER8 : 2;
		char MODER9 : 2;
		char MODER10 : 2;
		char MODER11 : 2;
		char MODER12 : 2;
		char MODER13 : 2;
		char MODER14 : 2;
		char MODER15 : 2;
	};
	uint32_t value;
}moder_t;

typedef union
{
	struct
	{
		char OT0 : 1;
		char OT1 : 1;
		char OT2 : 1;
		char OT3 : 1;
		char OT4 : 1;
		char OT5 : 1;
		char OT6 : 1;
		char OT7 : 1;
		char OT8 : 1;
		char OT9 : 1;
		char OT10 : 1;
		char OT11 : 1;
		char OT12 : 1;
		char OT13 : 1;
		char OT14 : 1;
		char OT15 : 1;
	};
	uint32_t value;
} otyper_t;

typedef union
{
	struct
	{
		char OSPEEDR0 : 2;
		char OSPEEDR1 : 2;
		char OSPEEDR2 : 2;
		char OSPEEDR3 : 2;
		char OSPEEDR4 : 2;
		char OSPEEDR5 : 2;
		char OSPEEDR6 : 2;
		char OSPEEDR7 : 2;
		char OSPEEDR8 : 2;
		char OSPEEDR9 : 2;
		char OSPEEDR10 : 2;
		char OSPEEDR11 : 2;
		char OSPEEDR12 : 2;
		char OSPEEDR13 : 2;
		char OSPEEDR14 : 2;
		char OSPEEDR15 : 2;
	};
	uint32_t value;
} ospeedr_t;

typedef union
{
	struct
	{
		char PUPDR0 : 2;
		char PUPDR1 : 2;
		char PUPDR2 : 2;
		char PUPDR3 : 2;
		char PUPDR4 : 2;
		char PUPDR5 : 2;
		char PUPDR6 : 2;
		char PUPDR7 : 2;
		char PUPDR8 : 2;
		char PUPDR9 : 2;
		char PUPDR10 : 2;
		char PUPDR11 : 2;
		char PUPDR12 : 2;
		char PUPDR13 : 2;
		char PUPDR14 : 2;
		char PUPDR15 : 2;
	};
	uint32_t value;
} pupdr_t;

typedef union
{
	struct
	{
		char IDR0 : 1;
		char IDR1 : 1;
		char IDR2 : 1;
		char IDR3 : 1;
		char IDR4 : 1;
		char IDR5 : 1;
		char IDR6 : 1;
		char IDR7 : 1;
		char IDR8 : 1;
		char IDR9 : 1;
		char IDR10 : 1;
		char IDR11 : 1;
		char IDR12 : 1;
		char IDR13 : 1;
		char IDR14 : 1;
		char IDR15 : 1;
	};
	uint32_t value;
} idr_t;

typedef union
{
	struct
	{
		char ODR0 : 1;
		char ODR1 : 1;
		char ODR2 : 1;
		char ODR3 : 1;
		char ODR4 : 1;
		char ODR5 : 1;
		char ODR6 : 1;
		char ODR7 : 1;
		char ODR8 : 1;
		char ODR9 : 1;
		char ODR10 : 1;
		char ODR11 : 1;
		char ODR12 : 1;
		char ODR13 : 1;
		char ODR14 : 1;
		char ODR15 : 1;
	};
	uint32_t value;
} odr_t;

typedef union
{
	struct
	{
		char BSRR0 : 1;
		char BSRR1 : 1;
		char BSRR2 : 1;
		char BSRR3 : 1;
		char BSRR4 : 1;
		char BSRR5 : 1;
		char BSRR6 : 1;
		char BSRR7 : 1;
		char BSRR8 : 1;
		char BSRR9 : 1;
		char BSRR10 : 1;
		char BSRR11 : 1;
		char BSRR12 : 1;
		char BSRR13 : 1;
		char BSRR14 : 1;
		char BSRR15 : 1;
	};
	uint32_t value;
} bsrr_t;

typedef union
{
	struct
	{
		char LCKR0 : 1;
		char LCKR1 : 1;
		char LCKR2 : 1;
		char LCKR3 : 1;
		char LCKR4 : 1;
		char LCKR5 : 1;
		char LCKR6 : 1;
		char LCKR7 : 1;
		char LCKR8 : 1;
		char LCKR9 : 1;
		char LCKR10 : 1;
		char LCKR11 : 1;
		char LCKR12 : 1;
		char LCKR13 : 1;
		char LCKR14 : 1;
		char LCKR15 : 1;
	};
	uint32_t value;
} lckr_t;

typedef union
{
	struct
	{
		char AFRL0 : 4;
		char AFRL1 : 4;
		char AFRL2 : 4;
		char AFRL3 : 4;
		char AFRL4 : 4;
		char AFRL5 : 4;
		char AFRL6 : 4;
		char AFRL7 : 4;
	};
	uint16_t value;
} afrl_t;

typedef union
{
	struct
	{
		char AFRH0 : 4;
		char AFRH1 : 4;
		char AFRH2 : 4;
		char AFRH3 : 4;
		char AFRH4 : 4;
		char AFRH5 : 4;
		char AFRH6 : 4;
		char AFRH7 : 4;
	};
	uint16_t value;
} afrh_t;

typedef struct
{
	moder_t MODER;
	otyper_t OTYPER;
	ospeedr_t OSPEEDR;
	pupdr_t PUPDR;
	idr_t IDR;
	odr_t ODR;
	bsrr_t BSRR;
	lckr_t LCKR;
	afrl_t AFRL;
	afrh_t AFRH;
} GPIO_t;


#endif /* LIB_STM32_H_ */
