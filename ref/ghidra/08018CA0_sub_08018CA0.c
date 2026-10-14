// sub_08018CA0 at 0x08018CA0 (thumb)

void sub_08018CA0(int param_1)

{
  char cVar1;
  
  if (*(char *)(param_1 + 0x116) == '\0') {
    if (2 < *(ushort *)(param_1 + 0x8c)) {
      return;
    }
    cVar1 = '\x01';
  }
  else {
    if (*(ushort *)(param_1 + 0x8c) < 8) {
      return;
    }
    cVar1 = '\0';
  }
  *(char *)(param_1 + 0x116) = cVar1;
  return;
}

