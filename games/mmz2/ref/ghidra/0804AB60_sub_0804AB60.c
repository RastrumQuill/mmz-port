// sub_0804AB60 at 0x0804AB60 (thumb)

undefined4 sub_0804AB60(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if ((((*(uint *)(param_1 + 0x8c) & 0x200) == 0) && (*(short *)(param_1 + 0xa4) != 0)) ||
     ((DAT_0202ec38 & 0x10) != 0)) {
    sub_0804AEA8(param_1);
    sub_080EF118(param_1,*(undefined4 *)(&DAT_0833b1f8 + (uint)*(byte *)(param_1 + 0xd) * 4));
    iVar1 = *(int *)(param_1 + 0xc4) + 0x1800;
    if ((*(int *)(param_1 + 0x54) < iVar1) ||
       (iVar1 = *(int *)(param_1 + 200) + -0x1800, iVar1 < *(int *)(param_1 + 0x54))) {
      *(int *)(param_1 + 0x54) = iVar1;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833a138 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_0804ABF4(param_1);
  }
  return in_lr;
}

