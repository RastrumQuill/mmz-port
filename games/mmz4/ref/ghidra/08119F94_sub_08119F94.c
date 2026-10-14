// sub_08119F94 at 0x08119F94 (thumb)

undefined4 sub_08119F94(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xdf7) == '\0') {
    *(char *)(param_1 + 0xdf7) = '\x01';
  }
  sub_080025D8(*(byte *)(param_1 + 0xdd0) + 0x14);
  cVar1 = sub_080025D8(0x13);
  if (cVar1 == '\x03') {
    sub_08001D30(&DAT_08b6c1a4,(DAT_02000a06 & 0xc) << 0xc);
    sub_08002208(&DAT_08b6c1b0,0);
    *(undefined *)(param_1 + 3) = 0;
    *(undefined *)(param_1 + 0xdd2) = 0;
    *(undefined2 *)(param_1 + 0xdfc) = 0;
    *(undefined2 *)(param_1 + 0xdfe) = 0;
    *(undefined2 *)(param_1 + 0xe00) = 0;
    *(undefined2 *)(param_1 + 0xe02) = 0;
    DAT_02000a40 = 0;
  }
  return in_lr;
}

