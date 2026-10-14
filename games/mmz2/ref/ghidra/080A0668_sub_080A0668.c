// sub_080A0668 at 0x080A0668 (thumb)

undefined4 sub_080A0668(int param_1)

{
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x8c) & 1) != 0) {
    *(undefined2 *)(param_1 + 0xa4) = 0x14;
  }
  if ((*(char *)(param_1 + 0xb4) == '\0') && (1 < *(byte *)(*(int *)(param_1 + 0x28) + 0xc))) {
    *(char *)(param_1 + 0xb4) = '\x01';
    *(uint *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  }
  sub_080EF118(param_1,*(undefined4 *)(&DAT_08344384 + (uint)*(byte *)(param_1 + 0xd) * 4));
  sub_080EF118(param_1,*(undefined4 *)(&DAT_083443a0 + (uint)*(byte *)(param_1 + 0xd) * 4));
  return in_lr;
}

