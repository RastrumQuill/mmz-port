// sub_0804BF94 at 0x0804BF94 (thumb)

undefined4 sub_0804BF94(int param_1)

{
  bool bVar1;
  uint uVar2;
  undefined4 in_lr;
  
  if (*(byte *)(param_1 + 0x12) < 0x10) {
    return in_lr;
  }
  *(undefined4 *)(param_1 + 0xb8) = 0;
  uVar2 = DAT_02022890 * 0x343fd + 0x269ec3;
  DAT_02022890 = uVar2 & 0x7fffffff;
  if (((uVar2 * 2 >> 0x11 & 1) != 0) &&
     (*(int *)(param_1 + 0x50) < *(int *)(DAT_0202286c + 0x50) + -0x2000)) {
    bVar1 = *(int *)(param_1 + 0x4c) <= *(int *)(DAT_0202286c + 0x4c);
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      if (!bVar1) goto LAB_0804c008;
    }
    else if (bVar1) {
LAB_0804c008:
      *(undefined *)(param_1 + 0x12) = 0;
      *(undefined *)(param_1 + 0xd) = 5;
      sub_080033F0(param_1 + 0x6c,6);
      return in_lr;
    }
  }
  *(undefined *)(param_1 + 0x13) = 0;
  *(undefined *)(param_1 + 0xd) = 3;
  sub_080033F0(param_1 + 0x6c,4);
  return in_lr;
}

