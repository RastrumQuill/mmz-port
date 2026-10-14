// sub_080CAA7C at 0x080CAA7C (thumb)

undefined4 sub_080CAA7C(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  if ((*(char *)(*(int *)(*(int *)(param_1 + 0xc) + 0x2c) + 8) == '\x01') &&
     ((*(uint *)(iVar1 + 0x8c) & 0x100) != 0)) {
    *(undefined4 *)(iVar1 + 0xc) = 2;
    *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(iVar1 + 9)] + 8);
    *(uint *)(iVar1 + 0x8c) = 0;
    *(undefined4 *)(iVar1 + 0x90) = 0;
    *(undefined *)(iVar1 + 0x94) = 0;
    *(byte *)(iVar1 + 10) = *(byte *)(iVar1 + 10) & 0xfb;
  }
  return in_lr;
}

