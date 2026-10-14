// sub_080CD818 at 0x080CD818 (thumb)

undefined4 sub_080CD818(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  if (((*(uint *)(param_1 + 0x8c) & 0x24) != 0) || ((*(uint *)(iVar1 + 0x8c) & 0x24) != 0)) {
    *(undefined *)(param_1 + 0xbc) = 1;
  }
  if (*(char *)(param_1 + 0xbc) == '\0') {
    if ((*(int *)(param_1 + 0x54) - *(int *)(iVar1 + 0x54)) + -0x1800 < 0x1e00) {
      if (((*(int *)(iVar1 + 0x54) + 0xc00 <= *(int *)(DAT_0202f5c0 + 0x54)) &&
          (*(int *)(DAT_0202f5c0 + 0x54) <= *(int *)(param_1 + 0x54) + -0xc00)) &&
         (*(int *)(param_1 + 0x58) + -0x1e00 < *(int *)(DAT_0202f5c0 + 0x58))) goto LAB_080cd88a;
    }
    sub_08007390(param_1 + 0x74,&DAT_0836c9d0);
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
    *(undefined **)(param_1 + 0x30) = &DAT_0836ca00;
    *(undefined2 *)(param_1 + 0x26) = 1;
    sub_08007390(iVar1 + 0x74,&DAT_0836c9d0);
    *(byte *)(iVar1 + 0xb) = *(byte *)(iVar1 + 0xb) | 8;
    *(undefined **)(iVar1 + 0x30) = &DAT_0836ca00;
    *(undefined2 *)(iVar1 + 0x26) = 1;
  }
  else {
LAB_080cd88a:
    *(undefined4 *)(DAT_0202f5c0 + 0x54) = *(undefined4 *)(param_1 + 0xb8);
    sub_08007390(param_1 + 0x74,&DAT_0836c9e8);
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xf7;
    sub_08007390(iVar1 + 0x74,&DAT_0836c9e8);
    *(byte *)(iVar1 + 0xb) = *(byte *)(iVar1 + 0xb) & 0xf7;
  }
  return in_lr;
}

