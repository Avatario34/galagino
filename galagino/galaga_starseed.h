struct galaga_star { unsigned char x, y; unsigned short col; };
const struct galaga_star galaga_star_set[][63] = {
 {
  { 0x85, 0x06, 0xbf52 },
  { 0x8f, 0x08, 0x1f00 },
  { 0xe5, 0x1b, 0xa0fa },
  { 0x22, 0x1c, 0x1f50 },
  { 0xe5, 0x25, 0xea57 },
  { 0x15, 0x26, 0x5455 },
  { 0x80, 0x2d, 0x5ffd },
  { 0x97, 0x2e, 0xea07 },
  { 0xba, 0x3b, 0xa052 },
  { 0x36, 0x3d, 0xbfa2 },
  { 0x57, 0x44, 0x4055 },
  { 0xcf, 0x44, 0xff57 },
  { 0x61, 0x4e, 0xb4fa },
  { 0x87, 0x64, 0x4aa5 },
  { 0xd6, 0x64, 0xaafa },
  { 0x0b, 0x6c, 0xff07 },
  { 0x06, 0x6d, 0xb402 },
  { 0x18, 0x6e, 0x5fa5 },
  { 0xa9, 0x79, 0x14f8 },
  { 0x8a, 0x7b, 0x0a50 },
  { 0xd6, 0x80, 0xe007 },
  { 0x67, 0x82, 0xffff },
  { 0x39, 0x83, 0x5f05 },
  { 0x72, 0x83, 0xaa02 },
  { 0xec, 0x84, 0xaaa2 },
  { 0x8e, 0x85, 0x0a00 },
  { 0x20, 0x88, 0xb452 },
  { 0x95, 0x8a, 0xe0ff },
  { 0x0e, 0x8d, 0x0000 },
  { 0x06, 0x91, 0xf4a7 },
  { 0x07, 0x94, 0xe057 },
  { 0xae, 0x97, 0x40fd },
  { 0x00, 0x98, 0xf457 },
  { 0x86, 0x9b, 0x0050 },
  { 0x58, 0xa1, 0xbf02 },
  { 0xfe, 0xa1, 0xffa7 },
  { 0xa2, 0xa8, 0xeaff },
  { 0x41, 0xaa, 0x40a5 },
  { 0x3f, 0xac, 0x1fa0 },
  { 0xde, 0xac, 0x00f8 },
  { 0xd4, 0xb9, 0xb4a2 },
  { 0x6d, 0xbb, 0x4afd },
  { 0x62, 0xbd, 0x5f55 },
  { 0xc9, 0xbe, 0x4a05 },
  { 0x6c, 0xc1, 0xa002 },
  { 0x59, 0xc3, 0x1450 },
  { 0x60, 0xcc, 0xe0a7 },
  { 0x91, 0xcc, 0x0aa0 },
  { 0x3f, 0xcf, 0xa0a2 },
  { 0xf7, 0xcf, 0x14a0 },
  { 0x44, 0xd0, 0x1ff8 },
  { 0x34, 0xd2, 0x4005 },
  { 0xd3, 0xd9, 0x1400 },
  { 0x71, 0xdd, 0xbffa },
  { 0x73, 0xe1, 0xf407 },
  { 0xb9, 0xe3, 0xf4ff },
  { 0xa9, 0xe4, 0x0af8 },
  { 0xd3, 0xe7, 0x4a55 },
  { 0x37, 0xed, 0x00a0 },
  { 0xbd, 0xf4, 0xaa52 },
  { 0x0f, 0xf6, 0x5405 },
  { 0x4f, 0xf7, 0x54fd },
  { 0xfb, 0xff, 0x54a5 }
 },
 {
  { 0xfe, 0x04, 0xff57 },
  { 0xc4, 0x06, 0x0a00 },
  { 0x1e, 0x07, 0xf457 },
  { 0x83, 0x0b, 0xeaff },
  { 0x2e, 0x0d, 0xff07 },
  { 0x1f, 0x0e, 0x0000 },
  { 0xd8, 0x0e, 0xf407 },
  { 0x03, 0x0f, 0xaafa },
  { 0x95, 0x11, 0xffff },
  { 0x6a, 0x17, 0xbf52 },
  { 0xcc, 0x17, 0x00a0 },
  { 0x00, 0x18, 0x1fa0 },
  { 0x92, 0x1d, 0xbfa2 },
  { 0xe3, 0x21, 0xa002 },
  { 0x2f, 0x2d, 0xbffa },
  { 0xf0, 0x2f, 0xe007 },
  { 0x9b, 0x3e, 0xa0a2 },
  { 0xa4, 0x4c, 0xa0fa },
  { 0xea, 0x4d, 0x0af8 },
  { 0x84, 0x4e, 0x1450 },
  { 0x33, 0x52, 0xe0ff },
  { 0x70, 0x53, 0xe0a7 },
  { 0x06, 0x59, 0x4005 },
  { 0x81, 0x60, 0x5405 },
  { 0x37, 0x61, 0x5455 },
  { 0x8f, 0x67, 0xf4ff },
  { 0x1b, 0x6a, 0xea57 },
  { 0xbf, 0x7c, 0x0aa0 },
  { 0x51, 0x7f, 0x1f50 },
  { 0x61, 0x86, 0xb452 },
  { 0x6a, 0x8f, 0xe057 },
  { 0x6a, 0x91, 0x4a55 },
  { 0x90, 0x92, 0xa052 },
  { 0x3b, 0x96, 0xb402 },
  { 0x8c, 0x97, 0x40a5 },
  { 0x06, 0x99, 0x00f8 },
  { 0x38, 0x99, 0x5f05 },
  { 0xa8, 0x99, 0x4a05 },
  { 0x76, 0xa6, 0x1400 },
  { 0xad, 0xa6, 0xea07 },
  { 0xec, 0xa6, 0xeaa7 },
  { 0x86, 0xac, 0xaa52 },
  { 0x78, 0xaf, 0xffa7 },
  { 0x7b, 0xb3, 0x4055 },
  { 0x27, 0xb8, 0x5f55 },
  { 0x88, 0xc2, 0x14f8 },
  { 0x44, 0xc3, 0x5fa5 },
  { 0xcf, 0xc5, 0xbf02 },
  { 0x35, 0xc9, 0x1f00 },
  { 0x6e, 0xd1, 0x5ffd },
  { 0xd6, 0xd7, 0xaaa2 },
  { 0x3a, 0xd9, 0x54fd },
  { 0xab, 0xe0, 0x0a50 },
  { 0xe0, 0xe2, 0x4afd },
  { 0x6f, 0xe6, 0x40fd },
  { 0xb8, 0xe8, 0xaa02 },
  { 0xd9, 0xe8, 0x4aa5 },
  { 0xf9, 0xe8, 0x14a0 },
  { 0x04, 0xf1, 0xf4a7 },
  { 0x49, 0xf8, 0xb4a2 },
  { 0x10, 0xf9, 0x0050 },
  { 0x39, 0xfb, 0x1ff8 },
  { 0x28, 0xfc, 0xb4fa }
 },
 {
  { 0xfa, 0x06, 0x4a55 },
  { 0xe4, 0x07, 0xf457 },
  { 0x72, 0x0a, 0x00f8 },
  { 0x84, 0x1b, 0x0000 },
  { 0xba, 0x1d, 0x5455 },
  { 0xe3, 0x22, 0xa002 },
  { 0xd1, 0x26, 0x54a5 },
  { 0x89, 0x32, 0x1f00 },
  { 0x5b, 0x36, 0xb4fa },
  { 0x84, 0x3a, 0xbfa2 },
  { 0x53, 0x3f, 0xe057 },
  { 0x08, 0x40, 0xea57 },
  { 0x55, 0x40, 0x4aa5 },
  { 0xaa, 0x41, 0x1f50 },
  { 0xfb, 0x41, 0x54fd },
  { 0xbc, 0x46, 0xaaa2 },
  { 0x93, 0x52, 0x5f55 },
  { 0xb9, 0x57, 0x0a00 },
  { 0x54, 0x59, 0x5405 },
  { 0xe6, 0x5a, 0x0050 },
  { 0xa7, 0x5d, 0x4afd },
  { 0x2d, 0x5e, 0xbf52 },
  { 0x14, 0x62, 0x1450 },
  { 0x69, 0x6d, 0xeaff },
  { 0xce, 0x6f, 0x40fd },
  { 0xdf, 0x75, 0xf4ff },
  { 0xcb, 0x77, 0x0aa0 },
  { 0x4e, 0x7c, 0x14f8 },
  { 0x4a, 0x84, 0xe0ff },
  { 0x12, 0x86, 0xb452 },
  { 0x68, 0x8c, 0x1fa0 },
  { 0x03, 0x95, 0x1400 },
  { 0x0a, 0x9c, 0xaafa },
  { 0x5b, 0xa3, 0x4005 },
  { 0x5f, 0xa4, 0xffa7 },
  { 0x72, 0xa4, 0xf4a7 },
  { 0xcc, 0xa6, 0xa0a2 },
  { 0x8a, 0xab, 0xe007 },
  { 0xe0, 0xad, 0xb4a2 },
  { 0xf3, 0xaf, 0x40a5 },
  { 0x75, 0xb4, 0x0af8 },
  { 0x68, 0xb7, 0x0a50 },
  { 0x6d, 0xc2, 0xf407 },
  { 0x76, 0xc3, 0xaa02 },
  { 0xcf, 0xc4, 0xeaa7 },
  { 0x04, 0xc5, 0xea07 },
  { 0x13, 0xc6, 0xffff },
  { 0xb9, 0xc7, 0xff07 },
  { 0x05, 0xd7, 0xbf02 },
  { 0x95, 0xd7, 0x5fa5 },
  { 0xfc, 0xd8, 0x00a0 },
  { 0xe7, 0xdc, 0x4055 },
  { 0x1d, 0xe1, 0xa052 },
  { 0x05, 0xe6, 0x1ff8 },
  { 0x1c, 0xe9, 0x5ffd },
  { 0xa2, 0xed, 0xbffa },
  { 0x28, 0xee, 0xa0fa },
  { 0xdd, 0xef, 0x4a05 },
  { 0x6d, 0xf0, 0x5f05 },
  { 0xa1, 0xf2, 0xe0a7 },
  { 0x74, 0xf7, 0xff57 },
  { 0x69, 0xf9, 0x14a0 },
  { 0x3f, 0xff, 0xb402 }
 },
 {
  { 0x71, 0x10, 0xbf02 },
  { 0xaf, 0x11, 0x14f8 },
  { 0xa0, 0x14, 0xb4a2 },
  { 0x02, 0x17, 0x00a0 },
  { 0x4b, 0x19, 0x1f50 },
  { 0x93, 0x1c, 0xe0a7 },
  { 0x1b, 0x1e, 0xb452 },
  { 0x32, 0x20, 0xf4a7 },
  { 0xee, 0x20, 0x5fa5 },
  { 0x79, 0x22, 0xf4ff },
  { 0x6c, 0x23, 0xaafa },
  { 0xbc, 0x25, 0x0a50 },
  { 0x41, 0x29, 0x1f00 },
  { 0x1c, 0x2e, 0x1fa0 },
  { 0xb9, 0x31, 0x0050 },
  { 0x83, 0x32, 0xa052 },
  { 0x95, 0x3a, 0x0aa0 },
  { 0x0d, 0x3f, 0xa0fa },
  { 0x20, 0x41, 0x1ff8 },
  { 0x92, 0x45, 0xf407 },
  { 0xd4, 0x47, 0x4005 },
  { 0xa1, 0x4b, 0xf457 },
  { 0xd2, 0x4b, 0x5ffd },
  { 0xd6, 0x52, 0xb402 },
  { 0x9a, 0x5f, 0xea07 },
  { 0x16, 0x60, 0xff57 },
  { 0x1a, 0x63, 0xeaff },
  { 0xcd, 0x66, 0x5405 },
  { 0xff, 0x67, 0x0a00 },
  { 0x35, 0x69, 0x1400 },
  { 0x8f, 0x6c, 0xa002 },
  { 0xca, 0x6c, 0x54a5 },
  { 0x5a, 0x74, 0x4055 },
  { 0x60, 0x78, 0x5f05 },
  { 0x72, 0x79, 0xeaa7 },
  { 0x37, 0x7f, 0x5455 },
  { 0x12, 0x80, 0xaa02 },
  { 0x29, 0x82, 0x54fd },
  { 0x84, 0x98, 0xbfa2 },
  { 0x32, 0x99, 0xbffa },
  { 0xbb, 0xa0, 0x4a55 },
  { 0x3e, 0xa3, 0xffa7 },
  { 0x4a, 0xa6, 0x4aa5 },
  { 0x29, 0xa7, 0x1450 },
  { 0x9d, 0xb7, 0x14a0 },
  { 0x6c, 0xb9, 0xaa52 },
  { 0x0c, 0xc0, 0x40a5 },
  { 0xc2, 0xc3, 0xe0ff },
  { 0x2f, 0xc9, 0xe057 },
  { 0xd2, 0xce, 0xaaa2 },
  { 0xf3, 0xce, 0x40fd },
  { 0x75, 0xcf, 0xb4fa },
  { 0x1a, 0xd5, 0xbf52 },
  { 0x26, 0xd6, 0x5f55 },
  { 0x80, 0xda, 0xff07 },
  { 0xa9, 0xdd, 0x0000 },
  { 0xbc, 0xeb, 0x00f8 },
  { 0x32, 0xef, 0x4afd },
  { 0x67, 0xf0, 0xffff },
  { 0xef, 0xf1, 0x4a05 },
  { 0xa8, 0xf3, 0xe007 },
  { 0xde, 0xf9, 0xea57 },
  { 0x2c, 0xfa, 0x0af8 }
 }
};