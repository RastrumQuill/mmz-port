// sub_08074D5C at 0x08074D5C (thumb)

undefined4 sub_08074D5C(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0x12) = 0;
    sub_08017700(param_1,0x280c);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  iVar1 = sub_08009B28(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  if (iVar1 < 0) {
    if (iVar1 < -0x400) {
      iVar1 = (uint)*(byte *)(param_1 + 0x12) * -0x400;
      if (iVar1 < 0) {
        iVar1 = iVar1 + 0xff;
      }
      iVar1 = iVar1 >> 8;
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar1;
    *(byte *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + 4U & 0x3f;
  }
  else {
    *(undefined *)(param_1 + 0xd) = 4;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_080177F4(param_1);
  sub_08007390(param_1 + 0x74,
               &DAT_08363664 + (uint)(byte)(&DAT_083637b4)[*(char *)(param_1 + 0x71)] * 0x18);
  return in_lr;
}

