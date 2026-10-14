// sub_080E143C at 0x080E143C (thumb)

undefined4 sub_080E143C(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    sub_0801CF00(param_1,*(ushort *)(param_1 + 0x76) | 9);
    iVar1 = sub_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    if (iVar1 == *(int *)(param_1 + 0x58)) {
      *(undefined *)(param_1 + 0x12) = 0x14;
    }
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  sub_080E1580(param_1);
  if (*(char *)(param_1 + 0x12) != '\0') {
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + -0x40;
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  }
  return in_lr;
}

