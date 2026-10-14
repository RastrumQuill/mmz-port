// sub_080AA740 at 0x080AA740 (thumb)

undefined4 sub_080AA740(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_0802B3CC(*(undefined4 *)(param_1 + 0xc0));
  if (iVar1 != 0) {
    sub_08005784(param_1 + 0x74,&DAT_0885f59c);
    *(undefined4 *)(param_1 + 0xc0) = 0;
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0x13) = 0x20;
  }
  return in_lr;
}

