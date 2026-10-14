// sub_08023594 at 0x08023594 (thumb)

longlong sub_08023594(int param_1)

{
  byte bVar1;
  int iVar2;
  uint in_lr;
  
  iVar2 = *(int *)(param_1 + 0xc);
  bVar1 = *(byte *)(iVar2 + 1);
  if (bVar1 == 1) {
    DAT_020300de = DAT_020300de & 0xfffe;
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      DAT_020300de = DAT_020300de | 1;
    }
  }
  else if (bVar1 == 2) {
    sub_08018860(*(undefined4 *)(iVar2 + 4),DAT_020300f0);
  }
  else if (bVar1 == 3) {
    sub_08018860(DAT_020300ec,*(undefined4 *)(iVar2 + 4));
  }
  return (ulonglong)in_lr << 0x20;
}

