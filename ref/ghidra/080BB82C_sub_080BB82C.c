// sub_080BB82C at 0x080BB82C (thumb)

undefined4 sub_080BB82C(int param_1)

{
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0x4c) = 0x9700;
  *(undefined4 *)(param_1 + 0x50) = 0x2800;
  sub_080C8A98(param_1,*(undefined4 *)(&DAT_082b8ea8 + (uint)*(byte *)(param_1 + 0x11) * 4));
  return in_lr;
}

