// sub_0807523C at 0x0807523C (thumb)

undefined4 sub_0807523C(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x11) == '\x01') {
    if (*(char *)(*(int *)(param_1 + 0x28) + 0xc) == '\x04') {
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
      return in_lr;
    }
    if ((*(uint *)(param_1 + 0x8c) & 0x200) != 0) {
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
      sub_080752CC(param_1);
      return in_lr;
    }
    sub_080757C0(param_1);
  }
  sub_080FE2C0(param_1,*(undefined4 *)(&DAT_083637ec + (uint)*(byte *)(param_1 + 0xd) * 4));
  sub_080FE2C0(param_1,*(undefined4 *)(&DAT_083637fc + (uint)*(byte *)(param_1 + 0xd) * 4));
  return in_lr;
}

