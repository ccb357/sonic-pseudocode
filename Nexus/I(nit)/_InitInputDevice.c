undefined4 _InitInputDevice(void)

{
  _KeyConfig = 0x111;
  DAT_004a1124 = 0x112;
  DAT_004a1128 = 0x114;
  DAT_004a112c = 0x113;
  DAT_004a1130 = 0x61;
  DAT_004a1134 = 0x73;
  DAT_004a1138 = 100;
  DAT_004a113c = 0xd;
  return 1;
}