// ///////////////////////
// //                   //
// //  File Attributes  //
// //                   //
// ///////////////////////

// Filename: sprite.png
// Pixel Width: 40px
// Pixel Height: 64px

// /////////////////
// //             //
// //  Constants  //
// //             //
// /////////////////

const int sprite_tile_map_size = 0x28;
const int sprite_tile_map_width = 0x05;
const int sprite_tile_map_height = 0x08;

const int sprite_tile_data_size = 0x0280;
const int sprite_tile_count = 0x28;

// ////////////////
// //            //
// //  Map Data  //
// //            //
// ////////////////

const unsigned char sprite_map_data[] ={
  0x00,0x01,0x02,0x03,0x04,0x05,0x06,0x07,0x08,0x09,0x0A,0x0B,0x0C,0x0D,0x0E,0x0F,
  0x10,0x11,0x12,0x13,0x14,0x15,0x16,0x17,0x18,0x19,0x1A,0x1B,0x1C,0x1D,0x1E,0x1F,
  0x20,0x21,0x22,0x23,0x24,0x25,0x26,0x27
};

// /////////////////
// //             //
// //  Tile Data  //
// //             //
// /////////////////

const unsigned char sprite_tile_data[] ={
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x03,0x03,0x1F,0x1F,
  0x00,0x00,0x01,0x01,0x0F,0x0F,0x1F,0x1F,0x7F,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0x3F,0x3F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0x80,0x80,0xE0,0xE0,0xF0,0xF0,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xC0,0xC0,0xE0,0xE0,0xF0,0xF0,0xF0,0xF0,
  0x07,0x07,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0E,0x0F,0x0E,0x0F,0x0F,0x0E,0x02,0x03,
  0xFD,0xFF,0xDE,0xBD,0x75,0x9E,0xFF,0x0E,0xDA,0x27,0xC6,0x39,0xDB,0x74,0xBD,0x5A,
  0xFF,0xFF,0xFF,0xFF,0x7F,0xFF,0xDF,0x3F,0xCF,0x3F,0x1B,0xE7,0xBF,0x5F,0xCF,0x37,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xBD,0xFE,0xDE,0xB9,0xF7,0x9A,
  0xF0,0xF0,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0x78,0xF8,0xF8,0x78,0xF8,0x78,
  0x01,0x00,0x01,0x00,0x01,0x00,0x03,0x02,0x02,0x03,0x03,0x02,0x06,0x07,0x00,0x01,
  0x7B,0x9C,0x3D,0xDE,0xB3,0x4C,0xC8,0x37,0xFB,0x04,0xFA,0x05,0xFF,0x00,0xFF,0x00,
  0xDF,0x27,0xFD,0x03,0xF9,0x06,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0x92,0xFF,0xB2,0x5F,0xDC,0x33,0xDA,0x37,0xCA,0x35,0xFF,0x23,0x9F,0x6F,0xBF,0x5F,
  0xF8,0x78,0xF0,0x70,0x70,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,
  0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0xFF,0x00,0x7A,0x87,0xFF,0x83,0x7C,0x43,0x0F,0x10,0x04,0x07,0x00,0x01,0x00,0x01,
  0xAF,0x50,0x9F,0xE0,0xBF,0xC0,0x7D,0x83,0xF7,0x0F,0x3E,0xFF,0x5C,0xBF,0xC5,0x3B,
  0x5F,0xBF,0xAF,0x7F,0x7B,0xC7,0xAB,0xD7,0xD7,0x6F,0x17,0xFF,0x9F,0x6F,0x0F,0xFF,
  0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xE8,0xE8,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x01,0x02,0x03,0x03,0x0C,0x0F,0x10,0x3E,0x21,0x15,0x2A,0x20,0x5F,0x8A,0xF5,
  0x4D,0xB3,0x69,0xB6,0x39,0xE6,0x09,0xF6,0x53,0xAC,0x19,0xE6,0xBD,0x42,0xFC,0x03,
  0xB7,0x4F,0x7B,0x87,0xFD,0x03,0xFE,0x01,0xFF,0x00,0xFF,0x00,0xFE,0x01,0xFB,0x04,
  0xE8,0xE8,0xE4,0xE4,0xF4,0xF4,0x70,0xF0,0xB0,0x70,0xD8,0x38,0xD8,0x38,0xD8,0x38,
  0x00,0x00,0x01,0x01,0x01,0x02,0x01,0x02,0x05,0x06,0x07,0x04,0x03,0x0C,0x1B,0x14,
  0xB7,0xC8,0x77,0x88,0xFB,0x04,0xFB,0x04,0xFA,0x05,0xFB,0x04,0xF9,0x06,0xFB,0x04,
  0xFA,0x05,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0xF7,0x08,0x6F,0x90,0xAF,0x50,0xBF,0x40,0xBF,0x40,0x3F,0xC0,0xAF,0x50,0x3F,0xC0,
  0xDC,0x3C,0xFC,0x1C,0xFC,0x1C,0xFE,0x1E,0xFE,0x1E,0xFE,0x1E,0xFF,0x1F,0xFF,0x1F,
  0x0F,0x10,0x19,0x26,0x10,0x2F,0x3F,0x40,0x3F,0x40,0xFF,0x80,0x7F,0x80,0x3E,0x41,
  0xFD,0x02,0xFE,0x01,0xFF,0x00,0x4F,0xB0,0xC3,0x7C,0x08,0xF7,0x9F,0xE0,0xBE,0xC1,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFC,0x03,0x33,0xCC,0x4F,0xB0,0xBF,0xC0,
  0xB7,0x48,0xB7,0x48,0xFF,0x00,0x9F,0x78,0x77,0xF8,0x17,0xE8,0x9F,0x60,0x4F,0xB0,
  0xFF,0x1F,0xFF,0x1F,0xFF,0x1F,0xEF,0x1F,0xFF,0x1F,0xEF,0x1F,0xFF,0x1F,0xFF,0x1F,
  0x06,0x19,0x00,0x03,0x01,0x01,0x00,0x01,0x01,0x00,0x01,0x02,0x01,0x02,0x03,0x00,
  0x3C,0xC3,0x3C,0xC3,0xBC,0xC3,0x1E,0xE1,0xA0,0x5F,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0x7F,0x80,0xFF,0x00,0xFE,0x01,0xFF,0x00,0x04,0xFB,0xEF,0x10,0xFF,0x00,0xEF,0x10,
  0xBF,0x40,0x3F,0xC0,0x9F,0x60,0x1F,0xE0,0x4F,0xB0,0x40,0xBF,0x5F,0xAF,0xDF,0x2F,
  0xFF,0x1F,0xFF,0x1F,0xFF,0x1F,0xFF,0x1F,0xFF,0x1F,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF};
