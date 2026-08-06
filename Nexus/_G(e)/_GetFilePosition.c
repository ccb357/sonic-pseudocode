int _GetFilePosition(void)

{
  int iVar1;
  
  if (_UseBinFile == '\x01') {
    iVar1 = ((_ReadPos - _ReadSize) + _BufferPosition) - _VirtualFileOffset;
  }
  else {
    iVar1 = (_ReadPos - _ReadSize) + _BufferPosition;
  }
  return iVar1;
}