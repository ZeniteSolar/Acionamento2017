/**
 * @file conf.h
 *
 * @defgroup CONF Configurations 
 *
 * @brief General configuration of the system.
 *
 */

#ifndef CONF_H
#define CONF_H

// CONFIGURACOES DE COMPILACAO
//#define DEBUG_ON
//#define VERBOSE_ON


// MODULES ACTIVATION
#define USART_ON
#define CAN_ON
#define ADC_ON
#define MACHINE_ON
#define PWM_ON
#define WATCHDOG_ON
#define SLEEP_ON


// PWM DEFINITIONS
#define INITIAL_D                   0   //!< float value from 0 to 1
#define PWM_D_DELTA                 1   //!< amount to increase
#define PWM_D_MAX_DELTA             2   //!< clock divisor
#define PWM_D_MIN                   0   //!< minimum D
#define PWM_D_MAX                   640 //!< maximum D
#define PWM_D_MIN_THRESHHOLD        6   //!< minimum D threshhold
#define PWM_D_MAX_THRESHHOLD        636 //!< maximum D threshhold
#define PWM_D_LIN_MULT              5   //!< this is A for D = (D*A) >> B
#define PWM_D_LIN_DIV               1   //!< this is B for D = (D*A) >> B

// tempo em que o potenciometro deve ficar zerado para que seja permitido ligar 
#define MIN_ZERO_WIDTH_TIMES        10     
// number of checks before reset the pwm fault counter.
#define CHECKS_BEFORE_RESET_FAULT_COUNTER 100
// maximum of consecutive faults before state an error
#define FAULT_COUNT_LIMIT           50


// INPUT PINS DEFINITIONS
#define     DEAD_MAN_SWITCH         PD4
#define     ON_OFF_SWITCH           PD5
#define     SWITCHES_PORT           PORTD
#define     SWITCHES_PIN            PIND
#define     SWITCHES_DDR            DDRD
#define     FAULT_PORT              PORTD
#define     FAULT_PIN               PIND
#define     FAULT_DDR               DDRD
#define     FAULT                   PD3


// OUTPUT PINS DEFINITIONS
#define     PWM_PORT                PORTB
#define     PWM_PIN                 PINB
#define     PWM_DDR                 DDRB
#define     PWM                     PB1
#define     LED_PORT                PORTC
#define     LED_PIN                 PINC
#define     LED_DDR                 DDRC
#define     LED                     PC5

#define     cpl_led()               cpl_bit(LED_PORT, LED)
#define     set_led()               set_bit(LED_PORT, LED)
#define     clr_led()               clr_bit(LED_PORT, LED)


// CANBUS DEFINITONS
// ----------------------------------------------------------------------------
/* Global settings for building the can-lib and application program.
 *
 * The following two #defines must be set identically for the can-lib and
 * your application program. They control the underlying CAN struct. If the
 * settings disagree, the underlying CAN struct will be broken, with
 * unpredictable results.
 * If can.h detects that any of the #defines is not defined, it will set them
 * to the default values shown here, so it is in your own interest to have a
 * consistent setting. Ommiting the #defines in both can-lib and application
 * program will apply the defaults in a consistent way too.
 *
 * Select if you want to use 29 bit identifiers.
 */
#define	SUPPORT_EXTENDED_CANID	0

/* Select if you want to use timestamps.
 * Timestamps are sourced from a register internal to the AT90CAN.
 * Selecting them on any other controller will have no effect, they will
 * be 0 all the time.
 */
#define	SUPPORT_TIMESTAMPS		0



#endif /* ifndef CONF_H */
