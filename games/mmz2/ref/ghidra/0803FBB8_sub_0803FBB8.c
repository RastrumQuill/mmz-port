// sub_0803FBB8 at 0x0803FBB8 (thumb)

undefined4 sub_0803FBB8(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if ((((*(uint *)(param_1 + 0x8c) & 0x200) == 0) && (*(short *)(param_1 + 0xa4) != 0)) ||
     ((DAT_0202ec38 & 0x10) != 0)) {
    *(byte *)(param_1 + 0x49) =
         *(byte *)(param_1 + 0x49) & 0xf3 | (byte)((*(byte *)(param_1 + 0xbd) & 3) << 2);
    iVar1 = *(int *)(param_1 + 0xd8);
    if ((iVar1 != 0) && (1 < *(byte *)(iVar1 + 0xc))) {
      *(int *)(param_1 + 0xd8) = 0;
    }
    if (((*(uint *)(param_1 + 0x8c) & 1) != 0) && (*(char *)(param_1 + 0xd) == '\x04')) {
      *(undefined *)(param_1 + 0xd) = 7;
      *(undefined *)(param_1 + 0xe) = 0;
    }
    sub_080EF118(param_1,*(undefined4 *)(&DAT_0833a1b0 + (uint)*(byte *)(param_1 + 0xd) * 4));
    if (0x393000 < *(int *)(param_1 + 0x54) + 0xf000) {
      *(undefined4 *)(param_1 + 0x5c) = 0;
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833a138 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_0803FC88(param_1);
  }
  return in_lr;
}

