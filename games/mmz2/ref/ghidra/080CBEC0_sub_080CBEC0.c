// sub_080CBEC0 at 0x080CBEC0 (thumb)

undefined4 sub_080CBEC0(int param_1)

{
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 0x10) == '\0') && (1 < *(byte *)(*(int *)(param_1 + 0x28) + 0xc))) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0834863c + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    *(undefined *)(param_1 + 0xd) = 0;
  }
  else {
    if ((*(char *)(param_1 + 0x10) != '\x02') || (*(byte *)(*(int *)(param_1 + 0x28) + 0xc) < 2)) {
      sub_080EF118(param_1,*(undefined4 *)(&DAT_083491c8 + (uint)*(byte *)(param_1 + 0xd) * 4));
      return in_lr;
    }
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0834863c + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    *(undefined *)(param_1 + 0xd) = 1;
  }
  sub_080CBF34(param_1);
  return in_lr;
}

