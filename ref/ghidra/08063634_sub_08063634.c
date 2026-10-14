// sub_08063634 at 0x08063634 (thumb)

void sub_08063634(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 8);
  return;
}

