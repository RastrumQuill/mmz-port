// sub_080CADAC at 0x080CADAC (thumb)

undefined4 sub_080CADAC(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return in_lr;
      }
      sub_080177F4(param_1);
      if ((*(byte *)(param_1 + 0x10) & 2) == 0) {
        return in_lr;
      }
      bVar1 = DAT_02030104 & 4;
      if ((DAT_02030104 & 4) != 0) {
        return in_lr;
      }
      *(byte *)(param_1 + 0xd) = bVar1;
      goto LAB_080cae0a;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    *(undefined *)(param_1 + 0xe) = 1;
  }
  sub_080177F4(param_1);
  if (*(char *)(param_1 + 0x73) != '\x03') {
    return in_lr;
  }
  sub_08017700(param_1,0x1200);
  bVar1 = *(char *)(param_1 + 0xe) + 1;
LAB_080cae0a:
  *(byte *)(param_1 + 0xe) = bVar1;
  return in_lr;
}

