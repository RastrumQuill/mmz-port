// sub_080EA274 at 0x080EA274 (thumb)

undefined4 sub_080EA274(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return in_lr;
      }
      sub_0801CFF0(param_1);
      if ((*(byte *)(param_1 + 0x10) & 2) == 0) {
        return in_lr;
      }
      bVar1 = DAT_0202e8b4 & 8;
      if ((DAT_0202e8b4 & 8) != 0) {
        return in_lr;
      }
      *(byte *)(param_1 + 0xd) = bVar1;
      goto LAB_080ea34c;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    *(undefined *)(param_1 + 0xe) = 1;
  }
  sub_0801CFF0(param_1);
  if (*(char *)(param_1 + 0x73) != '\x03') {
    return in_lr;
  }
  DAT_0202e8c4 = DAT_0202e8c4 | 0x40;
  *(byte *)(param_1 + 0xb8) = 0xcb;
  sub_08001EA4(&DAT_08c44fdc,(DAT_0202e1d6 - 0x1e0) * 0x20 + 0x10000);
  sub_08002208(&DAT_08c44fe8,(DAT_0202dfd6 - 10) * 0x20 + 0x200);
  sub_0801CF00(param_1,(uint)*(byte *)(param_1 + 0xb8) << 8);
  sub_0801CFF0(param_1);
  sub_080E8FA4(0x80ea38d);
  bVar1 = *(char *)(param_1 + 0xe) + 1;
LAB_080ea34c:
  *(byte *)(param_1 + 0xe) = bVar1;
  return in_lr;
}

