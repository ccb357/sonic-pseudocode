void _GetFileInfo(int param_1)

{
  *(undefined4 *)(param_1 + 0x48) = _BufferPosition;
  *(int *)(param_1 + 0x44) = _ReadPos - _ReadSize;
  return;
}