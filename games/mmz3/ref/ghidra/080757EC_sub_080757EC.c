// sub_080757EC at 0x080757EC (thumb)

undefined4 sub_080757EC(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 4);
  if ((*(char *)(iVar1 + 2) == '\x01') && ((*(uint *)(iVar1 + 4) & 0x200ff) == 0x20002)) {
    *(undefined *)(*(int *)(param_1 + 0x2c) + 0xb5) = 1;
  }
  return in_lr;
}

