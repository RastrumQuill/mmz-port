// sub_080581A4 at 0x080581A4 (thumb)

undefined4 sub_080581A4(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0800471C(0x90);
    sub_08017700(param_1,0xb206);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  sub_080177F4(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 5;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_08007390(param_1 + 0x74,
               &DAT_08360594 + (uint)(byte)(&DAT_08361281)[*(char *)(param_1 + 0x71)] * 0x18);
  return in_lr;
}

