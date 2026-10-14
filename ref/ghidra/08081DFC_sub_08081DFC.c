// sub_08081DFC at 0x08081DFC (thumb)

undefined4 sub_08081DFC(int param_1)

{
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b17b0)[*(byte *)(param_1 + 9)] + 4);
  *(undefined *)(param_1 + 0xd) = (&DAT_082b2b6c)[*(byte *)(param_1 + 0x10)];
  if (*(byte *)(param_1 + 0x10) == 1) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    sub_08076590(param_1);
  }
  if (*(char *)(param_1 + 0x10) != '\x02') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_080055FC(param_1 + 0x74,&DAT_082b2958,param_1 + 0x4c,0);
    *(int *)(param_1 + 0xb4) = param_1;
    *(undefined4 *)(param_1 + 0xb0) = 0;
  }
  if (*(char *)(param_1 + 0x10) == '\x01') {
    *(undefined4 *)(param_1 + 0xb0) = 0x8081dd1;
  }
  *(undefined *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_08081EA0(param_1);
  return in_lr;
}

