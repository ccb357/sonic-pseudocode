undefined4 _CheckOpcodeType(char *param_1)

{
  char cVar1;
  
  do {
    cVar1 = *param_1;
    if (cVar1 == '\0') {
      return 1;
    }
    param_1 = param_1 + 1;
  } while (cVar1 != '(');
  return 0;
}
