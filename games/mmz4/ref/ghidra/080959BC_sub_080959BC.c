// sub_080959BC at 0x080959BC (thumb)

undefined4 sub_080959BC(int param_1)

{
  undefined4 in_lr;
  
  sub_08002B5C((int)*(short *)(&DAT_0885d280 + (uint)*(byte *)(param_1 + 0x11) * 4));
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

