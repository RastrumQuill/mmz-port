// sub_080FB06C at 0x080FB06C (thumb)

undefined4 sub_080FB06C(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_0802B3CC(*(undefined4 *)(param_1 + 0xc0));
  if (iVar1 != 0) {
    sub_08005784(param_1 + 0x74,&DAT_08867444);
    *(undefined4 *)(param_1 + 0xc0) = 0;
    if (*(char *)(param_1 + 0xd) == '\x01') {
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}

