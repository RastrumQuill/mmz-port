// sub_080A78EC at 0x080A78EC (thumb)

undefined4 sub_080A78EC(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0800561C(param_1 + 0x74,&DAT_082b61dc);
    sub_0809C930(param_1,3);
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined *)(param_1 + 200) = 0;
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  if (*(char *)(param_1 + 200) != '\0') {
    *(undefined *)(param_1 + 0xd) = 5;
    *(undefined *)(param_1 + 0xe) = 0;
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
  *(int *)(param_1 + 0xbc) = *(int *)(param_1 + 0x50) + -0x1800;
  sub_0809C980(param_1);
  return in_lr;
}

