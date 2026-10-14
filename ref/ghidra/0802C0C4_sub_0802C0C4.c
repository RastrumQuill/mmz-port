// sub_0802C0C4 at 0x0802C0C4 (thumb)

undefined4 sub_0802C0C4(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0800561C(param_1 + 0x74,&DAT_082acdf8);
    sub_08029778(param_1,7);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined4 *)(param_1 + 0x58) = 0;
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
  iVar1 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
  if (iVar1 < *(int *)(param_1 + 0x50)) {
    *(int *)(param_1 + 0x50) = iVar1;
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_080297C0(param_1);
  return in_lr;
}

