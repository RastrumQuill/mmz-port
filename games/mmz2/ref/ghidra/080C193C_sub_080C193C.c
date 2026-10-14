// sub_080C193C at 0x080C193C (thumb)

void sub_080C193C(int param_1)

{
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xf7;
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0834863c + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return;
}

