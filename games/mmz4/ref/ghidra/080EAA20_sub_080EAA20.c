// sub_080EAA20 at 0x080EAA20 (thumb)

undefined4 sub_080EAA20(int param_1)

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
      if ((*(char *)(param_1 + 0x10) == '\x02') && (*(char *)(DAT_0202dbf0 + 0x1b9) != '\0')) {
        if ((*(int *)(param_1 + 0x54) + 0x600 < *(int *)(DAT_0202dbf0 + 0x54)) &&
           (*(int *)(DAT_0202dbf0 + 0x54) < *(int *)(param_1 + 0x54) + 0x3a00)) {
          return in_lr;
        }
      }
      if ((*(byte *)(param_1 + 0x10) & 2) == 0) {
        return in_lr;
      }
      bVar1 = DAT_0202e8b4 & 8;
      if ((DAT_0202e8b4 & 8) != 0) {
        return in_lr;
      }
      *(byte *)(param_1 + 0xd) = bVar1;
      goto LAB_080eab22;
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
  DAT_0202e8c4 = DAT_0202e8c4 | 0x80;
  *(byte *)(param_1 + 0xb8) = 0xc3;
  sub_08001EA4(&DAT_08c44f3c,(DAT_0202e1c6 - 0x1e0) * 0x20 + 0x10000);
  sub_08002208(&DAT_08c44f48,(DAT_0202dfc6 - 10) * 0x20 + 0x200);
  sub_0801CF00(param_1,(uint)*(byte *)(param_1 + 0xb8) << 8);
  sub_0801CFF0(param_1);
  sub_080E8FA4(0x80eab6d);
  bVar1 = *(char *)(param_1 + 0xe) + 1;
LAB_080eab22:
  *(byte *)(param_1 + 0xe) = bVar1;
  return in_lr;
}

