// sub_0803CD48 at 0x0803CD48 (thumb)

undefined4 sub_0803CD48(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,3);
    *(undefined *)(param_1 + 0xe) = 0;
    *(short *)(param_1 + 0xce) = (short)(*(int *)(param_1 + 0x54) >> 5);
  }
  sub_080297C0(param_1);
  iVar1 = *(int *)(param_1 + 0x54) - (int)*(short *)(param_1 + 0xce);
  *(int *)(param_1 + 0x54) = iVar1;
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + iVar1;
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 6;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

