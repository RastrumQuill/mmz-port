// sub_080120DC at 0x080120DC (thumb)

undefined4 sub_080120DC(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  sub_08006B38();
  iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 4);
  *(int *)(param_1 + 0xc) = iVar1;
  if (iVar1 != param_1 + 0x14) {
    do {
      if ((*(ushort *)(iVar1 + 10) & 0x1004) == 0x1004) {
        if ((((*(uint *)(iVar1 + 0x8c) & 1) != 0) || ((*(uint *)(iVar1 + 0x90) & 1) != 0)) ||
           ((*(byte *)(iVar1 + 0x94) & 2) != 0)) {
          *(uint *)(&DAT_0202e160 + (uint)(*(byte *)(iVar1 + 0x1d) >> 5) * 4) =
               *(uint *)(&DAT_0202e160 + (uint)(*(byte *)(iVar1 + 0x1d) >> 5) * 4) |
               1 << (*(byte *)(iVar1 + 0x1d) & 0x1f);
        }
        if (((DAT_0202e134 == '\0') && ((*(uint *)(iVar1 + 0x8c) & 1) != 0)) &&
           (*(char *)(*(int *)(iVar1 + 0x74) + 1) != '\0')) {
          DAT_0202e120 = 1;
        }
      }
      iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 4);
      *(int *)(param_1 + 0xc) = iVar1;
    } while (iVar1 != param_1 + 0x14);
  }
  return in_lr;
}

