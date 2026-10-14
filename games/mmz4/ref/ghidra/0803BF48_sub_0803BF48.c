// sub_0803BF48 at 0x0803BF48 (thumb)

undefined4 sub_0803BF48(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 == 1) {
    bVar1 = *(char *)(param_1 + 0x12) + 1;
    *(byte *)(param_1 + 0x12) = bVar1;
    if (bVar1 < 0x21) {
      return in_lr;
    }
  }
  else if (bVar1 < 2) {
    if (bVar1 != 0) {
      return in_lr;
    }
    if (*(char *)(param_1 + 0x71) < '\x02') {
      return in_lr;
    }
    sub_0804C664(*(undefined4 *)(param_1 + 0xb4),param_1,0,0);
    *(undefined *)(param_1 + 0x12) = 0;
  }
  else {
    if (bVar1 != 2) {
      if (bVar1 != 3) {
        return in_lr;
      }
      if (*(char *)(param_1 + 0x73) != '\x03') {
        return in_lr;
      }
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 8)
      ;
      return in_lr;
    }
    sub_0801CF00(param_1,0x5c01);
    *(undefined *)(param_1 + 0x12) = 0;
  }
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  return in_lr;
}

