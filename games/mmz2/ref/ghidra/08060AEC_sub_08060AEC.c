// sub_08060AEC at 0x08060AEC (thumb)

undefined4 sub_08060AEC(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if ((((*(uint *)(param_1 + 0x8c) & 0x200) == 0) && (*(short *)(param_1 + 0xa4) != 0)) ||
     ((DAT_0202ec38 & 0x10) != 0)) {
    iVar1 = *(int *)(param_1 + 0xc0);
    if (iVar1 != 0) {
      iVar1 = iVar1 + -1;
      *(int *)(param_1 + 0xc0) = iVar1;
      if (iVar1 == 0) {
        DAT_0202e01c = 0;
      }
    }
    sub_080EF118(param_1,*(undefined4 *)(&DAT_0833d3a0 + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833a138 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_08060B74(param_1);
  }
  return in_lr;
}

