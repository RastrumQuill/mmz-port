// sub_080A3738 at 0x080A3738 (thumb)

undefined4 sub_080A3738(int param_1)

{
  undefined4 in_lr;
  
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 0x18;
  *(undefined **)(param_1 + 0x28) = &DAT_082b5cb0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_080A3770();
  return in_lr;
}

