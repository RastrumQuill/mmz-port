// sub_080B169C at 0x080B169C (thumb)

undefined4 sub_080B169C(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_0802B3CC(*(undefined4 *)(param_1 + 0xc0));
  if (iVar1 != 0) {
    sub_08005784(param_1 + 0x74,&DAT_0885ff64);
    *(undefined4 *)(param_1 + 0xc0) = 0;
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 3;
    *(undefined *)(param_1 + 0x12) = 0;
  }
  return in_lr;
}

