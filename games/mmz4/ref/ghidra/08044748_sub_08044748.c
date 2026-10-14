// sub_08044748 at 0x08044748 (thumb)

undefined4 sub_08044748(int param_1)

{
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 4);
  *(short *)(param_1 + 0xbe) = *(short *)(&DAT_0885360c + (uint)*(byte *)(param_1 + 0x10) * 2);
  sub_0801CC9C(param_1);
  sub_0801CEEC(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801CF00(param_1,(ushort)*(byte *)(param_1 + 0x11) * 3 + *(short *)(param_1 + 0xbe));
  sub_08002B10(*(undefined2 *)(&DAT_08853616 + (uint)*(byte *)(param_1 + 0x10) * 2));
  *(undefined *)(param_1 + 0x12) = (&DAT_08852904)[*(byte *)(param_1 + 0x10)];
  sub_080447D0(param_1);
  return in_lr;
}

