#ifndef __W6100RELFUNCTIONS_H_
#define __W6100RELFUNCTIONS_H_

#include "wizchip_conf.h"


#define mode_dual   "Dual IP mode"
#define mode_v4     "IPv4 mode"
#define mode_v6     "IPv6 mode"

//#define DMA

#if (_WIZCHIP_IO_MODE_==_WIZCHIP_IO_MODE_BUS_INDIR_)
	#ifdef DMA
   	   #define BUS_DMA
	#endif
#elif(_WIZCHIP_IO_MODE_== _WIZCHIP_IO_MODE_SPI_VDM_)||(_WIZCHIP_IO_MODE_== _WIZCHIP_IO_MODE_SPI_FDM_)
	#ifdef DMA
		#define SPI_DMA
	#endif
#endif

uint8_t spiReadByte(void);
void spiWriteByte(uint8_t byte);
#if defined SPI_DMA
uint8_t spiReadBurst(uint8_t* pBuf, uint16_t len);
void spiWriteBurst(uint8_t* pBuf, uint16_t len);
#endif
iodata_t busReadByte(uint32_t addr);
void busWriteByte(uint32_t addr, iodata_t data);
#if defined BUS_DMA
void busReadBurst(uint32_t addr,uint8_t* pBuf, uint32_t len,uint8_t addr_inc);
void busWriteBurst(uint32_t addr, uint8_t* pBuf ,uint32_t len,uint8_t addr_inc);
#endif
void csEnable(void);
void csDisable(void);
void resetAssert(void);
void resetDeassert(void);

void W6100Reset(void);
void W6100Initialze(void);

//todo for test
void register_read(void);
void socket_register_read(uint8_t sn);
uint8_t* get_mode_message(uint8_t ip_mode);
#endif
