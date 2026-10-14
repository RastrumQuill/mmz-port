// sub_0802FE00 at 0x0802FE00 (thumb)

undefined4 sub_0802FE00(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = sub_08034598(param_1,*(char *)(param_1 + 0xc0) != '\x02');
  *(undefined *)(param_1 + 0x133) = 0;
  if (*(char *)(param_1 + 0x225) == '\x03') {
    *(undefined *)(param_1 + 0xed) = 7;
    *(undefined *)(param_1 + 0xee) = 0;
LAB_0802fed2:
    sub_0802FFB0(param_1);
    return in_lr;
  }
  if (*(char *)(param_1 + 0x22b) == '\x03') {
    *(undefined *)(param_1 + 0xed) = 8;
    *(undefined *)(param_1 + 0xee) = 0;
LAB_0802feaa:
    sub_0802FFC8(param_1);
  }
  else {
    if (*(char *)(param_1 + 0x22d) == '\x03') {
      *(undefined *)(param_1 + 0xed) = 9;
      *(undefined *)(param_1 + 0xee) = 0;
    }
    else {
      if (cVar1 != '\x02') {
        *(undefined *)(param_1 + 0xee) = 0;
        if ((*(uint *)(param_1 + 0x218) & 0x40) != 0) {
          *(undefined *)(param_1 + 0xed) = 3;
          sub_0802FF44(param_1);
          return in_lr;
        }
        if ((*(uint *)(param_1 + 0x218) & 0x80) != 0) {
          *(undefined *)(param_1 + 0xed) = 5;
          sub_0802FF5C(param_1);
          return in_lr;
        }
        *(undefined *)(param_1 + 0xed) = 1;
        sub_0802FF2C(param_1);
        return in_lr;
      }
      *(undefined *)(param_1 + 0xee) = 0;
      if ((*(uint *)(param_1 + 0x218) & 0x40) != 0) {
        *(undefined *)(param_1 + 0xed) = 8;
        goto LAB_0802feaa;
      }
      if ((*(uint *)(param_1 + 0x218) & 0x80) == 0) {
        *(undefined *)(param_1 + 0xed) = 7;
        goto LAB_0802fed2;
      }
      *(undefined *)(param_1 + 0xed) = 9;
    }
    sub_0802FFE0(param_1);
  }
  return in_lr;
}

