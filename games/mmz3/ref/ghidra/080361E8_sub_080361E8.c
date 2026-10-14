// sub_080361E8 at 0x080361E8 (thumb)

undefined4 sub_080361E8(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(*(int *)(param_1 + 0x28) + 0x31) == '\0') {
    sub_080FE2C0(param_1,*(undefined4 *)(&DAT_0835b3c8 + (uint)*(byte *)(param_1 + 0xd) * 4));
    sub_080FE2C0(param_1,*(undefined4 *)(&DAT_0835b3d4 + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  iVar1 = *(int *)(param_1 + 0x27c) + -0x6c00;
  if (*(int *)(param_1 + 0x54) <= iVar1) {
    *(int *)(param_1 + 0x54) = iVar1;
    *(undefined4 *)(param_1 + 0x5c) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x27c) + 0x6c00;
  if (iVar1 <= *(int *)(param_1 + 0x54)) {
    *(int *)(param_1 + 0x54) = iVar1;
    *(undefined4 *)(param_1 + 0x5c) = 0;
  }
  return in_lr;
}

