// sub_0809F854 at 0x0809F854 (thumb)

undefined4 sub_0809F854(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  if ((*(uint *)(param_1 + 0x14) & 1) != 0) {
    *(undefined2 *)(iVar1 + 0xa4) = 0x14;
  }
  if ((*(char *)(iVar1 + 0x10) == '\x01') && ((*(uint *)(param_1 + 0x14) & 1) != 0)) {
    sub_0809F644(param_2,*(byte *)(iVar1 + 10) >> 4 & 1);
  }
  return in_lr;
}

