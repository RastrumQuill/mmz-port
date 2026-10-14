// sub_080AB8BC at 0x080AB8BC (thumb)

undefined4 sub_080AB8BC(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    DAT_02000a40 = 0x3fbf;
    *(char *)(param_1 + 0xbc) = *(char *)(param_1 + 0xbc) + '\x01';
    *(undefined *)(param_1 + 0x12) = 0x10;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  uVar1 = *(byte *)(param_1 + 0x12) - 1;
  *(char *)(param_1 + 0x12) = (char)uVar1;
  DAT_02000a44 = *(short *)((int)&DAT_08128c10 + ((0x10 - uVar1) * 0x4000000 >> 0x17)) >> 4;
  if ((uVar1 & 0xff) == 0) {
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

