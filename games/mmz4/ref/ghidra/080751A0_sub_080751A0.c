// sub_080751A0 at 0x080751A0 (thumb)

undefined4 sub_080751A0(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,0xaf19);
    if (DAT_0202e910 == 3) {
      sub_08002B10(0xd4);
    }
    else {
      sub_08002B10(0xd5);
    }
    *(undefined *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_0801CFF0(param_1);
  bVar1 = *(byte *)(param_1 + 0xf);
  if (bVar1 == 1) {
    bVar1 = *(byte *)(param_1 + 0x12);
    *(byte *)(param_1 + 0x12) = bVar1 + 1;
    if (bVar1 < 0x21) {
      return in_lr;
    }
    sub_0801CF00(param_1,0xaf01);
    sub_0801CFF0(param_1);
  }
  else if (bVar1 < 2) {
    if (bVar1 != 0) {
      return in_lr;
    }
    if ((*(char *)(param_1 + 0x71) == '\0') && (*(char *)(param_1 + 0x72) < '\x02')) {
      sub_0801FE64(1,param_1 + 0x54);
      sub_08002B10(0xde);
    }
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    *(undefined *)(param_1 + 0x12) = 0;
  }
  else {
    if (bVar1 != 2) {
      return in_lr;
    }
    bVar1 = DAT_0202e922 & 1;
    if ((DAT_0202e922 & 1) != 0) {
      return in_lr;
    }
    *(undefined *)(param_1 + 0xd) = 2;
    *(byte *)(param_1 + 0xe) = bVar1;
  }
  *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  return in_lr;
}

