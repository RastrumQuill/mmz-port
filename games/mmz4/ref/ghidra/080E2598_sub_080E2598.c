// sub_080E2598 at 0x080E2598 (thumb)

undefined4 sub_080E2598(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x11) == '\0') {
    *(undefined4 *)(param_1 + 0x5c) = 0x100;
    *(undefined4 *)(param_1 + 100) = 0xfffffff0;
    sub_0801CF00(param_1,0x9409);
    *(undefined *)(param_1 + 0x25) = 0x18;
  }
  else {
    *(undefined4 *)(param_1 + 0x5c) = 0xffffff00;
    *(undefined4 *)(param_1 + 100) = 0x10;
    sub_0801CF00(param_1,0x9408);
  }
  if (*(char *)(param_1 + 0x75) == '\x01') {
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
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    *(undefined *)(param_1 + 0x4c) = 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
  }
  *(undefined4 *)(param_1 + 0x78) = 0x100;
  *(undefined *)(param_1 + 0xd) = 0;
  return in_lr;
}

