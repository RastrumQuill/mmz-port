// sub_08074134 at 0x08074134 (thumb)

undefined4 sub_08074134(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08048BE8();
  if (iVar1 != 0) {
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

