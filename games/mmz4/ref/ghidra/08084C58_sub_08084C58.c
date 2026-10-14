// sub_08084C58 at 0x08084C58 (thumb)

undefined4 sub_08084C58(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08002B10(0x2c);
    if (*(char *)(param_1 + 0x10) == '\0') {
      sub_08084824(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    }
    else {
      sub_080848AC(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    }
    *(undefined *)(param_1 + 0xb8) = 0;
    sub_0801CF00(param_1,*(undefined2 *)(&DAT_0885b670 + (uint)*(byte *)(param_1 + 0x10) * 2));
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  sub_0801CFF0(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 4;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

