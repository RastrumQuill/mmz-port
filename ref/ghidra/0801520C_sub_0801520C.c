// sub_0801520C at 0x0801520C (thumb)

longlong sub_0801520C(int param_1)

{
  byte bVar1;
  int iVar2;
  uint in_lr;
  
  iVar2 = *(int *)(param_1 + 0xc);
  bVar1 = *(byte *)(iVar2 + 1);
  if (bVar1 == 1) {
    *(undefined2 *)(param_1 + 0x14e) = 0;
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      *(ushort *)(param_1 + 0x14e) = *(ushort *)(iVar2 + 4) | 0x8000;
    }
  }
  else if (bVar1 == 2) {
    sub_0801412C(*(undefined *)(iVar2 + 4),&DAT_02022c7c);
  }
  return (ulonglong)in_lr << 0x20;
}

