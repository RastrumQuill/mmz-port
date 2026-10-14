// sub_080BC960 at 0x080BC960 (thumb)

undefined4 sub_080BC960(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x12) == '<') {
    *(undefined *)(param_1 + 0x12) = 0;
  }
  if ((byte)(*(char *)(param_1 + 0x12) - 0xfU) < 0x1f) {
    iVar1 = *(int *)(param_1 + 0x58) + -0x80;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x58) + 0x80;
  }
  *(int *)(param_1 + 0x58) = iVar1;
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
  return in_lr;
}

