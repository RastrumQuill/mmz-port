// sub_080C8FB0 at 0x080C8FB0 (thumb)

undefined4 sub_080C8FB0(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3;
    *(undefined *)(param_1 + 0x25) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x58);
    *(undefined4 *)(param_1 + 0x60) = 0xfffffd00;
    sub_08017700(param_1,*(byte *)(param_1 + 0x12) | 0xd100);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  iVar1 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar1;
  iVar1 = *(int *)(param_1 + 0x58) + iVar1;
  *(int *)(param_1 + 0x58) = iVar1;
  if (*(int *)(param_1 + 0x68) < iVar1) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x68);
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_080177F4(param_1);
  return in_lr;
}

