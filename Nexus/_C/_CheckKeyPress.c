void _CheckKeyPress(undefined1 *param_1,byte param_2)

{
  if ((param_2 & 1) != 0) {
    if (*(char *)(_KeyConfig + _KeyBuffer) == '\x01') {
      if (_InputPress == '\0') {
        _InputPress = '\x01';
        *param_1 = 1;
      }
      else {
        *param_1 = 0;
      }
    }
    else {
      *param_1 = 0;
      _InputPress = '\0';
    }
  }
  if ((param_2 & 2) != 0) {
    if (*(char *)(DAT_004a1124 + _KeyBuffer) == '\x01') {
      if (DAT_004a1101 == '\0') {
        DAT_004a1101 = '\x01';
        param_1[1] = 1;
      }
      else {
        param_1[1] = 0;
      }
    }
    else {
      param_1[1] = 0;
      DAT_004a1101 = '\0';
    }
  }
  if ((param_2 & 4) != 0) {
    if (*(char *)(DAT_004a1128 + _KeyBuffer) == '\x01') {
      if (DAT_004a1102 == '\0') {
        DAT_004a1102 = '\x01';
        param_1[2] = 1;
      }
      else {
        param_1[2] = 0;
      }
    }
    else {
      param_1[2] = 0;
      DAT_004a1102 = '\0';
    }
  }
  if ((param_2 & 8) != 0) {
    if (*(char *)(DAT_004a112c + _KeyBuffer) == '\x01') {
      if (DAT_004a1103 == '\0') {
        DAT_004a1103 = '\x01';
        param_1[3] = 1;
      }
      else {
        param_1[3] = 0;
      }
    }
    else {
      param_1[3] = 0;
      DAT_004a1103 = '\0';
    }
  }
  if ((param_2 & 0x10) != 0) {
    if (*(char *)(DAT_004a1130 + _KeyBuffer) == '\x01') {
      if (DAT_004a1104 == '\0') {
        DAT_004a1104 = '\x01';
        param_1[4] = 1;
      }
      else {
        param_1[4] = 0;
      }
    }
    else {
      param_1[4] = 0;
      DAT_004a1104 = '\0';
    }
  }
  if ((param_2 & 0x20) != 0) {
    if (*(char *)(DAT_004a1134 + _KeyBuffer) == '\x01') {
      if (DAT_004a1105 == '\0') {
        DAT_004a1105 = '\x01';
        param_1[5] = 1;
      }
      else {
        param_1[5] = 0;
      }
    }
    else {
      param_1[5] = 0;
      DAT_004a1105 = '\0';
    }
  }
  if ((param_2 & 0x40) != 0) {
    if (*(char *)(DAT_004a1138 + _KeyBuffer) == '\x01') {
      if (DAT_004a1106 == '\0') {
        DAT_004a1106 = '\x01';
        param_1[6] = 1;
      }
      else {
        param_1[6] = 0;
      }
    }
    else {
      param_1[6] = 0;
      DAT_004a1106 = '\0';
    }
  }
  if ((char)param_2 < '\0') {
    if (*(char *)(DAT_004a113c + _KeyBuffer) == '\x01') {
      if (DAT_004a1107 == '\0') {
        DAT_004a1107 = '\x01';
        param_1[7] = 1;
      }
      else {
        param_1[7] = 0;
      }
    }
    else {
      param_1[7] = 0;
      DAT_004a1107 = '\0';
    }
  }
  return;
}
