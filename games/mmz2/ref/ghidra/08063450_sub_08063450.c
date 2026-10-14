// sub_08063450 at 0x08063450 (thumb)

undefined4 sub_08063450(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0xe) = 1;
  }
  sub_080128D4(param_1);
  bVar1 = (byte)DAT_0202ec42;
  if ((DAT_0202ec42 & 1) == 0) {
    *(undefined *)(param_1 + 0xd) = 4;
    *(byte *)(param_1 + 0xe) = bVar1 & 1;
  }
  return in_lr;
}

