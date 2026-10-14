// sub_0800A314 at 0x0800A314 (thumb)

undefined4 sub_0800A314(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 == 1) {
LAB_0800a34e:
    if (DAT_0202dad6 == '\x01') {
      return in_lr;
    }
    sub_080074C0(0x10,1,0x35);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        return in_lr;
      }
      if (DAT_0202dad6 == '\0') {
        return in_lr;
      }
      sub_080074C0(0x10,1,0x34);
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      goto LAB_0800a34e;
    }
    if (bVar1 != 2) {
      if (bVar1 != 3) {
        return in_lr;
      }
      goto LAB_0800a386;
    }
  }
  if (DAT_0202dad6 == '\x02') {
    return in_lr;
  }
  sub_080074C0(0x10,1,0x36);
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
LAB_0800a386:
  if (DAT_0202dad6 != '\x03') {
    sub_080074C0(0x10,1,0x30);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}

