// sub_080E10D0 at 0x080E10D0 (thumb)

undefined4 sub_080E10D0(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  sub_080DE274();
  iVar1 = sub_080E0E70();
  if (iVar1 == 0) {
    sub_080E0E64(param_1,0x204);
  }
  else {
    sub_0800120C();
    DAT_02000ca2 = DAT_02000ca2 | 1;
    *(undefined *)(param_1 + 0xe) = 0;
    sub_080E0E64(param_1,0x304);
  }
  return in_lr;
}

