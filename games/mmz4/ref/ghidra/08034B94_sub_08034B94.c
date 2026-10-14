// sub_08034B94 at 0x08034B94 (thumb)

undefined4 sub_08034B94(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_0803A1A8();
  if (iVar1 == 0) {
    *(undefined *)(param_1 + 0x100) = 0;
  }
  else {
    if (*(short *)(param_1 + 0xfc) == 0x100) {
      sub_0801CFC8(param_1,0x900,(short)*(char *)(param_1 + 0x71),(short)*(char *)(param_1 + 0x72));
    }
    else {
      sub_0801CF00(param_1,0x900);
    }
    *(undefined *)(param_1 + 0x101) = 1;
    sub_08034C00(param_1);
  }
  return in_lr;
}

