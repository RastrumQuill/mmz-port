// sub_08048068 at 0x08048068 (thumb)

undefined4 sub_08048068(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,5);
    *(undefined *)(param_1 + 0xe) = 0;
    sub_0800561C(param_1 + 0x74,&DAT_082ae9c4);
    *(undefined *)(param_1 + 0x1f) = 0;
  }
  sub_080297C0(param_1);
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  iVar1 = *(int *)(param_1 + 0x58) + 0x40;
  *(int *)(param_1 + 0x58) = iVar1;
  if (0x700 < iVar1) {
    *(undefined4 *)(param_1 + 0x58) = 0x700;
  }
  iVar1 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
  if (iVar1 < *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58) * 4 + 0x100) {
    *(undefined *)(param_1 + 0xd) = 9;
    *(undefined *)(param_1 + 0xe) = 1;
    *(undefined4 *)(param_1 + 0x54) = 0;
  }
  return in_lr;
}

