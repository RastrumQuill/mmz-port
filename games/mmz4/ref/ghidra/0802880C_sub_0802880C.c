// sub_0802880C at 0x0802880C (thumb)

longlong sub_0802880C(int param_1)

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
      *(ushort *)(param_1 + 0x14e) = (ushort)*(undefined4 *)(iVar2 + 4) | 0x8000;
    }
  }
  else if (bVar1 == 2) {
    sub_0801FE64(*(undefined *)(iVar2 + 4),&DAT_0202ea30);
  }
  return (ulonglong)in_lr << 0x20;
}

