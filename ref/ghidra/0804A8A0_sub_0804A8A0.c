// sub_0804A8A0 at 0x0804A8A0 (thumb)

void sub_0804A8A0(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return;
}

