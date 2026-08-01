void _ClearScreen(byte param_1)

{
  _memset(&_FrameBuffer,(uint)param_1,0x12c00);
  return;
}