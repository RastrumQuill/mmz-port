// sub_0805902C at 0x0805902C (thumb)

undefined4 sub_0805902C(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (0x7800 < (*(int *)(param_1 + 0x54) - *(int *)(param_1 + 0xbc)) + 0x3c00U) {
      sub_080177F4(param_1);
      *(undefined *)(param_1 + 0xd) = 0;
      *(undefined *)(param_1 + 0xe) = 0;
      *(undefined *)(param_1 + 0xc1) = 10;
      return in_lr;
    }
    sub_0800471C(0x95);
    sub_08017700(param_1,0xb216);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  sub_080177F4(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 0x10;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_08007390(param_1 + 0x74,
               &DAT_08360594 + (uint)(byte)(&DAT_083612ea)[*(char *)(param_1 + 0x71)] * 0x18);
  return in_lr;
}

