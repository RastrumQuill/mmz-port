// sub_080800CC at 0x080800CC (thumb)

undefined4 sub_080800CC(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0xc2) = 1;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_0801CFF0(param_1);
  if (*(char *)(param_1 + 0xb8) != '\0') {
    iVar1 = *(int *)(param_1 + 0x54) - *(int *)(DAT_0202dbf0 + 0x54);
    if (iVar1 < 0) {
      iVar1 = *(int *)(DAT_0202dbf0 + 0x54) - *(int *)(param_1 + 0x54);
    }
    if (0x4fff < iVar1) {
      return in_lr;
    }
    *(char *)(param_1 + 0xb8) = '\0';
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  iVar1 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar1;
  if (0x700 < iVar1) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  sub_08080594(param_1);
  return in_lr;
}

