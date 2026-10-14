// sub_080F9B80 at 0x080F9B80 (thumb)

void sub_080F9B80(int param_1)

{
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xf7;
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return;
}

