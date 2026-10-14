// sub_080316B0 at 0x080316B0 (thumb)

undefined4 sub_080316B0(int param_1,int param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0x1c) = 0;
  if (param_2 == 0) {
    iVar1 = 4;
    do {
      iVar1 = iVar1 + -1;
      *(undefined *)(param_1 + 0x26 + iVar1) = 0;
    } while (iVar1 != 0);
  }
  else {
    iVar1 = 4;
    do {
      iVar1 = iVar1 + -1;
      *(undefined *)(param_1 + 0x26 + iVar1) = 0x1e;
    } while (iVar1 != 0);
  }
  *(undefined *)(param_1 + 0x2a) = 0;
  *(undefined *)(param_1 + 0x2b) = 0;
  *(undefined *)(param_1 + 0x2c) = 0;
  return in_lr;
}

