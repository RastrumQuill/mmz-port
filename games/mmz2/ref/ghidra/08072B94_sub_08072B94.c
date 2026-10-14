// sub_08072B94 at 0x08072B94 (thumb)

undefined4 sub_08072B94(int param_1)

{
  undefined4 in_lr;
  int local_14;
  int local_10;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_080127E4(param_1,0x1b00);
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  switch(*(undefined *)(param_1 + 0x12)) {
  case 4:
  case 10:
  case 0x10:
    if (*(char *)(param_1 + 0xb7) == '\0') {
      sub_080127E4(param_1,0x1b01);
      local_14 = *(int *)(param_1 + 0x54) + 0x400;
      if ((*(byte *)(param_1 + 10) & 0x20) == 0) {
        local_10 = -0x2000;
      }
      else {
        local_10 = 0x2000;
      }
      local_10 = *(int *)(param_1 + 0x58) + local_10;
      sub_080B3FB4(&local_14,0,1,*(byte *)(param_1 + 10) >> 5 & 1);
    }
    else {
      sub_080127E4(param_1,0x1b02);
      local_14 = *(int *)(param_1 + 0x54) + -0x400;
      if ((*(byte *)(param_1 + 10) & 0x20) == 0) {
        local_10 = -0x2000;
      }
      else {
        local_10 = 0x2000;
      }
      local_10 = *(int *)(param_1 + 0x58) + local_10;
      sub_080B3FB4(&local_14,0,0,*(byte *)(param_1 + 10) >> 5 & 1);
    }
    break;
  case 8:
  case 0xe:
  case 0x14:
    if (*(char *)(param_1 + 0xb7) == '\0') {
      local_14 = *(int *)(param_1 + 0x54) + -0x1000;
      if ((*(byte *)(param_1 + 10) & 0x20) == 0) {
        local_10 = -0x2000;
      }
      else {
        local_10 = 0x2000;
      }
      local_10 = *(int *)(param_1 + 0x58) + local_10;
      sub_08098414(&local_14,0x280,0);
    }
    else {
      local_14 = *(int *)(param_1 + 0x54) + 0x1000;
      if ((*(byte *)(param_1 + 10) & 0x20) == 0) {
        local_10 = -0x2000;
      }
      else {
        local_10 = 0x2000;
      }
      local_10 = *(int *)(param_1 + 0x58) + local_10;
      sub_08098414(&local_14,0x280,0x80);
    }
    sub_080032EC(0x2c);
    break;
  case 0x26:
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    return in_lr;
  }
  sub_080128D4(param_1);
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
  return in_lr;
}

