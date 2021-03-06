#include "../include/driver_framebuffer.h"
const uint8_t Exo2_Light_8pt7bBitmaps[] = {
  0x00, 0xFA, 0xC0, 0x28, 0xA7, 0xD2, 0xF9, 0x45, 0x00, 0x4E, 0xCC, 0xE5,
  0x5E, 0x40, 0x64, 0x94, 0x98, 0x76, 0x19, 0x29, 0x26, 0xF2, 0x09, 0x1E,
  0x92, 0x4E, 0xC0, 0xC0, 0x6A, 0xAB, 0xC8, 0x92, 0x4E, 0x5F, 0x00, 0x4B,
  0xA0, 0xC0, 0xC0, 0x80, 0x11, 0x22, 0x44, 0x80, 0xE9, 0x99, 0x99, 0xE0,
  0xD5, 0x54, 0xE2, 0x22, 0x48, 0xF0, 0x71, 0x16, 0x11, 0xF0, 0x22, 0x55,
  0x27, 0x88, 0x40, 0xF2, 0x72, 0x78, 0xE8, 0xE9, 0x99, 0xE0, 0xF1, 0x11,
  0x22, 0x20, 0xE9, 0x96, 0x99, 0xE0, 0xF6, 0xDE, 0x78, 0x90, 0x98, 0x2A,
  0x30, 0xF0, 0xF0, 0x88, 0xE0, 0xF1, 0x12, 0x20, 0x20, 0xF4, 0x7F, 0x9F,
  0xC1, 0xE0, 0x21, 0x94, 0x97, 0xC6, 0x20, 0xE9, 0x9E, 0x99, 0xF0, 0xF8,
  0x88, 0x88, 0xF0, 0xF9, 0x99, 0x99, 0xF0, 0xF8, 0x8E, 0x88, 0xF0, 0xF2,
  0x79, 0x20, 0xF8, 0x89, 0x99, 0xF0, 0x99, 0x9F, 0x99, 0x90, 0xFE, 0x55,
  0x5C, 0x9A, 0xAC, 0xAA, 0x90, 0x92, 0x49, 0x38, 0x87, 0x3C, 0xF3, 0xB6,
  0xDA, 0x40, 0x9D, 0xDB, 0xB9, 0x90, 0xF9, 0x99, 0x99, 0xF0, 0xF9, 0x9E,
  0x88, 0x80, 0xF9, 0x99, 0x99, 0xF4, 0x30, 0xF9, 0x9E, 0x99, 0x90, 0xE8,
  0x8E, 0x11, 0xE0, 0xF9, 0x08, 0x42, 0x10, 0x80, 0x99, 0x99, 0x99, 0xF0,
  0x8C, 0x52, 0xA5, 0x18, 0x80, 0x89, 0x99, 0x59, 0x55, 0x56, 0x66, 0x22,
  0x8A, 0x54, 0x45, 0x26, 0x20, 0x8A, 0x94, 0x42, 0x10, 0x80, 0xF8, 0x84,
  0x44, 0x23, 0xE0, 0xEA, 0xAA, 0xB0, 0x84, 0x42, 0x21, 0x10, 0xD5, 0x55,
  0x70, 0x54, 0xF0, 0xC0, 0xE7, 0xDE, 0x88, 0xE9, 0x99, 0xE0, 0xF2, 0x4E,
  0x27, 0xDB, 0x78, 0xF7, 0xCE, 0x6B, 0xA4, 0x90, 0x7C, 0x9C, 0x87, 0x45,
  0xC0, 0x93, 0xDB, 0x68, 0xBE, 0xBF, 0x80, 0x92, 0xE9, 0xA8, 0xAA, 0xAC,
  0xFE, 0x9A, 0x69, 0xA4, 0xF6, 0xDA, 0xE9, 0x99, 0xE0, 0xE9, 0x99, 0xE8,
  0x80, 0xF6, 0xDE, 0x48, 0xEA, 0x80, 0x78, 0x61, 0x70, 0x4B, 0xA4, 0x98,
  0xB6, 0xDE, 0x95, 0x55, 0x20, 0x93, 0x25, 0xAB, 0x62, 0x40, 0x95, 0x25,
  0x90, 0x95, 0x56, 0x22, 0x40, 0xF1, 0x24, 0xF0, 0x55, 0x95, 0x50, 0xFF,
  0xC0, 0x95, 0x55, 0x60, 0xE0 };

