
#ifndef EEPROM_H_
#define EEPROM_H_

#include "stdMacros.h"

uint8_t EEPROM_read(uint16_t addr);
void EEPROM_write(uint16_t addr,uint8_t data);




#endif /* EEPROM_H_ */