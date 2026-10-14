// sub_08049100 at 0x08049100 (thumb)

undefined4 sub_08049100(int param_1)

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

