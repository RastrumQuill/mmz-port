// sub_080B9B3C at 0x080B9B3C (thumb)

undefined4 sub_080B9B3C(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x4c) =
       *(int *)(iVar1 + 0x9e8) + (uint)*(byte *)(iVar1 + 0x9e4) * 0x2000 + 0x1400;
  *(int *)(param_1 + 0x50) = *(int *)(iVar1 + 0x9ec) + 0x1800;
  return in_lr;
}

