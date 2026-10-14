// sub_080C36B8 at 0x080C36B8 (thumb)

undefined4 sub_080C36B8(int param_1)

{
  undefined4 in_lr;
  
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_08012580(param_1);
  if (*(char *)(param_1 + 0x11) != '\0') {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -0x800;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -0x600;
  }
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x58);
  sub_08002638(&DAT_08433278,(DAT_0202e61c - 0x210) * 0x20 + 0x10000);
  sub_08002AEC(&DAT_08433284,(DAT_0202e41c - 9) * 0x20 + 0x200);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0834863c + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_080C22E8(param_1);
  return in_lr;
}

