// sub_0805D9E8 at 0x0805D9E8 (thumb)

undefined4 sub_0805D9E8(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if (*(byte *)(iVar1 + 0xc) < 2) {
    *(int *)(param_1 + 0x4c) = *(int *)(iVar1 + 0x4c) + -0x5800;
    *(int *)(param_1 + 0x50) = *(int *)(iVar1 + 0x50) + -0x3e00;
    sub_080C8A98(param_1,*(undefined4 *)(&DAT_082b0118 + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_0805DA44(param_1);
  }
  return in_lr;
}

