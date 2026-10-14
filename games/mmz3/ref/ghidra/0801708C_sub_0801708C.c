// sub_0801708C at 0x0801708C (thumb)

undefined4 sub_0801708C(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  sub_080070C0();
  iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 4);
  *(int *)(param_1 + 0xc) = iVar1;
  if (iVar1 != param_1 + 0x14) {
    do {
      if ((*(ushort *)(iVar1 + 10) & 0x1004) == 0x1004) {
        if ((((*(uint *)(iVar1 + 0x8c) & 1) != 0) || ((*(uint *)(iVar1 + 0x90) & 1) != 0)) ||
           ((*(byte *)(iVar1 + 0x94) & 2) != 0)) {
          *(uint *)(&DAT_0202f5e0 + (uint)(*(byte *)(iVar1 + 0x1d) >> 5) * 4) =
               *(uint *)(&DAT_0202f5e0 + (uint)(*(byte *)(iVar1 + 0x1d) >> 5) * 4) |
               1 << (*(byte *)(iVar1 + 0x1d) & 0x1f);
        }
        if (((DAT_0202f5c4 == '\0') && ((*(uint *)(iVar1 + 0x8c) & 1) != 0)) &&
           (*(char *)(*(int *)(iVar1 + 0x74) + 1) != '\0')) {
          DAT_0202f5b0 = 1;
        }
      }
      iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 4);
      *(int *)(param_1 + 0xc) = iVar1;
    } while (iVar1 != param_1 + 0x14);
  }
  return in_lr;
}

