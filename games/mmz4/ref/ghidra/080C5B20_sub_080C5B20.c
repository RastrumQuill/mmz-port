// sub_080C5B20 at 0x080C5B20 (thumb)

undefined4 sub_080C5B20(int param_1)

{
  int iVar1;
  short *psVar2;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x28);
  sub_080C5CA4();
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfa;
  psVar2 = (short *)(iVar1 + 0xb4);
  *psVar2 = *psVar2 + -1;
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 0x10);
  return in_lr;
}

