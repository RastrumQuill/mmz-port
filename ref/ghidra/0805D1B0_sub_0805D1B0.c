// sub_0805D1B0 at 0x0805D1B0 (thumb)

undefined4 sub_0805D1B0(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x20);
  *(int *)(param_1 + 0x4c) = *(int *)(iVar1 + 0x4c) + 0x600;
  *(int *)(param_1 + 0x50) = *(int *)(iVar1 + 0x50) + -0x2e00;
  if ((*(ushort *)(param_1 + 0x90) & 0x40) == 0) {
    sub_080C8A98(param_1,*(undefined4 *)(&DAT_082b0074 + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    *(undefined *)(param_1 + 0xe) = 1;
    *(byte *)(iVar1 + 0xbc) = *(byte *)(iVar1 + 0xbc) | 2;
    sub_0805CC30(param_1);
  }
  return in_lr;
}

