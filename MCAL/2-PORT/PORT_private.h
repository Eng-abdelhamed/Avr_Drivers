/*******************************************************   ******************/
/*****************************************************   ******************/
/********************** author     : Abdelhamed Ahmed *********************/
/********************** Layer      : MCAL             *********************/
/********************** SWC        : LCD              *********************/
/********************** version    : 1.00             *********************/
/****************************************************   *******************/
/*****************************************************   ******************/
#ifndef PORT_PRIVATE_H
#define PORT_PRIVATE_H

#define CONC(b7,b6,b5,b4,b3,b2,b1,b0)          CONC_HELPER(b7,b6,b5,b4,b3,b2,b1,b0)
#define  CONC_HELPER(b7,b6,b5,b4,b3,b2,b1,b0)  0b##b7##b6##b5##b4##b3##b2##b1##b0


#define PORTA_DIR          CONC(PORTA_PIN7_DIR,PORTA_PIN6_DIR,PORTA_PIN5_DIR,PORTA_PIN4_DIR,PORTA_PIN3_DIR,PORTA_PIN2_DIR,PORTA_PIN1_DIR,PORTA_PIN0_DIR)
#define PORTB_DIR          CONC(PORTB_PIN7_DIR,PORTB_PIN6_DIR,PORTB_PIN5_DIR,PORTB_PIN4_DIR,PORTB_PIN3_DIR,PORTB_PIN2_DIR,PORTB_PIN1_DIR,PORTB_PIN0_DIR)
#define PORTC_DIR          CONC(PORTC_PIN7_DIR,PORTC_PIN6_DIR,PORTC_PIN5_DIR,PORTC_PIN4_DIR,PORTC_PIN3_DIR,PORTC_PIN2_DIR,PORTC_PIN1_DIR,PORTC_PIN0_DIR)
#define PORTD_DIR          CONC(PORTD_PIN7_DIR,PORTD_PIN6_DIR,PORTD_PIN5_DIR,PORTD_PIN4_DIR,PORTD_PIN3_DIR,PORTD_PIN2_DIR,PORTD_PIN1_DIR,PORTD_PIN0_DIR)

#define PORTA_INIT_VALUE   CONC(PORTA_PIN7_INIT,PORTA_PIN6_INIT,PORTA_PIN5_INIT,PORTA_PIN4_INIT,PORTA_PIN3_INIT,PORTA_PIN2_INIT,PORTA_PIN1_INIT,PORTA_PIN0_INIT)
#define PORTB_INIT_VALUE   CONC(PORTB_PIN7_INIT,PORTB_PIN6_INIT,PORTB_PIN5_INIT,PORTB_PIN4_INIT,PORTB_PIN3_INIT,PORTB_PIN2_INIT,PORTB_PIN1_INIT,PORTB_PIN0_INIT)
#define PORTC_INIT_VALUE   CONC(PORTC_PIN7_INIT,PORTC_PIN6_INIT,PORTC_PIN5_INIT,PORTC_PIN4_INIT,PORTC_PIN3_INIT,PORTC_PIN2_INIT,PORTC_PIN1_INIT,PORTC_PIN0_INIT)
#define PORTD_INIT_VALUE   CONC(PORTD_PIN7_INIT,PORTD_PIN6_INIT,PORTD_PIN5_INIT,PORTD_PIN4_INIT,PORTD_PIN3_INIT,PORTD_PIN2_INIT,PORTD_PIN1_INIT,PORTD_PIN0_INIT)






#endif
