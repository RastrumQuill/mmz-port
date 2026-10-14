// sub_08029194 at 0x08029194 (thumb)

longlong sub_08029194(int param_1)

{
  byte bVar1;
  int iVar2;
  uint in_lr;
  
  iVar2 = *(int *)(param_1 + 0xc);
  bVar1 = *(byte *)(iVar2 + 1);
  if (bVar1 == 1) {
    DAT_0202e88e = DAT_0202e88e & 0xfffe;
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      DAT_0202e88e = DAT_0202e88e | 1;
    }
  }
  else if (bVar1 == 2) {
    sub_0801E0D0(*(undefined4 *)(iVar2 + 4),DAT_0202e8a0);
  }
  else if (bVar1 == 3) {
    sub_0801E0D0(DAT_0202e89c,*(undefined4 *)(iVar2 + 4));
  }
  return (ulonglong)in_lr << 0x20;
}

