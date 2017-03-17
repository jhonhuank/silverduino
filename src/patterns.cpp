/*
 * patterns.cpp
 *
 *  Created on: Feb 22, 2017
 *      Author: romkal
 */
#include <Arduino.h>
#include "carriage.h"
#include "patterns.h"

const uint8_t ROMAN_BITMAP[] PROGMEM = {
		   0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x73, 0x00, 0x00, 0x00, 0x00,
		   0x00, 0x00, 0x63, 0x70, 0xd8, 0x39, 0x78, 0xec, 0x00, 0x63, 0xd8, 0x38,
		   0x67, 0xc4, 0x9c, 0x01, 0x73, 0x8c, 0x19, 0x63, 0xc0, 0x8c, 0x01, 0x3f,
		   0x8c, 0x19, 0x63, 0xfc, 0x8c, 0x01, 0x33, 0x8c, 0x19, 0x63, 0xc6, 0x8c,
		   0x01, 0x63, 0xd8, 0x18, 0x63, 0xe6, 0x8c, 0x01, 0xc3, 0x70, 0x18, 0x63,
		   0xdc, 0x8c, 0x01
		};

const uint8_t STRIPE_BITMAP[] PROGMEM = {
		0x02,
		0x01
};

const pattern_t ROMAN_PATTERN PROGMEM {49, 9, ROMAN_BITMAP};
const pattern_t STRIPE_PATTERN PROGMEM {2, 2, STRIPE_BITMAP};

const pattern_t PATTERNS[] PROGMEM = {
	ROMAN_PATTERN,
	STRIPE_PATTERN,
};


