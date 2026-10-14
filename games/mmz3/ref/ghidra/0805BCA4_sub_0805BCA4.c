// sub_0805BCA4 at 0x0805BCA4 (thumb)

undefined4 sub_0805BCA4(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08009B28(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 1);
  if (iVar1 == 0) {
    *(undefined *)(param_1 + 0xd) = 0x19;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

