// sub_080A1B9C at 0x080A1B9C (thumb)

undefined4 sub_080A1B9C(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0x100;
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  sub_0809C980(param_1);
  iVar1 = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0x4c) = iVar1;
  if (*(int *)(param_1 + 0xbc) + *(int *)(&DAT_082b59f8 + (uint)*(byte *)(param_1 + 0x10) * 4) <
      iVar1) {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 1;
    *(undefined *)(param_1 + 0xf) = 3;
  }
  return in_lr;
}

