// sub_08068EEC at 0x08068EEC (thumb)

undefined4 sub_08068EEC(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (((*(uint *)(param_1 + 0x14) & 1) != 0) &&
     (iVar1 = *(int *)(param_1 + 0x2c),
     *(short *)(*(int *)(*(int *)(param_1 + 0xc) + 0x2c) + 8) == 0x304)) {
    *(undefined4 *)(iVar1 + 0xc) = 2;
    *(undefined4 *)(iVar1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(iVar1 + 9) * 4) + 8);
    *(undefined *)(iVar1 + 0xd) = 0;
  }
  return in_lr;
}

