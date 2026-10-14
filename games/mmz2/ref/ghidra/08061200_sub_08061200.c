// sub_08061200 at 0x08061200 (thumb)

undefined4 sub_08061200(int param_1)

{
  undefined4 in_lr;
  
  if ((((*(uint *)(param_1 + 0x8c) & 0x200) == 0) && (*(short *)(param_1 + 0xa4) != 0)) ||
     ((DAT_0202ec38 & 0x10) != 0)) {
    sub_080EF118(param_1,*(undefined4 *)(&DAT_0833d468 + (uint)*(byte *)(param_1 + 0xd) * 4));
    sub_080EF118(param_1,*(undefined4 *)(&DAT_0833d490 + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833a138 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_0806127C(param_1);
  }
  return in_lr;
}

