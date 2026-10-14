// sub_08095B74 at 0x08095B74 (thumb)

undefined4 sub_08095B74(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  int local_14;
  int local_10;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0x902);
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  bVar1 = *(byte *)(param_1 + 0x12);
  if (bVar1 != 5) {
    if (bVar1 < 6) {
      if (bVar1 != 0) goto LAB_08095c08;
    }
    else if (bVar1 != 10) {
      if (bVar1 == 0x30) {
        *(undefined *)(param_1 + 0xd) = 5;
        *(undefined *)(param_1 + 0xe) = 0;
      }
      goto LAB_08095c08;
    }
  }
  local_10 = *(int *)(param_1 + 0x58) + -0x1200;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    local_14 = *(int *)(param_1 + 0x54) + -0x1b00;
    sub_08098414(&local_14,0x240,0);
  }
  else {
    local_14 = *(int *)(param_1 + 0x54) + 0x1b00;
    sub_08098414(&local_14,0x240,0x80);
  }
  sub_080032EC(0x2c);
LAB_08095c08:
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
  return in_lr;
}

