// sub_08105080 at 0x08105080 (thumb)

undefined4 sub_08105080(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  if ((*(uint *)(param_1 + 0x14) & 1) != 0) {
    if (*(char *)(iVar1 + 0xb4) == '\0') {
      *(char *)(iVar1 + 0xb4) = '\x01';
      *(undefined4 *)(iVar1 + 0x8c) = 0;
      *(undefined4 *)(iVar1 + 0x90) = 0;
      *(undefined *)(iVar1 + 0x94) = 0;
      *(byte *)(iVar1 + 10) = *(byte *)(iVar1 + 10) & 0xfb;
      sub_0801CF00(iVar1,0xa901);
      iVar1 = *(int *)(iVar1 + 0x28);
      *(undefined4 *)(iVar1 + 0xdf0) = 0;
      *(undefined4 *)(iVar1 + 0xdf4) = 0;
      sub_08002B10(0x15c);
    }
  }
  return in_lr;
}

