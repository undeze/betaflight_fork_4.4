/* @file max7456_symbols.h
 * @brief max7456 symbols for the mwosd font set
 *
 * @author Nathan Tsoi nathan@vertile.com
 *
 * Copyright (C) 2016 Nathan Tsoi
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>
 */

#pragma once

//Misc
#define SYM_NONE                    0x00
#define SYM_END_OF_FONT             0xFF
#define SYM_BLANK                   0x20
#define SYM_HYPHEN                  0x2D
#define SYM_BBLOG                   0x10
#define SYM_HOMEFLAG                0x11
//#define SYM_RPM                     0x12
#define SYM_ROLL                    0x14
#define SYM_PITCH                   0x15
#define SYM_TEMPERATURE             0x7A

// GPS and navigation
#define SYM_LAT                     0x89
#define SYM_LON                     0x98
#define SYM_ALTITUDE                0x7F
#define SYM_TOTAL_DISTANCE          0x71
#define SYM_OVER_HOME               0x05

// RSSI
#define SYM_RSSI                    0x01
#define SYM_LINK_QUALITY            0x7B

// Throttle Position (%)
#define SYM_THR                     0x04

// Unit Icons (Metric)
#define SYM_M                       0x0C
#define SYM_KM                      0x7D
#define SYM_C                       0x0E

// Unit Icons (Imperial)
#define SYM_FT                      0x0F
#define SYM_MILES                   0x7E
#define SYM_F                       0x0D

// Heading Graphics
#define SYM_HEADING_N               0x18
#define SYM_HEADING_S               0x19
#define SYM_HEADING_E               0x1A
#define SYM_HEADING_W               0x1B
#define SYM_HEADING_DIVIDED_LINE    0x1C
#define SYM_HEADING_LINE            0x1D

// AH Center screen Graphics
#define SYM_AH_CENTER_LINE          0x72
#define SYM_AH_CENTER               0x73
#define SYM_AH_CENTER_LINE_RIGHT    0x74
#define SYM_AH_RIGHT                0x02
#define SYM_AH_LEFT                 0x03
#define SYM_AH_DECORATION           0x13

// Satellite Graphics
#define SYM_SAT_L                   0x1E
#define SYM_SAT_R                   0x1F

// Direction arrows
#define SYM_ARROW_SOUTH             0x60
#define SYM_ARROW_2                 0x61
#define SYM_ARROW_3                 0x62
#define SYM_ARROW_4                 0x63
#define SYM_ARROW_EAST              0x64
#define SYM_ARROW_6                 0x65
#define SYM_ARROW_7                 0x66
#define SYM_ARROW_8                 0x67
#define SYM_ARROW_NORTH             0x68
#define SYM_ARROW_10                0x69
#define SYM_ARROW_11                0x6A
#define SYM_ARROW_12                0x6B
#define SYM_ARROW_WEST              0x6C
#define SYM_ARROW_14                0x6D
#define SYM_ARROW_15                0x6E
#define SYM_ARROW_16                0x6F

#define SYM_ARROW_SMALL_UP          0x75
#define SYM_ARROW_SMALL_DOWN        0x76

// AH Bars
#define SYM_AH_BAR9_0               0x80
#define SYM_AH_BAR9_1               0x81
#define SYM_AH_BAR9_2               0x82
#define SYM_AH_BAR9_3               0x83
#define SYM_AH_BAR9_4               0x84
#define SYM_AH_BAR9_5               0x85
#define SYM_AH_BAR9_6               0x86
#define SYM_AH_BAR9_7               0x87
#define SYM_AH_BAR9_8               0x88

// Progress bar
#define SYM_PB_START                0x8A
#define SYM_PB_FULL                 0x8B
#define SYM_PB_HALF                 0x8C
#define SYM_PB_EMPTY                0x8D
#define SYM_PB_END                  0x8E
#define SYM_PB_CLOSE                0x8F

// Batt evolution
#define SYM_BATT_FULL               0x90
#define SYM_BATT_5                  0x91
#define SYM_BATT_4                  0x92
#define SYM_BATT_3                  0x93
#define SYM_BATT_2                  0x94
#define SYM_BATT_1                  0x95
#define SYM_BATT_EMPTY              0x96

// Batt Icons
#define SYM_MAIN_BATT               0x97

// Voltage and amperage
#define SYM_VOLT                    0x06
#define SYM_AMP                     0x9A
#define SYM_MAH                     0x07
#define SYM_WATT                    0x57  // 0x57 is 'W'

// Time
#define SYM_ON_M                    0x9B
#define SYM_FLY_M                   0x9C

// Speed
#define SYM_SPEED                   0x70
#define SYM_KPH                     0x9E
#define SYM_MPH                     0x9D
#define SYM_MPS                     0x9F
#define SYM_FTPS                    0x99

// Menu cursor
#define SYM_CURSOR                  SYM_AH_LEFT

// Stick overlays
#define SYM_STICK_OVERLAY_SPRITE_HIGH 0x08
#define SYM_STICK_OVERLAY_SPRITE_MID  0x09
#define SYM_STICK_OVERLAY_SPRITE_LOW  0x0A
#define SYM_STICK_OVERLAY_CENTER      0x0B
#define SYM_STICK_OVERLAY_VERTICAL    0x16
#define SYM_STICK_OVERLAY_HORIZONTAL  0x17

// GPS degree/minute/second symbols
#define SYM_GPS_DEGREE              SYM_STICK_OVERLAY_SPRITE_HIGH  // kind of looks like the degree symbol
#define SYM_GPS_MINUTE              0x27 // '
#define SYM_GPS_SECOND              0x22 // "

// Christo osd_symbols.h line 165 Throttle strip symbols
// https://bflogo.ekezet.com/
#define SYM_THR_01                  0xA0
#define SYM_THR_02                  0xA1
#define SYM_THR_03                  0xA2
#define SYM_THR_04                  0xA3
#define SYM_THR_05                  0xA4
#define SYM_THR_06                  0xA5
#define SYM_THR_07                  0xA6
#define SYM_THR_08                  0xA7
#define SYM_THR_09                  0xA8
#define SYM_THR_10                  0xA9
#define SYM_THR_11                  0xAA
#define SYM_THR_12                  0xAB
#define SYM_THR_13                  0xAC
#define SYM_THR_14                  0xAD
#define SYM_THR_15                  0xAE
#define SYM_THR_16                  0xAF
#define SYM_THR_17                  0xB0
#define SYM_THR_18                  0xB1

#define SYM_SCALE_01                0xB8
#define SYM_SCALE_02                0xB9
#define SYM_SCALE_03                0xBA
#define SYM_SCALE_04                0xBB
#define SYM_SCALE_05                0xBC    
#define SYM_SCALE_06                0xBD
#define SYM_SCALE_07                0xBE
#define SYM_SCALE_08                0xBF    
#define SYM_SCALE_09                0xC0
#define SYM_SCALE_10                0xC1
#define SYM_SCALE_11                0xC2
#define SYM_SCALE_12                0xC3
#define SYM_SCALE_13                0xC4

// Christo osd_symbols.h line 200 Contiguous to SYM_LIPO_20 
#define SYM_LIPO_01                 0xF3

// Christo osd_symbols.h line 203 Contiguous 
#define SYM_LIION_01                0xD0

// Christo osd_symbols.h line 206 Contiguous
#define SYM_BATT_00                 0xE2

// Christo osd_symbols.h line 209
#define SYM_BATT_12                 0xEE
#define SYM_BATT_FULL_01            0xEF