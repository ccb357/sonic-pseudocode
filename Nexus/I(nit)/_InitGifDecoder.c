void _InitGifDecoder(void)

{
  undefined4 *puVar1;
  byte local_d;
  
  _FileRead(&local_d,1);
  _GDecoder = (uint)local_d;
  puVar1 = &_GDecoder;
  DAT_004a19c0 = 0;
  DAT_004a19c4 = 0;
  DAT_004a19c8 = 0;
  DAT_004a19cc = 0;
  DAT_004a1994 = 1 << (local_d & 0x1f);
  DAT_004a1998 = DAT_004a1994 + 1;
  DAT_004a199c = DAT_004a1994 + 2;
  DAT_004a19a0 = _GDecoder + 1;
  DAT_004a19a4 = 1 << ((byte)DAT_004a19a0 & 0x1f);
  DAT_004a19b0 = 0;
  DAT_004a19a8 = 0x1002;
  DAT_004a19b4 = 0;
  DAT_004a19b8 = 0;
  do {
    puVar1[0x84f] = 0x1002;
    puVar1 = puVar1 + 1;
  } while (puVar1 != (undefined4 *)&DAT_004a5990);
  return;
}
