// sub_0804B340 at 0x0804B340 (thumb)

undefined4 sub_0804B340(int param_1)

{
  ushort uVar1;
  int iVar2;
  undefined4 in_lr;
  
  sub_0801CFF0();
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  iVar2 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar2;
  if (0x700 < iVar2) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  uVar1 = sub_08007C7C(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  if ((uVar1 & 0xf) != 0xf) {
    if ((uVar1 & 0x8000) != 0) {
      uVar1 = 0;
    }
    if (uVar1 != 0) goto LAB_0804b398;
  }
  if ((*(uint *)(param_1 + 0x8c) & 0x1004) == 0) {
    return in_lr;
  }
LAB_0804b398:
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 8);
  sub_0804B3C0(param_1);
  return in_lr;
}

