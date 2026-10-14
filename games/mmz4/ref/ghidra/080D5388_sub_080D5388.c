// sub_080D5388 at 0x080D5388 (thumb)

undefined4 sub_080D5388(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 9) == '\x12') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  return in_lr;
}

