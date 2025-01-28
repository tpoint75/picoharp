/* 
    PH330Lib programming library for PicoHarp 330
    PicoQuant GmbH 

	Ver. 2.0.0.0  August 2024
*/

#define PH330_ERROR_NONE                                      0 
									
#define PH330_ERROR_DEVICE_OPEN_FAIL                         -1 
#define PH330_ERROR_DEVICE_BUSY                              -2 
#define PH330_ERROR_DEVICE_HEVENT_FAIL                       -3 
#define PH330_ERROR_DEVICE_CALLBSET_FAIL                     -4 
#define PH330_ERROR_DEVICE_BARMAP_FAIL                       -5 
#define PH330_ERROR_DEVICE_CLOSE_FAIL                        -6 
#define PH330_ERROR_DEVICE_RESET_FAIL                        -7 
#define PH330_ERROR_DEVICE_GETVERSION_FAIL                   -8 
#define PH330_ERROR_DEVICE_VERSION_MISMATCH                  -9 
#define PH330_ERROR_DEVICE_NOT_OPEN                         -10
#define PH330_ERROR_DEVICE_LOCKED                           -11
#define PH330_ERROR_DEVICE_DRIVERVER_MISMATCH               -12
									
#define PH330_ERROR_INSTANCE_RUNNING                        -16 
#define PH330_ERROR_INVALID_ARGUMENT                        -17 
#define PH330_ERROR_INVALID_MODE                            -18 
#define PH330_ERROR_INVALID_OPTION                          -19 
#define PH330_ERROR_INVALID_MEMORY                          -20 
#define PH330_ERROR_INVALID_RDATA                           -21 
#define PH330_ERROR_NOT_INITIALIZED                         -22 
#define PH330_ERROR_NOT_CALIBRATED                          -23 
#define PH330_ERROR_DMA_FAIL                                -24 
#define PH330_ERROR_XTDEVICE_FAIL                           -25 
#define PH330_ERROR_FPGACONF_FAIL                           -26 
#define PH330_ERROR_IFCONF_FAIL                             -27 
#define PH330_ERROR_FIFORESET_FAIL                          -28 
#define PH330_ERROR_THREADSTATE_FAIL                        -29 
#define PH330_ERROR_THREADLOCK_FAIL                         -30 
									
#define PH330_ERROR_USB_GETDRIVERVER_FAIL                   -32 
#define PH330_ERROR_USB_DRIVERVER_MISMATCH                  -33 
#define PH330_ERROR_USB_GETIFINFO_FAIL                      -34 
#define PH330_ERROR_USB_HISPEED_FAIL                        -35 
#define PH330_ERROR_USB_VCMD_FAIL                           -36 
#define PH330_ERROR_USB_BULKRD_FAIL                         -37 
#define PH330_ERROR_USB_RESET_FAIL                          -38 

#define PH330_ERROR_LANEUP_TIMEOUT                          -40 
#define PH330_ERROR_DONEALL_TIMEOUT                         -41 
#define PH330_ERROR_MB_ACK_TIMEOUT                          -42 
#define PH330_ERROR_MACTIVE_TIMEOUT                         -43 
#define PH330_ERROR_MEMCLEAR_FAIL                           -44 
#define PH330_ERROR_MEMTEST_FAIL                            -45 
#define PH330_ERROR_CALIB_FAIL                              -46 
#define PH330_ERROR_REFSEL_FAIL                             -47 
#define PH330_ERROR_STATUS_FAIL                             -48 	
#define PH330_ERROR_MODNUM_FAIL                             -49 
#define PH330_ERROR_DIGMUX_FAIL                             -50	
#define PH330_ERROR_MODMUX_FAIL                             -51 
#define PH330_ERROR_MODFWPCB_MISMATCH                       -52 	
#define PH330_ERROR_MODFWVER_MISMATCH                       -53 
#define PH330_ERROR_MODPROPERTY_MISMATCH                    -54 	
#define PH330_ERROR_INVALID_MAGIC                           -55  
#define PH330_ERROR_INVALID_LENGTH                          -56	
#define PH330_ERROR_RATE_FAIL                               -57  	
#define PH330_ERROR_MODFWVER_TOO_LOW                        -58
#define PH330_ERROR_MODFWVER_TOO_HIGH                       -59
#define PH330_ERROR_MB_ACK_FAIL                             -60

#define PH330_ERROR_EEPROM_F01                              -64 
#define PH330_ERROR_EEPROM_F02                              -65 
#define PH330_ERROR_EEPROM_F03                              -66 
#define PH330_ERROR_EEPROM_F04                              -67 
#define PH330_ERROR_EEPROM_F05                              -68 
#define PH330_ERROR_EEPROM_F06                              -69 
#define PH330_ERROR_EEPROM_F07                              -70 
#define PH330_ERROR_EEPROM_F08                              -71 
#define PH330_ERROR_EEPROM_F09                              -72 
#define PH330_ERROR_EEPROM_F10                              -73 
#define PH330_ERROR_EEPROM_F11                              -74 
#define PH330_ERROR_EEPROM_F12                              -75 
#define PH330_ERROR_EEPROM_F13                              -76
#define PH330_ERROR_EEPROM_F14                              -77
#define PH330_ERROR_EEPROM_F15                              -78

#define PH330_ERROR_UNSUPPORTED_FUNCTION                    -80
#define PH330_ERROR_WRONG_TRGMODE                           -81
#define PH330_ERROR_BULKRDINIT_FAIL                         -82
#define PH330_ERROR_CREATETHREAD_FAIL                       -83
#define PH330_ERROR_FILEOPEN_FAIL                           -84
#define PH330_ERROR_FILEWRITE_FAIL                          -85
#define PH330_ERROR_FILEREAD_FAIL                           -86

#define PH330_ERROR_INVALID_ARGUMENT_1                     -201
#define PH330_ERROR_INVALID_ARGUMENT_2                     -202
#define PH330_ERROR_INVALID_ARGUMENT_3                     -203
#define PH330_ERROR_INVALID_ARGUMENT_4                     -204
#define PH330_ERROR_INVALID_ARGUMENT_5                     -205
#define PH330_ERROR_INVALID_ARGUMENT_6                     -206
#define PH330_ERROR_INVALID_ARGUMENT_7                     -207
#define PH330_ERROR_INVALID_ARGUMENT_8                     -208
