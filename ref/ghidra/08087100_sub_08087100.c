// sub_08087100 at 0x08087100 (thumb)

undefined4 sub_08087100(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    bVar1 = *(char *)(param_1 + 0x13) - 6;
    *(byte *)(param_1 + 0x13) = bVar1;
    if (bVar1 < 100) {
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b17b0)[*(byte *)(param_1 + 9)] + 8)
      ;
      sub_08087168(param_1);
    }
  }
  else {
    bVar1 = *(char *)(param_1 + 0x13) + 6;
    *(byte *)(param_1 + 0x13) = bVar1;
    if (0x9c < bVar1) {
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b17b0)[*(byte *)(param_1 + 9)] + 8)
      ;
      sub_08087168(param_1);
    }
  }
  return in_lr;
}

