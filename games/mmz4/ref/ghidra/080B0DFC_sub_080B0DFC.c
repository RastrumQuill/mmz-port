// sub_080B0DFC at 0x080B0DFC (thumb)

undefined4 sub_080B0DFC(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  sub_08005784(param_1 + 0x74,&DAT_0885feec);
  iVar1 = sub_0802B3CC(*(undefined4 *)(param_1 + 0x28));
  if (iVar1 != 0) {
    sub_08005784(param_1 + 0x74,&DAT_0885fed4);
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return in_lr;
}

