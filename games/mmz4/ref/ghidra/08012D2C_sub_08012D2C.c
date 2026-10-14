// sub_08012D2C at 0x08012D2C (thumb)

undefined4 sub_08012D2C(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0xe) = 1;
  }
  iVar1 = *(int *)(param_1 + 0x34);
  if (((iVar1 < 0x3c0) || (iVar1 - 0xb41U < 0x3bf)) || (0x3be < iVar1 - 0x781U)) {
    *(undefined4 *)(param_1 + 0x4c) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x4c) = 0xffffffe0;
  }
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0x100;
  *(undefined4 *)(param_1 + 0x48) = 0x100;
  return in_lr;
}

