// sub_08026514 at 0x08026514 (thumb)

undefined4 sub_08026514(int param_1)

{
  undefined4 in_lr;
  
  sub_080033DC(param_1 + 0x6c,&DAT_0859c0b0);
  sub_08001FCC(param_1 + 0x2c,&DAT_0854c0b0,param_1 + 0x4c);
  *(ushort *)(param_1 + 0x42) = (*(byte *)(param_1 + 0x1e) - 1) * 0xc0 + 8;
  *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf | *(char *)(param_1 + 0x1e) << 4;
  *(byte *)(param_1 + 0x44) = *(byte *)(param_1 + 10) >> 4 & 1;
  *(byte *)(param_1 + 0x45) = *(byte *)(param_1 + 10) >> 5 & 1;
  *(undefined4 *)(param_1 + 0xb8) = 0xff;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 8;
  return in_lr;
}

