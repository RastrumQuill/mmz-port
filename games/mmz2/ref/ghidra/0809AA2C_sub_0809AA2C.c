// sub_0809AA2C at 0x0809AA2C (thumb)

undefined4 sub_0809AA2C(int param_1)

{
  undefined4 in_lr;
  int local_14;
  int local_10;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  switch(*(undefined *)(param_1 + 0x12)) {
  case 0:
  case 10:
  case 0x14:
    sub_080127E4(param_1,0xd07);
    local_14 = *(int *)(param_1 + 0x54) +
               (short)(&DAT_080ef450)
                      [(byte)(&DAT_083436a4)[*(byte *)(param_1 + 0xb8)] + 0x40 & 0xff] * 0xc;
    local_10 = *(int *)(param_1 + 0x58) +
               (short)(&DAT_080ef450)[(byte)(&DAT_083436a4)[*(byte *)(param_1 + 0xb8)]] * 0xc;
    sub_08098414(&local_14,0x200,(&DAT_083436ad)[*(byte *)(param_1 + 0xb8)] + -0x80);
    sub_080032EC(0x2c);
    break;
  case 4:
  case 0xe:
  case 0x18:
    sub_080127E4(param_1,0xd06);
    break;
  case 0x1e:
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 0;
    return in_lr;
  }
  sub_080128D4(param_1);
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
  return in_lr;
}

