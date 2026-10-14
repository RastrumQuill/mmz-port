// sub_080CAAC0 at 0x080CAAC0 (thumb)

undefined4 sub_080CAAC0(int param_1)

{
  undefined4 in_lr;
  
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
  *(undefined **)(param_1 + 0x30) = &DAT_08349100;
  *(undefined2 *)(param_1 + 0x26) = 0x401;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0834863c + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_080CA900();
  return in_lr;
}

