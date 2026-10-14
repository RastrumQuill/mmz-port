// sub_08092114 at 0x08092114 (thumb)

undefined4 sub_08092114(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if ((*(int *)(param_1 + 0xb4) == 0) || (iVar1 = sub_0802B3CC(), iVar1 != 0)) {
    sub_08005784(param_1 + 0x74,&DAT_0885cf1c);
    *(int *)(param_1 + 0xb4) = 0;
    iVar1 = sub_0807F824(param_1);
    if (iVar1 == 0) {
      *(undefined *)(param_1 + 0xd) = 4;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}

