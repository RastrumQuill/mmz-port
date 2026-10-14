// sub_0801E634 at 0x0801E634 (thumb)

void sub_0801E634(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_083339f8 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return;
}

