// sub_080464F8 at 0x080464F8 (thumb)

undefined4 sub_080464F8(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if ((((*(uint *)(param_1 + 0x8c) & 0x200) == 0) && (*(short *)(param_1 + 0xa4) != 0)) ||
     ((DAT_0202ec38 & 0x10) != 0)) {
    iVar1 = *(int *)(param_1 + 0xd8);
    if ((iVar1 != 0) &&
       (((*(uint *)(iVar1 + 0x8c) & 0x200) != 0 || (*(short *)(iVar1 + 0xa4) == 0)))) {
      *(int *)(param_1 + 0xd8) = 0;
    }
    sub_0804671C(param_1);
    sub_080EF118(param_1,*(undefined4 *)(&DAT_0833aa10 + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833a138 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_08046590(param_1);
  }
  return in_lr;
}

