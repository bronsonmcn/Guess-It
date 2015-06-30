/** @file   own_delay.h
    @author Codie Stevens 42414377
	@author Bronson McNaughton 45865615
	@date	 14 October 2014
    @brief  Implementation of a delay 
*/

#ifndef OWN_DELAY_H
#define OWN_DELAY_H


#include <avr/io.h>
#include "system.h"


void own_delay_init();


void own_delay_wait(int TIME);
#endif /* RANDOM_ARROW_H */

