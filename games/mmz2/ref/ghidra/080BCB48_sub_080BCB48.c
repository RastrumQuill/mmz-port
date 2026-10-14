// sub_080BCB48 at 0x080BCB48 (thumb)

undefined4 sub_080BCB48(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0x13) = 0;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  else {
    *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
  }
  if (8 < *(byte *)(param_1 + 0x13)) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 8);
    sub_080BCB88(param_1);
  }
  return in_lr;
}

