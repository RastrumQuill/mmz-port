// sub_080782B8 at 0x080782B8 (thumb)

undefined4 sub_080782B8(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08017700(param_1,*(byte *)(param_1 + 0x10) | 0x2f00);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  sub_080177F4(param_1);
  sub_08007390(param_1 + 0x74,
               &DAT_08363c28 + (uint)(byte)(&DAT_08363d12)[*(char *)(param_1 + 0x71)] * 0x18);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

