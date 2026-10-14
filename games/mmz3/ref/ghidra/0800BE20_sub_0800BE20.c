// sub_0800BE20 at 0x0800BE20 (thumb)

undefined4 sub_0800BE20(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 == 1) {
LAB_0800be5a:
    if (DAT_0202f4a6 == '\x01') {
      return in_lr;
    }
    sub_080093E8(0x10,1,0x35);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        return in_lr;
      }
      if (DAT_0202f4a6 == '\0') {
        return in_lr;
      }
      sub_080093E8(0x10,1,0x34);
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      goto LAB_0800be5a;
    }
    if (bVar1 != 2) {
      if (bVar1 != 3) {
        return in_lr;
      }
      goto LAB_0800be92;
    }
  }
  if (DAT_0202f4a6 == '\x02') {
    return in_lr;
  }
  sub_080093E8(0x10,1,0x36);
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
LAB_0800be92:
  if (DAT_0202f4a6 != '\x03') {
    sub_080093E8(0x10,1,0x30);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}

