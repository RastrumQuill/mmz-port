// sub_080BB818 at 0x080BB818 (thumb)

undefined4 sub_080BB818(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  undefined4 local_14;
  int local_10;
  
  sub_0801749C();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(undefined *)(param_1 + 0x25) = 0x18;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined *)(param_1 + 0x74) = 0;
  if (*(byte *)(param_1 + 0x11) < 7) {
    local_14 = *(undefined4 *)(param_1 + 0x54);
    local_10 = *(int *)(param_1 + 0x58) + -0x800;
    sub_080BB7C0(&local_14,param_1,*(byte *)(param_1 + 0x11) + 1);
  }
  *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_1 + 0x54);
  iVar1 = sub_0800A2CC(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x800);
  *(int *)(param_1 + 0x80) = iVar1;
  *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x58) - iVar1;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 4);
  *(undefined *)(param_1 + 0xd) = 1;
  *(undefined *)(param_1 + 0xe) = 0;
  *(undefined *)(param_1 + 0xf) = 0;
  sub_080BB8B4(param_1);
  return in_lr;
}

