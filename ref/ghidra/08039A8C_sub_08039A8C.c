// sub_08039A8C at 0x08039A8C (thumb)

undefined4 sub_08039A8C(int param_1)

{
  undefined4 in_lr;
  
  if (*(byte *)(*(int *)(param_1 + 0xc4) + 0xc) < 2) {
    sub_080C8A98(param_1,*(undefined4 *)(&DAT_082adac4 + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082acbf8 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_08039AD0(param_1);
  }
  return in_lr;
}

