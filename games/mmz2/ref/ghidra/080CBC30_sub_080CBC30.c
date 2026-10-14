// sub_080CBC30 at 0x080CBC30 (thumb)

undefined4 sub_080CBC30(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return in_lr;
      }
      sub_080128D4(param_1);
      if ((*(byte *)(param_1 + 0x10) & 2) == 0) {
        return in_lr;
      }
      bVar1 = DAT_0202ebb4 & 4;
      if ((DAT_0202ebb4 & 4) != 0) {
        return in_lr;
      }
      *(byte *)(param_1 + 0xd) = bVar1;
      goto LAB_080cbca4;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
    *(undefined **)(param_1 + 0x30) = &DAT_083491ac;
    *(undefined2 *)(param_1 + 0x26) = 1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  if (*(char *)(param_1 + 0x73) != '\x03') {
    return in_lr;
  }
  sub_080127E4(param_1,0x6700);
  bVar1 = *(char *)(param_1 + 0xe) + 1;
LAB_080cbca4:
  *(byte *)(param_1 + 0xe) = bVar1;
  return in_lr;
}

