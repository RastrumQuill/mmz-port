// sub_080D8480 at 0x080D8480 (thumb)

undefined4 sub_080D8480(int param_1)

{
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0834a1a0)[*(byte *)(param_1 + 9)] + 0x10);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  *(byte *)(*(int *)(param_1 + 0x28) + 0x202) =
       *(byte *)(*(int *)(param_1 + 0x28) + 0x202) |
       (&DAT_0834b50e)[(uint)*(byte *)(param_1 + 0x11) * 4];
  if ((byte)(*(char *)(param_1 + 0x10) - 8U) < 2) {
    if (*DAT_0202ebf0 < 9) {
      *DAT_0202ebf0 = *DAT_0202ebf0 + 1;
      if (*DAT_0202ebf0 < 9) {
        *DAT_0202ebf0 = *DAT_0202ebf0 + 1;
      }
    }
  }
  sub_080D568C(*(undefined4 *)(param_1 + 0x28),param_1);
  DAT_0202e144 = 0;
  return in_lr;
}

