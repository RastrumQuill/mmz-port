// sub_08027B34 at 0x08027B34 (thumb)

undefined4 sub_08027B34(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082aa198)[*(byte *)(param_1 + 9)] + 8);
  }
  else if (*(char *)(*(int *)(param_1 + 0x20) + 0xd) == '\x01') {
    sub_08025C94(param_1,0x1302,(short)*(char *)(param_1 + 0x71),(short)*(char *)(param_1 + 0x72));
  }
  else {
    sub_08025C94(param_1,0x1303,(short)*(char *)(param_1 + 0x71),(short)*(char *)(param_1 + 0x72));
  }
  return in_lr;
}

