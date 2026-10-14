// sub_080ABCA0 at 0x080ABCA0 (thumb)

void sub_080ABCA0(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  return;
}

