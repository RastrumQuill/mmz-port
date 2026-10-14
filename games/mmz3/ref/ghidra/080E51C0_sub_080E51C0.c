// sub_080E51C0 at 0x080E51C0 (thumb)

undefined4 sub_080E51C0(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  cVar1 = sub_080E538C(param_1);
  if ((cVar1 == '\0') && ((*(uint *)(param_1 + 0x8c) & 4) == 0)) {
    if ((*(uint *)(param_1 + 0x8c) & 0x1000) != 0) {
      sub_0800471C(0x2b);
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836e24c)[*(byte *)(param_1 + 9)] + 8)
      ;
      sub_080E4C9C(param_1);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836e24c)[*(byte *)(param_1 + 9)] + 8);
    sub_080E4C9C(param_1);
  }
  return in_lr;
}

