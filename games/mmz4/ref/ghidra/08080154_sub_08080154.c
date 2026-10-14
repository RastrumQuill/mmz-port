// sub_08080154 at 0x08080154 (thumb)

undefined4 sub_08080154(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,0x1a0c);
    *(undefined *)(param_1 + 0xc2) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_0801CFF0(param_1);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  iVar1 = *(int *)(param_1 + 0x5c) + -0x10;
  *(int *)(param_1 + 0x5c) = iVar1;
  if (iVar1 < -0x200) {
    *(undefined4 *)(param_1 + 0x5c) = 0xfffffe00;
  }
  sub_08080594(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

