void _CloseFile(void)

{
  if (_CFileHandle != (FILE *)0x0) {
    _fclose(_CFileHandle);
  }
  return;
}