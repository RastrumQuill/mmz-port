// sub_08085978 at 0x08085978 (thumb)

undefined4 sub_08085978(int param_1)

{
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b17b0)[*(byte *)(param_1 + 9)] + 4);
  *(undefined *)(param_1 + 0xd) = (&DAT_082b2f44)[*(byte *)(param_1 + 0x10)];
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 6;
  sub_080055FC(param_1 + 0x74,&DAT_082b2ed4,param_1 + 0x4c,0);
  *(int *)(param_1 + 0xb4) = param_1;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  if (*(char *)(param_1 + 0x10) == '\x03') {
    sub_08076600(param_1);
  }
  else {
    sub_08076590(param_1);
  }
  sub_080859F4(param_1);
  return in_lr;
}

