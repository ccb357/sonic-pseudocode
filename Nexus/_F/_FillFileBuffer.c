void _FillFileBuffer(void)

{
  if (_FileSize < _ReadPos + 0x2000U) {
    _ReadSize = _FileSize - _ReadPos;
  }
  else {
    _ReadSize = 0x2000;
  }
  _fread(&_FileBuffer,1,_ReadSize,_CFileHandle);
  _ReadPos = _ReadPos + _ReadSize;
  _BufferPosition = 0;
  return;
}