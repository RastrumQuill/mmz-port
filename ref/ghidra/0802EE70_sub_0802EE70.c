// sub_0802EE70 at 0x0802EE70 (thumb)

undefined4 sub_0802EE70(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08029778(param_1,2);
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  iVar2 = *(int *)(param_1 + 0x58) + 0x40;
  *(int *)(param_1 + 0x58) = iVar2;
  if (0x700 < iVar2) {
    *(undefined4 *)(param_1 + 0x58) = 0x700;
  }
  sub_0802E674(param_1);
  if ((*(char *)(param_1 + 0x11) != '\0') &&
     ((0x100 < *(int *)(param_1 + 0x58) || ((*(byte *)(param_1 + 0x12) & 1) == 0)))) {
    *(undefined *)(param_1 + 0xd) = 4;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  uVar1 = sub_0802E674(param_1);
  if ((uVar1 & 1) != 0) {
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_080297C0(param_1);
  return in_lr;
}

