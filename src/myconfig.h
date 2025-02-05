#pragma once


#define CHIRP_TX_SEG_CYCLES (640)    /* Transmit segment - length (cycles) */
#define CHIRP_TX_SEG_PULSE_WIDTH (4) /* width of each cycle pulse */
#define CHIRP_TX_SEG_PHASE (8)       /* tx phase */
#define CHIRP_TX_SEG_INT_EN (0)      /* no interrupt when done */

#define CHIRP_RX_SEG_0_SAMPLES (1)      /* Receive segment 0 - single sample */
#define CHIRP_RX_SEG_0_GAIN_REDUCE (24) /* reduce gain */
#define CHIRP_RX_SEG_0_ATTEN (1)        /* use attenuation */
#define CHIRP_RX_SEG_0_INT_EN (0)       /* no interrupt when done */

/* CHIRP_RX_SEG_1_SAMPLES defined at runtime depending on range */
#define CHIRP_RX_SEG_1_GAIN_REDUCE (0) /* no gain reduction */
#define CHIRP_RX_SEG_1_ATTEN (0)       /* no attenuation */
#define CHIRP_RX_SEG_1_INT_EN (1)      /* generate interrupt when done (if eligible) */


#define SENSOR_SAMPLING_RATE CH_ODR_FREQ_DIV_4

