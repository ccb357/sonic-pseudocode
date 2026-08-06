void _GenerateTintTable(int param_1,int param_2,char param_3,char param_4,char param_5,char para m_6)

{
  byte *pbVar1;
  undefined2 *puVar2;
  uint uVar3;
  char *unaff_EBX;
  
  if (param_6 == '\x01') {
    unaff_EBX = &_TintLookupTable2;
  }
  else if (param_6 == '\0') {
    unaff_EBX = &_TintLookupTable1;
  }
  else if (param_6 == '\x02') {
    unaff_EBX = &_TintLookupTable3;
  }
  else if (param_6 == '\x03') {
    unaff_EBX = &_TintLookupTable4;
  }
  if (param_3 == '\x01') {
    pbVar1 = &_TilePalette;
    do {
      uVar3 = ((uint)*pbVar1 * (0xff - param_1) + param_2 * param_1 >> 8 & 0xff) * (int)param_4;
      if (0x7fffffff < uVar3) {
        uVar3 = uVar3 + 0xff;
      }
      *unaff_EBX = (char)(uVar3 >> 8) + param_5;
      unaff_EBX = unaff_EBX + 1;
      pbVar1 = pbVar1 + 4;
    } while (pbVar1 != (byte *)&_TilePalette16);
  }
  else if (param_3 < '\x02') {
    if (param_3 == '\0') {
      pbVar1 = &_TilePalette;
      do {
        uVar3 = ((((uint)*pbVar1 + (uint)pbVar1[1] + (uint)pbVar1[2]) / 3 & 0xff) * (0xff - param_ 1)
                 + param_2 * param_1 >> 8 & 0xff) * (int)param_4;
        if (0x7fffffff < uVar3) {
          uVar3 = uVar3 + 0xff;
        }
        *unaff_EBX = (char)(uVar3 >> 8) + param_5;
        unaff_EBX = unaff_EBX + 1;
        pbVar1 = pbVar1 + 4;
      } while (pbVar1 != (byte *)&_TilePalette16);
    }
  }
  else if (param_3 == '\x02') {
    puVar2 = (undefined2 *)&_TilePalette;
    do {
      uVar3 = ((uint)*(byte *)((int)puVar2 + 1) * (0xff - param_1) + param_2 * param_1 >> 8 & 0xf f)
              * (int)param_4;
      if (0x7fffffff < uVar3) {
        uVar3 = uVar3 + 0xff;
      }
      *unaff_EBX = (char)(uVar3 >> 8) + param_5;
      unaff_EBX = unaff_EBX + 1;
      puVar2 = puVar2 + 2;
    } while (puVar2 != &_TilePalette16);
  }
  else if (param_3 == '\x03') {
    puVar2 = (undefined2 *)&_TilePalette;
    do {
      uVar3 = ((uint)*(byte *)(puVar2 + 1) * (0xff - param_1) + param_2 * param_1 >> 8 & 0xff) *
              (int)param_4;
      if (0x7fffffff < uVar3) {
        uVar3 = uVar3 + 0xff;
      }
      *unaff_EBX = (char)(uVar3 >> 8) + param_5;
      unaff_EBX = unaff_EBX + 1;
      puVar2 = puVar2 + 2;
    } while (puVar2 != &_TilePalette16);
  }
  return;
}
