// sub_080B0CEC at 0x080B0CEC (thumb)

undefined4 sub_080B0CEC(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xc2) == -1) {
    sub_080D0894(2,param_1 + 0x54);
    iVar1 = *(int *)(param_1 + 0x2c);
    if ((iVar1 != 0) && (*(byte *)(iVar1 + 0xc) < 2)) {
      *(undefined *)(iVar1 + 0xc2) = 0xff;
      *(undefined4 *)(param_1 + 0x2c) = 0;
    }
  }
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

