// sub_08069F38 at 0x08069F38 (thumb)

undefined4 sub_08069F38(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08017700(param_1,0xd03);
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  sub_080177F4(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 6;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  if ((*(char *)(param_1 + 0x71) == '\x05') && (*(char *)(param_1 + 0x12) == '\0')) {
    *(undefined *)(param_1 + 0x12) = 1;
    iVar1 = *(int *)(param_1 + 0x54) + -0x700;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      iVar1 = *(int *)(param_1 + 0x54) + 0x700;
    }
    sub_080696D0(iVar1,*(int *)(param_1 + 0x58) + 0xf00,*(byte *)(param_1 + 10) >> 4 & 1,
                 *(undefined *)(param_1 + 0x11));
  }
  return in_lr;
}

