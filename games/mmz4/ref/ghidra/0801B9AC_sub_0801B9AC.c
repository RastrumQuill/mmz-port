// sub_0801B9AC at 0x0801B9AC (thumb)

undefined4 sub_0801B9AC(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0x50) = 0;
  iVar1 = *(int *)(param_1 + 0x68);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0xc) = 2;
    *(undefined4 *)(iVar1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(iVar1 + 9) * 4) + 8);
  }
  return in_lr;
}

