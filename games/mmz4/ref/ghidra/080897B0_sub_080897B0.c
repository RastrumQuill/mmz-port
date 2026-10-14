// sub_080897B0 at 0x080897B0 (thumb)

undefined4 sub_080897B0(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08005784(param_1 + 0x74,&DAT_0885bc98);
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  iVar1 = sub_0802B3CC(*(undefined4 *)(param_1 + 0xbc));
  if (iVar1 != 0) {
    sub_08005784(param_1 + 0x74,
                 &DAT_0885bc08 + (uint)(byte)(&DAT_0885bd70)[*(byte *)(param_1 + 0xc0)] * 0x18);
    *(undefined4 *)(param_1 + 0xbc) = 0;
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

