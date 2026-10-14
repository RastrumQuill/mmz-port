// sub_0808A7E4 at 0x0808A7E4 (thumb)

undefined4 sub_0808A7E4(int param_1)

{
  bool bVar1;
  uint uVar2;
  undefined4 in_lr;
  
  if (*(byte *)(param_1 + 0x12) < 0x10) {
    return in_lr;
  }
  *(undefined4 *)(param_1 + 0xb4) = 0;
  uVar2 = DAT_0202e188 * 0x343fd + 0x269ec3;
  DAT_0202e188 = uVar2 & 0x7fffffff;
  if (((uVar2 * 2 >> 0x11 & 1) != 0) &&
     (*(int *)(param_1 + 0x58) < *(int *)(DAT_0202e130 + 0x58) + -0x2000)) {
    bVar1 = *(int *)(param_1 + 0x54) <= *(int *)(DAT_0202e130 + 0x54);
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      if (!bVar1) goto LAB_0808a858;
    }
    else if (bVar1) {
LAB_0808a858:
      *(undefined *)(param_1 + 0x12) = 0;
      *(undefined *)(param_1 + 0xd) = 5;
      sub_080127E4(param_1,0x7406);
      return in_lr;
    }
  }
  *(undefined *)(param_1 + 0x13) = 0;
  *(undefined *)(param_1 + 0xd) = 3;
  sub_080127E4(param_1,0x7404);
  return in_lr;
}

