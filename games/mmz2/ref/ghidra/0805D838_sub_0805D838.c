// sub_0805D838 at 0x0805D838 (thumb)

undefined4 sub_0805D838(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if ((((*(uint *)(param_1 + 0x8c) & 0x200) == 0) && (*(short *)(param_1 + 0xa4) != 0)) ||
     ((DAT_0202ec38 & 0x10) != 0)) {
    sub_0805DC14(param_1);
    sub_080EF118(param_1,*(undefined4 *)(&DAT_0833ce68 + (uint)*(byte *)(param_1 + 0xd) * 4));
    if (1 < *(byte *)(param_1 + 0xd)) {
      iVar1 = *(int *)(param_1 + 0xc0) + 0x1000;
      if ((*(int *)(param_1 + 0x54) < iVar1) ||
         (iVar1 = *(int *)(param_1 + 0xc4) + -0x1000, iVar1 < *(int *)(param_1 + 0x54))) {
        *(int *)(param_1 + 0x54) = iVar1;
      }
      iVar1 = *(int *)(param_1 + 200) + 0x2000;
      if ((*(int *)(param_1 + 0x58) < iVar1) ||
         (iVar1 = *(int *)(param_1 + 0xcc) + -0x1800, iVar1 < *(int *)(param_1 + 0x58))) {
        *(int *)(param_1 + 0x58) = iVar1;
      }
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833a138 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_0805D8F8(param_1);
  }
  return in_lr;
}

