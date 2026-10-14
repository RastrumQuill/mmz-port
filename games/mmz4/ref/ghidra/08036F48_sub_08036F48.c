// sub_08036F48 at 0x08036F48 (thumb)

undefined4 sub_08036F48(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_0803A1A8();
  if (iVar1 == 0) {
    *(undefined *)(param_1 + 0x100) = 0;
  }
  else {
    *(undefined *)(param_1 + 0x101) = 1;
    sub_08036F78(param_1);
  }
  return in_lr;
}

