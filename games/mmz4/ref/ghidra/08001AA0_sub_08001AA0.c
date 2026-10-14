// sub_08001AA0 at 0x08001AA0 (thumb)

undefined4 sub_08001AA0(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined2 uVar3;
  undefined4 in_lr;
  
  sub_08127690();
  iVar1 = DAT_040000b8;
  if (iVar1 < 0) {
    do {
      uVar2 = DAT_040000b8;
    } while ((uVar2 & 0x80000000) != 0);
  }
  iVar1 = DAT_040000c4;
  if (iVar1 < 0) {
    do {
      uVar2 = DAT_040000c4;
    } while ((uVar2 & 0x80000000) != 0);
  }
  iVar1 = DAT_040000d0;
  if (iVar1 < 0) {
    do {
      uVar2 = DAT_040000d0;
    } while ((uVar2 & 0x80000000) != 0);
  }
  iVar1 = DAT_040000dc;
  if (iVar1 < 0) {
    do {
      uVar2 = DAT_040000dc;
    } while ((uVar2 & 0x80000000) != 0);
  }
  uVar3 = DAT_04000200._0_2_;
  *(undefined2 *)(param_1 + 0x20) = uVar3;
  DAT_04000200._0_2_ = 0x2000;
  return in_lr;
}

