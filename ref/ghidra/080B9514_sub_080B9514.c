// sub_080B9514 at 0x080B9514 (thumb)

undefined4 sub_080B9514(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if ((*(char *)(iVar1 + 1) == '\x01') &&
     (*(byte *)(iVar1 + 2) < (byte)(&DAT_082b8704)[*(byte *)(param_1 + 0x11)])) {
    *(uint *)(param_1 + 0x4c) =
         *(int *)(&DAT_082b86dc + (uint)*(byte *)(param_1 + 0x11) * 8) +
         (uint)*(byte *)(iVar1 + 5) * 0x1000;
  }
  else {
    *(undefined *)(param_1 + 0xd) = 3;
    sub_080B955C(param_1);
  }
  return in_lr;
}

