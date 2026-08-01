void _CheckKeyDown(int param_1,byte param_2)

{
  if ((param_2 & 1) != 0) {
    *(bool *)param_1 = *(char *)(_KeyConfig + _KeyBuffer) == '\x01';
  }
  if ((param_2 & 2) != 0) {
    *(bool *)(param_1 + 1) = *(char *)(DAT_004a1124 + _KeyBuffer) == '\x01';
  }
  if ((param_2 & 4) != 0) {
    *(bool *)(param_1 + 2) = *(char *)(DAT_004a1128 + _KeyBuffer) == '\x01';
  }
  if ((param_2 & 8) != 0) {
    *(bool *)(param_1 + 3) = *(char *)(DAT_004a112c + _KeyBuffer) == '\x01';
  }
  if ((param_2 & 0x10) != 0) {
    *(bool *)(param_1 + 4) = *(char *)(DAT_004a1130 + _KeyBuffer) == '\x01';
  }
  if ((param_2 & 0x20) != 0) {
    *(bool *)(param_1 + 5) = *(char *)(DAT_004a1134 + _KeyBuffer) == '\x01';
  }
  if ((param_2 & 0x40) != 0) {
    *(bool *)(param_1 + 6) = *(char *)(DAT_004a1138 + _KeyBuffer) == '\x01';
  }
  if ((char)param_2 < '\0') {
    *(bool *)(param_1 + 7) = *(char *)(DAT_004a113c + _KeyBuffer) == '\x01';
  }
  return;
}