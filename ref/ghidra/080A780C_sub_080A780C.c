// sub_080A780C at 0x080A780C (thumb)

undefined4 sub_080A780C(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined4 *)(param_1 + 0x58) = 0;
    sub_0809C930(param_1,0);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  iVar1 = *(int *)(param_1 + 0x58) + 0x40;
  *(int *)(param_1 + 0x58) = iVar1;
  if (0x700 < iVar1) {
    *(undefined4 *)(param_1 + 0x58) = 0x700;
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0x20) + 0xbc);
  if (iVar1 < *(int *)(param_1 + 0x50)) {
    *(int *)(param_1 + 0x50) = iVar1;
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x50);
  sub_0809C980(param_1);
  return in_lr;
}

