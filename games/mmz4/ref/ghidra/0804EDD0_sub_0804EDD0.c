// sub_0804EDD0 at 0x0804EDD0 (thumb)

undefined4 sub_0804EDD0(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 4);
  sub_0801CC9C(param_1);
  sub_0801CEEC(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe | 2;
  sub_0801CF00(param_1,0x8255);
  *(undefined *)(param_1 + 0x12) = 8;
  *(undefined *)(param_1 + 0x13) = 0;
  *(undefined *)(param_1 + 0xbd) = 0;
  iVar1 = sub_0800864C(*(undefined4 *)(iVar1 + 0x54),*(undefined4 *)(iVar1 + 0x58));
  *(int *)(param_1 + 0xb8) = iVar1 + -0x800;
  sub_0804EE40(param_1);
  return in_lr;
}

