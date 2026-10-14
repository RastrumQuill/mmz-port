// sub_080CCAF0 at 0x080CCAF0 (thumb)

undefined4 sub_080CCAF0(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    sub_08017700(param_1,0x3b00);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  iVar1 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar1;
  if (0x700 < iVar1) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  iVar1 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar1;
  iVar1 = sub_08009BE4(*(undefined4 *)(param_1 + 0x54),iVar1 + *(int *)(param_1 + 0xb4));
  if (*(char *)(param_1 + 0x12) == '\0') {
    *(undefined4 *)(param_1 + 0x60) = 0x80;
    if (iVar1 == 0) {
      *(undefined *)(param_1 + 0x12) = 1;
    }
  }
  else if (iVar1 < 0) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar1;
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_080177F4(param_1);
  return in_lr;
}

