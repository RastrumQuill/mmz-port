// sub_080BE440 at 0x080BE440 (thumb)

undefined4 sub_080BE440(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        if (bVar1 != 3) {
          return in_lr;
        }
        sub_080177F4(param_1);
        if (*(char *)(param_1 + 0x73) != '\x03') {
          return in_lr;
        }
        *(undefined4 *)(param_1 + 0xc) = 2;
        *(undefined4 *)(param_1 + 0x14) =
             *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 8);
        return in_lr;
      }
      sub_08017700(param_1,0x3d01);
      sub_0800471C(0x62);
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
      goto LAB_080be4b6;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    sub_08017700(param_1,0x3d00);
    *(undefined *)(param_1 + 0x12) = 0x14;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080177F4(param_1);
  bVar1 = *(byte *)(param_1 + 0x12);
  *(byte *)(param_1 + 0x12) = bVar1 - 1;
  if ((bVar1 & 2) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xfe;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 1;
  }
  *(byte *)(param_1 + 10) = bVar1;
  if (*(char *)(param_1 + 0x12) != '\0') {
    return in_lr;
  }
LAB_080be4b6:
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  return in_lr;
}

