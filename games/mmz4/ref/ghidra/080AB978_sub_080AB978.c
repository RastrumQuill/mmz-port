// sub_080AB978 at 0x080AB978 (thumb)

undefined4 sub_080AB978(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(undefined *)(param_1 + 0x12) = 0x10;
    *(undefined *)(param_1 + 0xf) = 1;
  }
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  DAT_02000a44 = *(short *)((int)&DAT_08128c10 + (((uint)*(byte *)(param_1 + 0x12) << 0x1a) >> 0x17)
                           ) >> 4;
  sub_080ABF44(param_1);
  if (*(char *)(param_1 + 0x12) == '\0') {
    DAT_02000a40 = 0;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

