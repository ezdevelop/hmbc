//****************************************************************************
//*                                                                          *
//*                   _____   _____   _   _   ___                            *
//*                  |  ___| |  ___| | | | | |   `                           *
//*                  | |_    | |_    | |_| | | [] |                          *
//*                  |  _|   |  _|   |  _  | |  _ <                          *
//*                  | |___  | |___  | | | | | |_| |                         *
//*                  |_____| |_____| |_| |_| |____/                          *
//*                                                                          *
//*                                                                          *
//*  Project:          BIOSControl uPD70Fxxxx                                *
//*  (c) copyright     Harman-Becker Automotive Systems                      *
//****************************************************************************

#ifndef _RAM_H
#define _RAM_H

//*--------------------------------------------------------------------------*
//* Defines for ErrorMsgs                                                    *
//*--------------------------------------------------------------------------*

// Sub Error Numbers (Bit 31-24=Modul, 23-0=Sub-Errornumber)
#define ERROR_MEM_COMMAND  0x00010000U
#define ERROR_MEM_TEST     0x00000200U
#define ERROR_MEM_CRC      0x00000400U
#define ERROR_MEM_COMP     0x00000800U
#define ERROR_DATA_SIZE    0x00001000U


//*--------------------------------------------------------------------------*
//* externe Funktionen                                                       *
//*--------------------------------------------------------------------------*

extern void RAM_RW(void);


#endif // _RAM_H

