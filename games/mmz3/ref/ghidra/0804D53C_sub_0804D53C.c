// sub_0804D53C at 0x0804D53C (thumb)

undefined4 sub_0804D53C(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0800471C(0x10f);
    sub_080A29B4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    sub_08017700(param_1,0x4603);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  sub_08007390(param_1 + 0x74,
               &DAT_0835fa20 + (uint)(byte)(&DAT_0835faf6)[*(char *)(param_1 + 0x71)] * 0x18);
  sub_080177F4(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

