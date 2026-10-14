// sub_08034D80 at 0x08034D80 (thumb)

void sub_08034D80(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0835ab9c + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return;
}

