// sub_080DABB8 at 0x080DABB8 (thumb)

undefined4 sub_080DABB8(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x28);
  *(uint *)(param_1 + 0x54) =
       *(int *)(iVar1 + 0xddc) + (uint)*(byte *)(iVar1 + 0xdd8) * 0x2000 + 0x1400;
  *(int *)(param_1 + 0x58) = *(int *)(iVar1 + 0xde0) + 0x1800;
  return in_lr;
}

