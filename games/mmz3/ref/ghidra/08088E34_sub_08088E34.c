// sub_08088E34 at 0x08088E34 (thumb)

undefined4 sub_08088E34(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  if (((*(uint *)(param_1 + 0x14) & 8) != 0) &&
     (*(short *)(*(int *)(*(int *)(param_1 + 0xc) + 0x2c) + 8) == 0x1206)) {
    *(undefined4 *)(iVar1 + 0xc) = 2;
    *(undefined4 *)(iVar1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(iVar1 + 9) * 4) + 8);
    *(undefined *)(iVar1 + 0xd) = 0;
  }
  *(int *)(iVar1 + 0xb4) = *(int *)(DAT_0202f5c0 + 0x54) - *(int *)(iVar1 + 0x54);
  return in_lr;
}

