void _FileRead(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  
  if (_ReadPos <= _FileSize) {
    for (iVar2 = 0; iVar2 < param_2; iVar2 = iVar2 + 1) {
      if (_BufferPosition == _ReadSize) {
        if (_FileSize < _ReadPos + 0x2000) {
          _ReadSize = _FileSize - _ReadPos;
        }
        else {
          _ReadSize = 0x2000;
        }
        _fread(&_FileBuffer,1,_ReadSize,_CFileHandle);
        _ReadPos = _ReadPos + _ReadSize;
        _BufferPosition = 0;
      }
      if (_UseBinFile == '\x01') {
        bVar1 = ~(&_FileBuffer)[_BufferPosition];
      }
      else {
        bVar1 = (&_FileBuffer)[_BufferPosition];
      }
      *(byte *)(param_1 + iVar2) = bVar1;
      _BufferPosition = _BufferPosition + 1;
    }
  }
  return;
}
