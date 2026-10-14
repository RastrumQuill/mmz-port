// sub_080FFA5C at 0x080FFA5C (thumb)

undefined4 sub_080FFA5C(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  sub_0801CC9C();
  *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | 4;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  iVar1 = *(int *)(param_1 + 0x54) + 0x800;
  *(int *)(param_1 + 0x54) = iVar1;
  iVar1 = sub_08008534(iVar1,*(undefined4 *)(param_1 + 0x58));
  *(int *)(param_1 + 0x58) = iVar1 + 0x100;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined *)(param_1 + 0xf) = 0;
  *(undefined *)(param_1 + 0xe) = 0;
  sub_080FFAC4(param_1);
  return in_lr;
}

