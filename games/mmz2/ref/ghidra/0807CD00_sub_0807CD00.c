// sub_0807CD00 at 0x0807CD00 (thumb)

undefined4 sub_0807CD00(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  int local_10;
  undefined4 local_c;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0x5407);
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      local_10 = -0x1600;
    }
    else {
      local_10 = 0x1600;
    }
    local_10 = *(int *)(param_1 + 0x54) + local_10;
    local_c = *(undefined4 *)(param_1 + 0x58);
    sub_080A4B98(&local_10,0,*(byte *)(param_1 + 10) >> 4 & 1);
    sub_080032EC(0x2d);
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  bVar1 = *(char *)(param_1 + 0x12) + 1;
  *(byte *)(param_1 + 0x12) = bVar1;
  if (0x1f < bVar1) {
    *(undefined *)(param_1 + 0xd) = 9;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

