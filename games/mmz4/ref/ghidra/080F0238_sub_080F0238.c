// sub_080F0238 at 0x080F0238 (thumb)

undefined4 sub_080F0238(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    DAT_0202e0a2 = 0x2a5;
    DAT_0202dea2 = 8;
    sub_08001D30(&DAT_08c443d4,0x114a0);
    sub_08002208(&DAT_08c443e0,(DAT_0202dea2 - 4) * 0x20 + 0x200);
    sub_0801CF00(param_1,0x3100);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    *(undefined *)(param_1 + 0x4c) = 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  sub_0801CFF0(param_1);
  return in_lr;
}

