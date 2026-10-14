// sub_080B2D24 at 0x080B2D24 (thumb)

undefined4 sub_080B2D24(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        sub_0809C980(param_1);
        if (DAT_0202365a != 0) {
          return in_lr;
        }
        DAT_02022cb4 = DAT_0202365a;
        bVar1 = *(char *)(param_1 + 0xe) + 1;
      }
      else {
        if (bVar1 != 3) {
          return in_lr;
        }
        sub_0809C980(param_1);
        bVar1 = (byte)*(ushort *)(param_1 + 0x90) & 4;
        if ((*(ushort *)(param_1 + 0x90) & 4) != 0) {
          return in_lr;
        }
      }
      goto LAB_080b2e10;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    sub_0809C930(param_1,0);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_080055FC(param_1 + 0x74,&DAT_082b6d44,param_1 + 0x4c,0);
    *(int *)(param_1 + 0xb4) = param_1;
    *(undefined4 *)(param_1 + 0xb0) = 0x80b2cb1;
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
    *(undefined **)(param_1 + 0x28) = &DAT_082b6d60;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_0809C980(param_1);
  if (*(char *)(param_1 + 0x10) == '\0') {
    return in_lr;
  }
  if (4 < *(byte *)(DAT_02022b20 + 1)) {
    return in_lr;
  }
  if ((*(ushort *)(param_1 + 0x90) & 4) == 0) {
    return in_lr;
  }
  DAT_02022cb4 = -0x8000;
  sub_080BC808(0x43);
  bVar1 = *(char *)(param_1 + 0xe) + 1;
LAB_080b2e10:
  *(byte *)(param_1 + 0xe) = bVar1;
  return in_lr;
}

