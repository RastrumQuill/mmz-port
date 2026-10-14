// sub_08028E48 at 0x08028E48 (thumb)

longlong sub_08028E48(int param_1)

{
  byte bVar1;
  int iVar2;
  uint in_lr;
  
  iVar2 = *(int *)(param_1 + 0xc);
  bVar1 = *(byte *)(iVar2 + 1);
  if (bVar1 == 1) {
    sub_08002B5C((int)*(short *)(iVar2 + 4));
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      sub_08002B10(*(undefined2 *)(iVar2 + 4));
    }
  }
  else if (bVar1 == 2) {
    sub_08002B7C((int)*(short *)(iVar2 + 4),*(undefined2 *)(iVar2 + 2));
  }
  return (ulonglong)in_lr << 0x20;
}

