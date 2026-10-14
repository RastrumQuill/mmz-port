// sub_080346A0 at 0x080346A0 (thumb)

undefined4 sub_080346A0(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,6);
    *(undefined *)(param_1 + 0xe) = 0;
    sub_08064A8C(param_1 + 0x4c,4,*(byte *)(param_1 + 10) >> 4 & 1);
    sub_08001EAC(0x34);
  }
  sub_080297C0(param_1);
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  iVar1 = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  *(int *)(param_1 + 0x50) = iVar1;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -0x40;
  if (iVar1 < *(int *)(param_1 + 0xc0) + -0x6000) {
    *(undefined *)(param_1 + 0xd) = 9;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

