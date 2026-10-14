// sub_0803492C at 0x0803492C (thumb)

undefined4 sub_0803492C(int param_1)

{
  undefined4 in_lr;
  
  if ((*(char *)(*(int *)(param_1 + 0x28) + 0x2f) != '\0') && (*(char *)(param_1 + 0xd) != '\x03'))
  {
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_080FE2C0(param_1,*(undefined4 *)(&DAT_0835b1b0 + (uint)*(byte *)(param_1 + 0xd) * 4));
  sub_080FE2C0(param_1,*(undefined4 *)(&UNK_0835b1c0 + (uint)*(byte *)(param_1 + 0xd) * 4));
  if (*(int *)(param_1 + 0x54) < 0x267c01) {
    *(undefined4 *)(param_1 + 0x54) = 0x267c00;
    *(undefined4 *)(param_1 + 0x5c) = 0;
  }
  if (0x2753ff < *(int *)(param_1 + 0x54)) {
    *(undefined4 *)(param_1 + 0x54) = 0x275400;
    *(undefined4 *)(param_1 + 0x5c) = 0;
  }
  return in_lr;
}