const GFXglyph Exo2_Light_8pt7bGlyphs[] = {
  {     0,   1,   1,   2,    0,    0 },   // 0x20 ' '
  {     1,   1,   7,   2,    1,   -6 },   // 0x21 '!'
  {     2,   1,   2,   3,    1,   -6 },   // 0x22 '"'
  {     3,   6,   7,   6,    0,   -6 },   // 0x23 '#'
  {     9,   4,   9,   5,    1,   -7 },   // 0x24 '$'
  {    14,   8,   7,   8,    0,   -6 },   // 0x25 '%'
  {    21,   6,   7,   7,    1,   -6 },   // 0x26 '&'
  {    27,   1,   2,   2,    0,   -6 },   // 0x27 '''
  {    28,   2,   8,   3,    1,   -6 },   // 0x28 '('
  {    30,   3,   8,   3,    0,   -6 },   // 0x29 ')'
  {    33,   3,   3,   4,    1,   -6 },   // 0x2A '*'
  {    35,   3,   4,   5,    1,   -4 },   // 0x2B '+'
  {    37,   1,   2,   2,    0,    0 },   // 0x2C ','
  {    38,   2,   1,   4,    1,   -2 },   // 0x2D '-'
  {    39,   1,   1,   2,    0,    0 },   // 0x2E '.'
  {    40,   4,   7,   5,    0,   -6 },   // 0x2F '/'
  {    44,   4,   7,   5,    1,   -6 },   // 0x30 '0'
  {    48,   2,   7,   4,    0,   -6 },   // 0x31 '1'
  {    50,   4,   7,   5,    1,   -6 },   // 0x32 '2'
  {    54,   4,   7,   5,    0,   -6 },   // 0x33 '3'
  {    58,   5,   7,   5,    0,   -6 },   // 0x34 '4'
  {    63,   3,   7,   5,    1,   -6 },   // 0x35 '5'
  {    66,   4,   7,   5,    1,   -6 },   // 0x36 '6'
  {    70,   4,   7,   5,    0,   -6 },   // 0x37 '7'
  {    74,   4,   7,   5,    1,   -6 },   // 0x38 '8'
  {    78,   3,   7,   5,    1,   -6 },   // 0x39 '9'
  {    81,   1,   4,   2,    0,   -3 },   // 0x3A ':'
  {    82,   1,   5,   2,    1,   -3 },   // 0x3B ';'
  {    83,   3,   4,   5,    1,   -4 },   // 0x3C '<'
  {    85,   4,   3,   5,    1,   -3 },   // 0x3D '='
  {    87,   3,   4,   5,    1,   -4 },   // 0x3E '>'
  {    89,   4,   7,   5,    0,   -6 },   // 0x3F '?'
  {    93,   5,   7,   6,    1,   -5 },   // 0x40 '@'
  {    98,   5,   7,   6,    0,   -6 },   // 0x41 'A'
  {   103,   4,   7,   6,    1,   -6 },   // 0x42 'B'
  {   107,   4,   7,   5,    1,   -6 },   // 0x43 'C'
  {   111,   4,   7,   6,    1,   -6 },   // 0x44 'D'
  {   115,   4,   7,   5,    1,   -6 },   // 0x45 'E'
  {   119,   3,   7,   5,    1,   -6 },   // 0x46 'F'
  {   122,   4,   7,   6,    1,   -6 },   // 0x47 'G'
  {   126,   4,   7,   6,    1,   -6 },   // 0x48 'H'
  {   130,   1,   7,   2,    1,   -6 },   // 0x49 'I'
  {   131,   2,   7,   3,    0,   -6 },   // 0x4A 'J'
  {   133,   4,   7,   5,    1,   -6 },   // 0x4B 'K'
  {   137,   3,   7,   5,    1,   -6 },   // 0x4C 'L'
  {   140,   6,   7,   8,    1,   -6 },   // 0x4D 'M'
  {   146,   4,   7,   6,    1,   -6 },   // 0x4E 'N'
  {   150,   4,   7,   6,    1,   -6 },   // 0x4F 'O'
  {   154,   4,   7,   5,    1,   -6 },   // 0x50 'P'
  {   158,   4,   9,   6,    1,   -6 },   // 0x51 'Q'
  {   163,   4,   7,   6,    1,   -6 },   // 0x52 'R'
  {   167,   4,   7,   5,    1,   -6 },   // 0x53 'S'
  {   171,   5,   7,   5,    0,   -6 },   // 0x54 'T'
  {   176,   4,   7,   6,    1,   -6 },   // 0x55 'U'
  {   180,   5,   7,   5,    0,   -6 },   // 0x56 'V'
  {   185,   8,   7,   8,    0,   -6 },   // 0x57 'W'
  {   192,   5,   7,   5,    0,   -6 },   // 0x58 'X'
  {   197,   5,   7,   5,    0,   -6 },   // 0x59 'Y'
  {   202,   5,   7,   5,    0,   -6 },   // 0x5A 'Z'
  {   207,   2,  10,   3,    1,   -7 },   // 0x5B '['
  {   210,   4,   7,   5,    0,   -6 },   // 0x5C '\'
  {   214,   2,  10,   3,    0,   -7 },   // 0x5D ']'
  {   217,   3,   2,   4,    0,   -5 },   // 0x5E '^'
  {   218,   4,   1,   4,    0,    1 },   // 0x5F '_'
  {   219,   2,   1,   3,    0,   -5 },   // 0x60 '`'
  {   220,   3,   5,   5,    1,   -4 },   // 0x61 'a'
  {   222,   4,   7,   5,    1,   -6 },   // 0x62 'b'
  {   226,   3,   5,   4,    1,   -4 },   // 0x63 'c'
  {   228,   3,   7,   5,    1,   -6 },   // 0x64 'd'
  {   231,   3,   5,   5,    1,   -4 },   // 0x65 'e'
  {   233,   3,   7,   3,    0,   -6 },   // 0x66 'f'
  {   236,   5,   7,   5,    0,   -4 },   // 0x67 'g'
  {   241,   3,   7,   5,    1,   -6 },   // 0x68 'h'
  {   244,   1,   7,   2,    1,   -6 },   // 0x69 'i'
  {   245,   1,   9,   2,    0,   -6 },   // 0x6A 'j'
  {   247,   3,   7,   4,    1,   -6 },   // 0x6B 'k'
  {   250,   2,   7,   3,    1,   -6 },   // 0x6C 'l'
  {   252,   6,   5,   8,    1,   -4 },   // 0x6D 'm'
  {   256,   3,   5,   5,    1,   -4 },   // 0x6E 'n'
  {   258,   4,   5,   5,    1,   -4 },   // 0x6F 'o'
  {   261,   4,   7,   5,    1,   -4 },   // 0x70 'p'
  {   265,   3,   7,   5,    1,   -4 },   // 0x71 'q'
  {   268,   2,   5,   4,    1,   -4 },   // 0x72 'r'
  {   270,   4,   5,   5,    0,   -4 },   // 0x73 's'
  {   273,   3,   7,   3,    0,   -6 },   // 0x74 't'
  {   276,   3,   5,   5,    1,   -4 },   // 0x75 'u'
  {   278,   4,   5,   5,    0,   -4 },   // 0x76 'v'
  {   281,   7,   5,   7,    0,   -4 },   // 0x77 'w'
  {   286,   4,   5,   5,    0,   -4 },   // 0x78 'x'
  {   289,   4,   7,   5,    0,   -4 },   // 0x79 'y'
  {   293,   4,   5,   5,    0,   -4 },   // 0x7A 'z'
  {   296,   2,  10,   3,    0,   -7 },   // 0x7B '{'
  {   299,   1,  10,   2,    1,   -7 },   // 0x7C '|'
  {   301,   2,  10,   3,    0,   -7 },   // 0x7D '}'
  {   304,   3,   1,   5,    1,   -3 } }; // 0x7E '~'

const GFXfont Exo2_Light_8pt7b = {
  (uint8_t  *)Exo2_Light_8pt7bBitmaps,
  (GFXglyph *)Exo2_Light_8pt7bGlyphs,
  0x20, 0x7E, 8 };//B

// Approx. 977 bytes
