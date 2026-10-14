// sub_08046864 at 0x08046864 (thumb)

undefined4 sub_08046864(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0xa510);
    *(undefined *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  if (*(char *)(param_1 + 0xf) == '\0') {
    if (*(char *)(param_1 + 0x71) != '\x04') goto LAB_080468ba;
  }
  else if ((*(char *)(param_1 + 0xf) != '\x01') || (*(char *)(param_1 + 0x71) != '\x06'))
  goto LAB_080468ba;
  sub_080032EC(0x36);
  *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
LAB_080468ba:
  bVar1 = (byte)DAT_0202ec42;
  if ((DAT_0202ec42 & 1) == 0) {
    *(undefined *)(param_1 + 0xd) = 0x1f;
    *(byte *)(param_1 + 0xe) = bVar1 & 1;
  }
  return in_lr;
}

