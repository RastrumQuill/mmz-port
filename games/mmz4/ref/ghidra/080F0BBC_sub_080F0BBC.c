// sub_080F0BBC at 0x080F0BBC (thumb)

undefined4 sub_080F0BBC(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x11) == '\0') {
    DAT_0202e132 = 0x240;
    DAT_0202df32 = 6;
    sub_08001D30(&DAT_08c44974,0x10800);
    sub_08002208(&DAT_08c44980,(DAT_0202df32 - 4) * 0x20 + 0x200);
    sub_0801CF00(param_1,0x7900);
    *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    *(undefined *)(param_1 + 0x4c) = 0;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
    uVar1 = sub_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar1;
    *(char *)(param_1 + 0x11) = *(char *)(param_1 + 0x11) + '\x01';
  }
  sub_0801CFF0(param_1);
  return in_lr;
}

