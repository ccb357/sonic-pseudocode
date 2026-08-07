undefined4 _LoadFile(int param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  long lVar3;
  int iVar4;
  
  iVar4 = 0;
  pcVar2 = param_2;
  while( true ) {
    if (*(char *)(param_1 + iVar4) == '\0') break;
    *pcVar2 = *(char *)(param_1 + iVar4);
    iVar4 = iVar4 + 1;
    pcVar2 = pcVar2 + 1;
  }
  param_2[iVar4] = '\0';
  if (_CFileHandle != (FILE *)0x0) {
    _fclose(_CFileHandle);
  }
  if (_UseBinFile == '\0') {
    _CFileHandle = _fopen(param_2,"rb");
    if (_CFileHandle == (FILE *)0x0) {
      return 0;
    }
    _VirtualFileOffset = 0;
    _fseek(_CFileHandle,0,2);
    lVar3 = _ftell(_CFileHandle);
    *(long *)(param_2 + 0x40) = lVar3;
    _FileSize = _ftell(_CFileHandle);
    _fseek(_CFileHandle,0,0);
    _ReadPos = 0;
  }
  else {
    _CFileHandle = _fopen(&_BinFileName,"rb");
    _fseek(_CFileHandle,0,2);
    _FileSize = _ftell(_CFileHandle);
    _BufferPosition = 0;
    _ReadSize = 0;
    _ReadPos = 0;
    cVar1 = _ParseVirtualFileSystem(param_2);
    if (cVar1 == '\0') {
      _fclose(_CFileHandle);
      return 0;
    }
    *(undefined4 *)(param_2 + 0x40) = _VFileSize;
    *(undefined4 *)(param_2 + 0x4c) = _VirtualFileOffset;
  }
  _BufferPosition = 0;
  _ReadSize = 0;
  return 1;
}
