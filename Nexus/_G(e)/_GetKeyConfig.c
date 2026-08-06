int _GetKeyConfig(char param_1)

{
  return (int)*(char *)(&_KeyConfig + param_1);
}