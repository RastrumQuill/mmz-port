// sub_080F36F4 at 0x080F36F4 (thumb)

undefined4 sub_080F36F4(int param_1)

{
  undefined4 in_lr;
  
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
  *(undefined **)(param_1 + 0x30) = &UNK_08866a2c + (uint)*(byte *)(param_1 + 0x10) * 8;
  *(undefined2 *)(param_1 + 0x26) = 1;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_080F3734();
  return in_lr;
}

