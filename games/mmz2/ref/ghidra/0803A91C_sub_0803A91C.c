// sub_0803A91C at 0x0803A91C (thumb)

undefined4 sub_0803A91C(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x14) & 4) != 0) {
    iVar1 = *(int *)(param_1 + 0x2c);
    if ((*(uint *)(iVar1 + 0x8c) & 4) != 0) {
      sub_08035674(iVar1,*(undefined4 *)(iVar1 + 0x28),*(undefined *)(iVar1 + 0x66));
    }
    if ((*(uint *)(*(int *)(param_1 + 0xc) + 0x18) & 0x200) != 0) {
      if (((byte)(*(char *)(iVar1 + 0x13) - 9U) < 2) && (DAT_0202ec18 != -1)) {
        DAT_0202ec18 = DAT_0202ec18 + '\x01';
      }
      if (((*(char *)(iVar1 + 0x13) == '\f') || (*(char *)(iVar1 + 0x13) == '\x0e')) &&
         (DAT_0202ec1a != -1)) {
        DAT_0202ec1a = DAT_0202ec1a + '\x01';
      }
    }
  }
  return in_lr;
}

