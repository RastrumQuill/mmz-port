// sub_0803726C at 0x0803726C (thumb)

undefined4 sub_0803726C(int param_1)

{
  char *pcVar1;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0835b5d0)[*(byte *)(param_1 + 9)] + 4);
  sub_080FE2C0(param_1,*(undefined4 *)(&DAT_0835b614 + (uint)*(byte *)(param_1 + 0x10) * 4));
  *(undefined *)(param_1 + 0xc0) = 0;
  *(undefined *)(param_1 + 0xc3) = 1;
  pcVar1 = (char *)(*(int *)(param_1 + 0xb4) + 300);
  *pcVar1 = *pcVar1 + '\x01';
  *(undefined4 *)(param_1 + 0x98) = 0x80382e5;
  sub_080372CC(param_1);
  return in_lr;
}

