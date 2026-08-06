void _GenerateBlendTable(int param_1,char param_2,char param_3,char param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  int iVar11;
  undefined1 *local_68;
  undefined1 local_49;
  int local_48;
  int local_44;
  byte local_3f;
  byte local_3e;
  byte local_3d;
  byte *local_24;
  byte *local_20;
  byte *local_1c;
  int local_14;
  
  if (param_2 == '\0') {
    iVar11 = 0xff - param_1;
    local_14 = 0;
    local_1c = &_TilePalette;
    local_68 = &_BlendLookupTable;
    do {
      bVar1 = *local_1c;
      bVar2 = local_1c[1];
      bVar3 = local_1c[2];
      local_48 = 0;
      local_20 = &_TilePalette;
      do {
        local_49 = 0;
        local_44 = 0;
        local_3f = 0xff;
        local_3e = 0xff;
        local_3d = 0xff;
        local_24 = &_TilePalette;
        do {
          iVar8 = (uint)*local_24 - ((uint)*local_20 * param_1 + (uint)bVar1 * iVar11 >> 8 & 0xff );
          if (iVar8 < 0) {
            iVar8 = -iVar8;
          }
          iVar6 = (uint)local_24[1] -
                  ((uint)local_20[1] * param_1 + (uint)bVar2 * iVar11 >> 8 & 0xff);
          if (iVar6 < 0) {
            iVar6 = -iVar6;
          }
          iVar4 = (uint)local_24[2] -
                  ((uint)local_20[2] * param_1 + (uint)bVar3 * iVar11 >> 8 & 0xff);
          if (iVar4 < 0) {
            iVar4 = -iVar4;
          }
          if ((((byte)iVar8 < local_3d) && ((byte)iVar6 < local_3e)) && ((byte)iVar4 < local_3f))  {
            local_49 = (undefined1)local_44;
            local_3f = (byte)iVar4;
            local_3e = (byte)iVar6;
            local_3d = (byte)iVar8;
          }
          local_44 = local_44 + 1;
          local_24 = local_24 + 4;
        } while (local_44 != 0x100);
        local_68[local_48] = local_49;
        local_48 = local_48 + 1;
        local_20 = local_20 + 4;
      } while (local_48 != 0x100);
      local_14 = local_14 + 1;
      local_68 = local_68 + 0x100;
      local_1c = local_1c + 4;
    } while (local_14 != 0x100);
  }
  else if (param_2 == '\x01') {
    iVar11 = 0;
    pbVar10 = &_TilePalette;
    do {
      bVar1 = *pbVar10;
      bVar2 = pbVar10[1];
      bVar3 = pbVar10[2];
      pcVar5 = &_BlendLookupTable + iVar11 * 0x100;
      pbVar9 = &_TilePalette;
      do {
        uVar7 = ((((uint)*pbVar9 + (uint)pbVar9[1] + (uint)pbVar9[2]) / 3 & 0xff) * param_1 +
                 (((uint)bVar1 + (uint)bVar2 + (uint)bVar3) / 3 & 0xff) * (0xff - param_1) >> 8 &
                0xff) * (int)param_3;
        if (0x7fffffff < uVar7) {
          uVar7 = uVar7 + 0xff;
        }
        *pcVar5 = (char)(uVar7 >> 8) + param_4;
        pbVar9 = pbVar9 + 4;
        pcVar5 = pcVar5 + 1;
      } while (pbVar9 != (byte *)&_TilePalette16);
      iVar11 = iVar11 + 1;
      pbVar10 = pbVar10 + 4;
    } while (iVar11 != 0x100);
  }
  return;
}
