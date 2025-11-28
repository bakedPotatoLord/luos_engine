/******************************************************************************
 * @file luosHAL
 * @brief Luos Hardware Abstration Layer. Describe Low layer fonction
 * @MCU Family XXX
 * @author Luos
 * @version 0.0.0
 ******************************************************************************/
#ifndef _LUOSHAL_H_
#define _LUOSHAL_H_

#include <stdint.h>
#include <stdbool.h>
#include "luos_hal_config.h"

/*******************************************************************************
 * Definitions
 ******************************************************************************/
#define _CRITICAL


void LuosHAL_Init(void);
void LuosHAL_SetIrqState(bool Enable);
uint32_t LuosHAL_GetSystick(void);

// timestamp functions
uint64_t LuosHAL_GetTimestamp(void);
void LuosHAL_StartTimestamp(void);
void LuosHAL_StopTimestamp(void);

#if defined(BOOTLOADER) || defined(BOOTLOADER_UPDATER)
// bootloader functions
void LuosHAL_SetMode(uint8_t mode);
void LuosHAL_Reboot(void);
void LuosHAL_SaveNodeID(uint16_t);
void LuosHAL_JumpToAddress(uint32_t);
uint8_t LuosHAL_GetMode(void);

void LuosHAL_DeInit(void);
void LuosHAL_EraseMemory(uint32_t, uint16_t);
void LuosHAL_ProgramFlash(uint32_t, uint16_t, uint8_t *);
#endif

#endif /* _LUOSHAL_H_ */
