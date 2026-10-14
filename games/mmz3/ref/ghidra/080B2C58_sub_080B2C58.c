// sub_080B2C58 at 0x080B2C58 (thumb)

undefined4 sub_080B2C58(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 in_lr;
  
  sub_080177F4();
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\b';
  iVar2 = *(int *)(param_1 + 0x60) + -0x60;
  *(int *)(param_1 + 0x60) = iVar2;
  if (iVar2 < -0x100) {
    *(undefined4 *)(param_1 + 0x60) = 0xffffff00;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x54) =
       *(int *)(param_1 + 0x54) +
       *(int *)(param_1 + 0x5c) +
       ((int)((uint)(ushort)(&DAT_080fe64c)[*(byte *)(param_1 + 0x12)] << 0x10) >> 0x12);
  iVar2 = sub_0801A9A8(&DAT_02030288,param_1 + 0x54);
  if ((iVar2 != 0) ||
     ((*(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60) * -2 <= DAT_0202e48c &&
      (sVar1 = sub_08008FEC(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58)),
      sVar1 != -0x8000)))) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

