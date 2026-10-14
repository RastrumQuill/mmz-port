// sub_08030FC4 at 0x08030FC4 (thumb)

undefined4 sub_08030FC4(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,8);
    *(undefined *)(param_1 + 0xe) = 0;
    *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) | 0xc;
    *(undefined *)(param_1 + 200) = 0;
    *(undefined *)(param_1 + 0xc1) = 5;
  }
  sub_080297C0(param_1);
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  iVar1 = *(int *)(param_1 + 0x58) + 0x40;
  *(int *)(param_1 + 0x58) = iVar1;
  if (0x700 < iVar1) {
    *(undefined4 *)(param_1 + 0x58) = 0x700;
  }
  if (*(int *)(param_1 + 0xbc) + 0x19000 < *(int *)(param_1 + 0x50)) {
    *(undefined *)(param_1 + 0xd) = 0x10;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

