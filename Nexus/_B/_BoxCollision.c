void _BoxCollision(int param_1,int param_2,int param_3,int param_4)
//FINALLY, Not a thunk function!
//oooh juicy collision
{
  char cVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  int *local_84;
  int *local_80;
  int local_7c [3];
  char local_70 [4];
  int local_6c;
  int local_68;
  char local_60;
  int local_5c;
  int local_58;
  char local_50;
  int local_4c [15];
  
  piVar11 = (int *)(PTR__PlayerList_007fe09c + (uint)_PlayerNo * 0x78);
  iVar4 = (uint)*(byte *)(piVar11 + 10) * 0xa54;
  cVar1 = PTR__PlayerCBoxes_007fe0b4
          [(uint)*(byte *)((uint)*(byte *)((int)piVar11 + 0x33) * 0x1c + 0x19 +
                          *(int *)(&DAT_004e57f4 + (uint)*(byte *)(piVar11 + 0xc) * 8 + iVar4)) *
           0x20];
  *(int *)PTR__CollisionLeft_007fe0b8 = (int)cVar1;
  *(int *)PTR__CollisionTop_007fe0ac =
       (int)(char)PTR__PlayerCBoxes_007fe0b4
                  [(uint)*(byte *)((uint)*(byte *)((int)piVar11 + 0x33) * 0x1c + 0x19 +
                                  *(int *)(&DAT_004e57f4 +
                                          (uint)*(byte *)(piVar11 + 0xc) * 8 + iVar4)) * 0x20 + 8] ;
  cVar2 = PTR__PlayerCBoxes_007fe0b4
          [(uint)*(byte *)((uint)*(byte *)((int)piVar11 + 0x33) * 0x1c + 0x19 +
                          *(int *)(&DAT_004e57f4 + (uint)*(byte *)(piVar11 + 0xc) * 8 + iVar4)) *
           0x20 + 0x10];
  *(int *)PTR__CollisionRight_007fe098 = (int)cVar2;
  cVar3 = PTR__PlayerCBoxes_007fe0b4
          [(uint)*(byte *)((uint)*(byte *)((int)piVar11 + 0x33) * 0x1c + 0x19 +
                          *(int *)(&DAT_004e57f4 + (uint)*(byte *)(piVar11 + 0xc) * 8 + iVar4)) *
           0x20 + 0x18];
  *(int *)PTR__CollisionBottom_007fe0c4 = (int)cVar3;
  *(undefined4 *)(PTR__ScriptEng_00021ec8 + 0x54) = 0;
  local_70[0] = '\0';
  local_60 = '\0';
  local_50 = '\0';
  local_6c = *piVar11;
  local_7c[0] = local_6c + cVar1 * 0x10000;
  local_5c = local_6c + cVar2 * 0x10000;
  local_7c[1] = cVar3 * 0x10000 + piVar11[1];
  local_68 = local_7c[1];
  local_58 = local_7c[1];
  piVar10 = local_7c;
  piVar9 = piVar11;
  do {
    if ((((param_1 < *piVar10) && (*piVar10 < param_3)) && (param_2 <= piVar10[1])) &&
       (piVar10[1] - piVar11[3] <= param_2)) {
      *(undefined1 *)(piVar10 + 3) = 1;
      *(undefined1 *)((int)piVar9 + 0x71) = 1;
    }
    piVar10 = piVar10 + 4;
    piVar9 = (int *)((int)piVar9 + 1);
  } while (piVar10 != local_4c);
  if (local_50 == '\x01' || (local_70[0] == '\x01' || local_60 == '\x01')) {
    piVar11[1] = param_2 + *(int *)PTR__CollisionBottom_007fe0c4 * -0x10000;
    *(undefined1 *)((int)piVar11 + 0x6f) = 0;
    piVar11[3] = 0;
    piVar11[7] = 0;
    piVar11[8] = 0;
    *(undefined4 *)(PTR__ScriptEng_00021ec8 + 0x54) = 1;
  }
  local_70[0] = '\0';
  local_60 = '\0';
  iVar4 = *(int *)PTR__CollisionRight_007fe098;
  iVar5 = piVar11[1];
  iVar6 = *(int *)PTR__CollisionTop_007fe0ac;
  iVar7 = *(int *)PTR__CollisionBottom_007fe0c4;
  local_80 = local_7c;
  do {
    if (((param_1 < *local_80) && (*local_80 - piVar11[2] <= param_1)) &&
       ((param_2 < iVar5 + (iVar7 + -2) * 0x10000 && (iVar5 + (iVar6 + 2) * 0x10000 < param_4))))  {
      *(undefined1 *)(local_80 + 3) = 1;
    }
    local_80 = local_80 + 4;
  } while (local_80 != &local_5c);
  if (local_70[0] == '\x01' || local_60 == '\x01') {
    *piVar11 = param_1 + iVar4 * -0x10000;
    piVar11[2] = 0;
    piVar11[4] = 0;
    *(undefined1 *)((int)piVar11 + 0x36) = 2;
    *(undefined4 *)(PTR__ScriptEng_00021ec8 + 0x54) = 2;
  }
  local_70[0] = '\0';
  local_60 = '\0';
  iVar4 = *(int *)PTR__CollisionLeft_007fe0b8;
  iVar5 = piVar11[1];
  iVar6 = *(int *)PTR__CollisionTop_007fe0ac;
  iVar7 = *(int *)PTR__CollisionBottom_007fe0c4;
  iVar8 = piVar11[2];
  local_84 = local_7c;
  do {
    if (((param_3 <= *local_84 - iVar8) && (*local_84 < param_3)) &&
       ((param_2 < iVar5 + (iVar7 + -2) * 0x10000 && (iVar5 + (iVar6 + 2) * 0x10000 < param_4))))  {
      *(undefined1 *)(local_84 + 3) = 1;
    }
    local_84 = local_84 + 4;
  } while (local_84 != local_80);
  if (local_70[0] == '\x01' || local_60 == '\x01') {
    *piVar11 = param_3 + iVar4 * -0x10000;
    piVar11[2] = 0;
    piVar11[4] = 0;
    *(undefined1 *)((int)piVar11 + 0x36) = 2;
    *(undefined4 *)(PTR__ScriptEng_00021ec8 + 0x54) = 3;
  }
  local_70[0] = '\0';
  local_60 = '\0';
  local_7c[0] = *piVar11 + *(int *)PTR__CollisionLeft_007fe0b8 * 0x10000;
  local_6c = *piVar11 + *(int *)PTR__CollisionRight_007fe098 * 0x10000;
  iVar4 = *(int *)PTR__CollisionTop_007fe0ac;
  local_7c[1] = iVar4 * 0x10000 + piVar11[1];
  local_68 = local_7c[1];
  piVar10 = local_7c;
  do {
    if ((((param_1 < *piVar10) && (*piVar10 < param_3)) && (piVar10[1] <= param_4)) &&
       (param_4 <= piVar10[1] - piVar11[3])) {
      *(undefined1 *)(piVar10 + 3) = 1;
    }
    piVar10 = piVar10 + 4;
  } while (piVar10 != local_84);
  if (local_70[0] == '\x01' || local_60 == '\x01') {
    piVar11[1] = param_4 + iVar4 * -0x10000;
    piVar11[3] = 0;
    *(undefined4 *)(PTR__ScriptEng_00021ec8 + 0x54) = 4;
  }
  return;
}
