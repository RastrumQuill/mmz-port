// sub_08030F5C at 0x08030F5C (thumb)

undefined4 sub_08030F5C(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (param_2 == 0) {
    *(undefined *)(param_1 + 0x1d) = 0x10;
    *(undefined2 *)(param_1 + 0x1e) = 0;
    *(undefined2 *)(param_1 + 0x20) = 1;
    *(undefined *)(param_1 + 0x22) = 0;
    iVar1 = 1;
    do {
      iVar1 = iVar1 + -1;
      *(undefined *)(param_1 + 0x23 + iVar1) = 0;
    } while (iVar1 != 0);
    iVar1 = 2;
    do {
      iVar1 = iVar1 + -1;
      *(undefined *)(param_1 + 0x24 + iVar1) = 0;
    } while (iVar1 != 0);
  }
  else {
    *(undefined *)(param_1 + 0x1d) = 0x20;
    *(undefined2 *)(param_1 + 0x1e) = 9999;
    *(undefined2 *)(param_1 + 0x20) = 0x3ff;
    *(undefined *)(param_1 + 0x22) = 0x3f;
    iVar1 = 1;
    do {
      iVar1 = iVar1 + -1;
      *(undefined *)(param_1 + 0x23 + iVar1) = 0xff;
    } while (iVar1 != 0);
    iVar1 = 2;
    do {
      iVar2 = iVar1 + -1;
      *(undefined *)(param_1 + 0x24 + iVar2) = (&UNK_083359a3)[iVar1];
      iVar1 = iVar2;
    } while (iVar2 != 0);
  }
  sub_080316B0(param_1,param_2);
  return in_lr;
}

