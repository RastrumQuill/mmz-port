// sub_0805F680 at 0x0805F680 (thumb)

undefined4 sub_0805F680(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,0xa524);
    if (DAT_0202e910 == 0xb) {
      sub_08002B10(0x114);
    }
    else {
      sub_08002B10(0x115);
    }
    sub_0800249C(0x5c,0x300);
    sub_080025D8(0x5c);
    sub_08002624(0x5c);
    sub_08001D30(&DAT_08c44794,(DAT_0202e102 - 0x365) * 0x20 + 0x10000);
    sub_08002208(&DAT_08c447a0,(DAT_0202df02 - 7) * 0x20 + 0x200);
    sub_08001D30(&DAT_08c44780,(DAT_0202e100 - 0x2d2) * 0x20 + 0x10000);
    sub_08002208(&DAT_08c4478c,(DAT_0202df00 - 6) * 0x20 + 0x200);
    sub_08001D30(&DAT_08c447bc,(DAT_0202e106 - 0x3c8) * 0x20 + 0x10000);
    sub_08002208(&DAT_08c447c8,(DAT_0202df06 - 4) * 0x20 + 0x200);
    sub_08001D30(&DAT_08c447a8,(DAT_0202e104 - 0x3a4) * 0x20 + 0x10000);
    sub_08002208(&DAT_08c447b4,(DAT_0202df04 - 5) * 0x20 + 0x200);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_0801CFF0(param_1);
  bVar1 = DAT_0202e922 & 1;
  if ((DAT_0202e922 & 1) == 0) {
    *(undefined *)(param_1 + 0xd) = 2;
    *(byte *)(param_1 + 0xe) = bVar1;
  }
  return in_lr;
}

