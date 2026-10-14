// sub_080D89D8 at 0x080D89D8 (thumb)

undefined4 sub_080D89D8(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\x01') {
    uVar1 = sub_0800A104(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar1;
  }
  if (*(char *)(param_1 + 0x10) != '\0') {
    sub_0800BF6C(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + -0x800);
  }
  sub_080C9918(param_1);
  return in_lr;
}

