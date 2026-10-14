// sub_08089494 at 0x08089494 (thumb)

undefined4 sub_08089494(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,*(byte *)(param_1 + 0xc0) | 0x1f00);
    sub_08005784(param_1 + 0x74,
                 &DAT_0885bc08 + (uint)(byte)(&DAT_0885bd70)[*(byte *)(param_1 + 0xc0)] * 0x18);
    *(undefined *)(param_1 + 0x12) = 0;
    sub_08002B10(0x13c);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  sub_0801CFF0(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

