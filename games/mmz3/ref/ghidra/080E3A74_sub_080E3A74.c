// sub_080E3A74 at 0x080E3A74 (thumb)

undefined4 sub_080E3A74(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(byte *)(param_1 + 0xbc) - 1;
  *(byte *)(param_1 + 0xbc) = (byte)iVar1;
  if (iVar1 == 0) {
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  return in_lr;
}

