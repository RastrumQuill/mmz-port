// sub_080B73D0 at 0x080B73D0 (thumb)

undefined4 sub_080B73D0(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  sub_08012580();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    sub_080127E4(param_1,0x5602);
  }
  else {
    sub_080127E4(param_1,0x5c0a);
  }
  sub_080128D4(param_1);
  uVar2 = *(undefined4 *)(iVar3 + 0x58);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar3 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = uVar2;
  uVar1 = DAT_0202e188 * 0x343fd + 0x269ec3;
  DAT_0202e188 = uVar1 & 0x7fffffff;
  iVar3 = *(int *)(param_1 + 0x54) + (uVar1 * 2 >> 0x11 & 7) * 0x100 + -0x400;
  *(int *)(param_1 + 0x54) = iVar3;
  *(int *)(param_1 + 0x74) = iVar3;
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_1 + 0x58);
  *(int *)(param_1 + 0x7c) = iVar3;
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_1 + 0x58);
  *(undefined *)(param_1 + 0x12) = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 4);
  sub_080B7398(param_1);
  return in_lr;
}

