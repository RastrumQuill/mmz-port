// sub_08097330 at 0x08097330 (thumb)

undefined4 sub_08097330(int param_1)

{
  undefined4 in_lr;
  
  sub_08088204();
  *(undefined2 *)(param_1 + 0x48) = 0x200;
  *(undefined2 *)(param_1 + 0x4a) = 0x200;
  *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf3 | 4;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 4);
  sub_080972DC(param_1);
  return in_lr;
}

