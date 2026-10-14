// sub_080AFC70 at 0x080AFC70 (thumb)

undefined4 sub_080AFC70(int param_1)

{
  undefined4 in_lr;
  
  if (((param_1 != 0) && (*(char *)(param_1 + 9) == '\r')) && (*(char *)(param_1 + 0x10) == '\0')) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

