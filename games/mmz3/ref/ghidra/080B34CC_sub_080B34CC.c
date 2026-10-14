// sub_080B34CC at 0x080B34CC (thumb)

undefined4 sub_080B34CC(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar1 = *(int *)(param_1 + 0x54);
    iVar3 = -0xf00;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x54);
    iVar3 = 0xf00;
  }
  *(int *)(param_1 + 0x54) = iVar1 + iVar3;
  uVar2 = sub_08009A3C(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  if ((uVar2 & 0xf) == 0) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -0x1200;
    uVar2 = sub_08009A3C(*(undefined4 *)(param_1 + 0x54));
    if ((uVar2 & 0xf) == 0) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 0xc);
      return in_lr;
    }
  }
  uVar2 = DAT_0202f608 * 0x343fd + 0x269ec3;
  DAT_0202f608 = uVar2 & 0x7fffffff;
  *(uint *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + ((uVar2 * 2 >> 0x11 & 4) - 2) * 0x100;
  sub_0801749C(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_08017700(param_1,0x11);
  *(undefined *)(param_1 + 0x12) = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 4);
  sub_080B33E8(param_1);
  return in_lr;
}

