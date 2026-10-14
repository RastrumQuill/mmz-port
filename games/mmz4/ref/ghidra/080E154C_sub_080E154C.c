// sub_080E154C at 0x080E154C (thumb)

undefined4 sub_080E154C(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    sub_0801CF00(param_1,*(ushort *)(param_1 + 0x76) | 0xd);
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  sub_080E1580(param_1);
  sub_080E15C8(param_1);
  return in_lr;
}

