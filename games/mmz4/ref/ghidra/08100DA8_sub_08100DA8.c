// sub_08100DA8 at 0x08100DA8 (thumb)

undefined4 sub_08100DA8(int param_1)

{
  undefined4 in_lr;
  
  sub_080E6230(param_1 + 0x54,0x100,*(byte *)(param_1 + 10) >> 4 & 1);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

