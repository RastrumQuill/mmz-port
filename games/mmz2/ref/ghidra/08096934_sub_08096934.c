// sub_08096934 at 0x08096934 (thumb)

undefined4 sub_08096934(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080128D4(param_1);
    *(undefined4 *)(param_1 + 0x60) = 0xffffff80;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if ((*(byte *)(param_1 + 0x12) & 3) == 0) {
    sub_080128D4(param_1);
  }
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  iVar1 = sub_08065A4C(param_1);
  if (((*(int *)(param_1 + 0xbc) - *(int *)(iVar1 + 0x54)) + 0xf000U < 0x1e001) &&
     ((*(int *)(param_1 + 0xc0) - *(int *)(iVar1 + 0x58)) + 0xa000U < 0x14001)) {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

