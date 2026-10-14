// sub_080C7D88 at 0x080C7D88 (thumb)

undefined4 sub_080C7D88(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(uint *)(param_1 + 0x68) = (uint)*(byte *)(param_1 + 0xb5) * 4 + 0x7c;
    *(undefined *)(param_1 + 0xf) = 1;
  }
  sub_0801CFF0(param_1);
  iVar1 = *(int *)(param_1 + 0x68) + -1;
  *(int *)(param_1 + 0x68) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 8);
    sub_080C7EC4(param_1);
  }
  return in_lr;
}

