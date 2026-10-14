// sub_08042524 at 0x08042524 (thumb)

undefined4 sub_08042524(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0xa309);
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    sub_080032EC(0x4b);
  }
  sub_080128D4(param_1);
  if (*(char *)(param_1 + 0xe) == '\x01') {
    if (*(char *)(param_1 + 0x73) == '\x03') {
      sub_080127E4(param_1,0xa300);
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
  }
  else {
    bVar1 = (byte)DAT_0202ec42 & 1;
    if ((DAT_0202ec42 & 1) == 0) {
      *(undefined *)(param_1 + 0xd) = 2;
      *(byte *)(param_1 + 0xe) = bVar1;
      *(byte *)(param_1 + 0xf) = bVar1;
    }
  }
  return in_lr;
}

