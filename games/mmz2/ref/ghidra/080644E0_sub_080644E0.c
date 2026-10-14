// sub_080644E0 at 0x080644E0 (thumb)

undefined4 sub_080644E0(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0xad0d);
    sub_08002638(&DAT_084337dc,(DAT_0202e6a6 - 0x210) * 0x20 + 0x10000);
    sub_08002AEC(&DAT_084337e8,(DAT_0202e4a6 - 7) * 0x20 + 0x200);
    sub_08002638(&DAT_084337c8,(DAT_0202e6a4 - 0x200) * 0x20 + 0x10000);
    sub_08002AEC(&DAT_084337d4,(DAT_0202e4a4 - 6) * 0x20 + 0x200);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  bVar1 = (byte)DAT_0202ec42;
  if ((DAT_0202ec42 & 1) == 0) {
    *(undefined *)(param_1 + 0xd) = 3;
    *(byte *)(param_1 + 0xe) = bVar1 & 1;
  }
  return in_lr;
}

