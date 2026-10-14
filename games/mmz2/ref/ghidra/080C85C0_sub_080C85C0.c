// sub_080C85C0 at 0x080C85C0 (thumb)

undefined4 sub_080C85C0(int param_1)

{
  undefined4 in_lr;
  
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_08012580(param_1);
  *(int *)(param_1 + 0x40) = param_1 + 100;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -0x800;
  if (*(char *)(param_1 + 0x11) != '\0') {
    *(undefined *)(param_1 + 0x22) = 1;
  }
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0834863c + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_080C22E8(param_1);
  return in_lr;
}

