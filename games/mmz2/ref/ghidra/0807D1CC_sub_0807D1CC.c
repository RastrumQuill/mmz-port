// sub_0807D1CC at 0x0807D1CC (thumb)

undefined4 sub_0807D1CC(int param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 in_lr;
  int local_14;
  int local_10;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080032EC(0xd1);
    sub_080127E4(param_1,0x5800);
    sub_08006E08(param_1 + 0x74,&DAT_08340670);
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  bVar1 = *(byte *)(param_1 + 0x12);
  if (bVar1 == 9) {
LAB_0807d27c:
    sub_080127E4(param_1,0x5800);
  }
  else {
    if (bVar1 < 10) {
      if (bVar1 == 4) goto LAB_0807d27c;
      if (bVar1 < 5) {
        if (bVar1 != 0) goto LAB_0807d290;
      }
      else if (bVar1 != 5) goto LAB_0807d290;
    }
    else {
      if (bVar1 == 0xe) goto LAB_0807d27c;
      if (0xe < bVar1) {
        if (bVar1 == 0x80) {
          sub_0807D7E0(param_1);
          return in_lr;
        }
        goto LAB_0807d290;
      }
      if (bVar1 != 10) goto LAB_0807d290;
    }
    uVar2 = *(byte *)(param_1 + 10) >> 4 & 1;
    sub_080127E4(param_1,0x5801);
    local_14 = *(int *)(param_1 + 0x54) + (uVar2 * 2 + -1) * -0x1600;
    local_10 = *(int *)(param_1 + 0x58) + -0x1200;
    sub_08098414(&local_14,0x240,(uVar2 ^ 1) * 0x80);
  }
LAB_0807d290:
  sub_080128D4(param_1);
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
  return in_lr;
}

