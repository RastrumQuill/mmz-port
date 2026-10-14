// sub_080E78F8 at 0x080E78F8 (thumb)

undefined4 sub_080E78F8(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  sub_0801CF00(param_1,*(byte *)(param_1 + 0x11) + 0xe901);
  *(undefined4 *)(param_1 + 0x5c) = 0xba;
  *(undefined4 *)(param_1 + 0x60) = 0x5f4;
  *(undefined4 *)(param_1 + 0x60) = 0xfffffa0c;
  if (*(char *)(param_1 + 0x11) == '\0') {
    *(undefined4 *)(param_1 + 0x5c) = 0xffffff46;
  }
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    iVar1 = *(int *)(param_1 + 0x5c) * -0x100;
    if (iVar1 < 0) {
      iVar1 = iVar1 + 0xff;
    }
    *(int *)(param_1 + 0x5c) = iVar1 >> 8;
  }
  *(undefined *)(param_1 + 0xd) = 0;
  return in_lr;
}

