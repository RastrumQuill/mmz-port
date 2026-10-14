// sub_080DC808 at 0x080DC808 (thumb)

undefined4 sub_080DC808(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0834b8b4)[*(byte *)(param_1 + 9)] + 0x10);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  if (*(char *)(param_1 + 0x12) == '\0') {
    for (iVar1 = *(int *)(param_1 + 0x2c); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x2c)) {
      *(undefined4 *)(iVar1 + 0xc) = 2;
      *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)((&DAT_0834b8b4)[*(byte *)(iVar1 + 9)] + 8);
    }
  }
  return in_lr;
}

