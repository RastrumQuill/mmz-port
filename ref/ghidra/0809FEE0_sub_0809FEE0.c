// sub_0809FEE0 at 0x0809FEE0 (thumb)

void sub_0809FEE0(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
  return;
}

