// sub_08045AF8 at 0x08045AF8 (thumb)

undefined4 sub_08045AF8(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 4);
  sub_0801CC9C(param_1);
  sub_0801CEEC(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801CFC8(param_1,0x8407,
               (uint)((int)((uint)(*(byte *)(iVar1 + 0x71) ^ 1) << 0x18) >> 8) >> 0x10,
               (short)*(char *)(iVar1 + 0x72));
  sub_0801CFF0(param_1);
  *(undefined *)(param_1 + 0x25) = 0xf;
  *(undefined *)(param_1 + 0x12) = 0;
  sub_080458A0(param_1);
  return in_lr;
}

