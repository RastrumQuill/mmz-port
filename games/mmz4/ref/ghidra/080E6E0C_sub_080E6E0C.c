// sub_080E6E0C at 0x080E6E0C (thumb)

undefined4 sub_080E6E0C(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0x12) = 0x14;
  if (*(char *)(param_1 + 0x11) == '\0') {
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(undefined4 *)(param_1 + 100) = 0;
    sub_080E6B38(param_1 + 0x54,0x101,*(byte *)(param_1 + 10) >> 4 & 1);
    *(undefined *)(param_1 + 0x25) = 0x18;
  }
  else {
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(undefined4 *)(param_1 + 100) = 0xf;
  }
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    iVar1 = *(int *)(param_1 + 0x5c) * -0x100;
    if (iVar1 < 0) {
      iVar1 = iVar1 + 0xff;
    }
    *(int *)(param_1 + 0x5c) = iVar1 >> 8;
    iVar1 = *(int *)(param_1 + 100) * -0x100;
    if (iVar1 < 0) {
      iVar1 = iVar1 + 0xff;
    }
    *(int *)(param_1 + 100) = iVar1 >> 8;
  }
  sub_0801CF00(param_1,*(undefined2 *)(&DAT_08865b40 + (uint)*(byte *)(param_1 + 0x11) * 2));
  *(undefined *)(param_1 + 0xd) = 0;
  return in_lr;
}

