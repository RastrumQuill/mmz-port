// sub_08073EF8 at 0x08073EF8 (thumb)

undefined4 sub_08073EF8(int param_1)

{
  char cVar1;
  byte bVar2;
  undefined4 in_lr;
  
  bVar2 = *(byte *)(param_1 + 0x11) & 1;
  if ((*(byte *)(param_1 + 0x11) & 1) == 0) {
    if (*(char *)(*(int *)(param_1 + 0x28) + 0xbf) == '\0') {
      return in_lr;
    }
    cVar1 = *(char *)(param_1 + 0xd);
  }
  else {
    if (*(char *)(*(int *)(param_1 + 0x28) + 0xbe) == '\0') {
      return in_lr;
    }
    cVar1 = *(char *)(param_1 + 0xd);
    bVar2 = 0;
  }
  *(char *)(param_1 + 0xd) = cVar1 + '\x01';
  *(byte *)(param_1 + 0xe) = bVar2;
  return in_lr;
}

