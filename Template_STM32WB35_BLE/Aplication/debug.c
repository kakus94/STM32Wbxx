/*
 * app_debug.c
 *
 *  Created on: Jan 29, 2021
 *      Author: Kamil
 */
#include "debug.h"
#include "main.h"

#ifdef BLUETOOTH
void printVersionStack_FUS_WIFI()
{
	WirelessFwInfo_t ptr;
	HAL_Delay(2000);
	SHCI_GetWirelessFwInfo(&ptr);
	printf("WIFI:\n"\
			" version:\t%d.%d.%d\n"\
			" MemSizeSram2B:\t%dK\n"\
			" MemSizeSram2A:\t%dK\n"\
			" MemSizeSram1:\t%dK\n"\
			" MemSizeFlash:\t%dK\n"\
			" StackType:\t%d\n"\
			"FUS:\n"\
			" FUSversion:\t\t%d.%d.%d\n"
			" FUSMemSizeSram2B:\t%dK\n"\
			" FUSMemSizeSram2A:\t%dK\n"\
			" FUSMemSizeFlash:\t%dK\n",
			ptr.VersionMajor,ptr.VersionMinor,ptr.VersionSub,
			ptr.MemorySizeSram2B ,
			ptr.MemorySizeSram2A ,
			ptr.MemorySizeSram1  ,
			ptr.MemorySizeFlash  *4,
			ptr.StackType,
			ptr.FusVersionMajor,ptr.FusVersionMinor,ptr.FusVersionSub,
			ptr.FusMemorySizeSram2B *1,
			ptr.FusMemorySizeSram2A *1,
			ptr.FusMemorySizeFlash  *4);
}


#endif
