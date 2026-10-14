// sub_080D105C at 0x080D105C (thumb)

undefined4 sub_080D105C(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  sub_0801CFF0();
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\b';
  iVar1 = *(int *)(param_1 + 0x60) + -0x60;
  *(int *)(param_1 + 0x60) = iVar1;
  if (iVar1 < -0x100) {
    *(undefined4 *)(param_1 + 0x60) = 0xffffff00;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x54) =
       *(int *)(param_1 + 0x54) +
       *(int *)(param_1 + 0x5c) +
       ((int)((uint)(ushort)(&DAT_08128c10)[*(byte *)(param_1 + 0x12)] << 0x10) >> 0x12);
  iVar1 = sub_0801FB14(&DAT_0202e9f8,param_1 + 0x54);
  if ((iVar1 != 0) ||
     (*(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60) * -2 < *(int *)(param_1 + 0x7c))) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

