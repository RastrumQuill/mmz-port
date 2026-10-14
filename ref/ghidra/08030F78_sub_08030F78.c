// sub_08030F78 at 0x08030F78 (thumb)

undefined4 sub_08030F78(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,5);
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_080297C0(param_1);
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  iVar1 = *(int *)(param_1 + 0x58) + 0x40;
  *(int *)(param_1 + 0x58) = iVar1;
  if (0x700 < iVar1) {
    *(undefined4 *)(param_1 + 0x58) = 0x700;
  }
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 0xf;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

