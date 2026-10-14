// sub_081043EC at 0x081043EC (thumb)

undefined4 sub_081043EC(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if ((((*(uint *)(param_1 + 0x14) & 1) != 0) &&
      (iVar1 = *(int *)(param_1 + 0x2c), *(char *)(iVar1 + 0x12) == '\0')) &&
     (*(char *)(iVar1 + 0xb5) == '\x01')) {
    *(undefined *)(DAT_0202dbf0 + 0x166) = 0x30;
    *(undefined *)(iVar1 + 0x12) = 0x3c;
    *(undefined *)(iVar1 + 0xb6) = 1;
  }
  return in_lr;
}

