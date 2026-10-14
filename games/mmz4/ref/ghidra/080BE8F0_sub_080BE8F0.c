// sub_080BE8F0 at 0x080BE8F0 (thumb)

undefined4 sub_080BE8F0(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 0x2c);
  if (((*(uint *)(param_1 + 0x14) & 1) != 0) && (*(short *)(iVar1 + 8) == 0xd04)) {
    sub_080C1630(iVar1);
  }
  return in_lr;
}

