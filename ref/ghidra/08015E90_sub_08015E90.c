// sub_08015E90 at 0x08015E90 (thumb)

undefined4 sub_08015E90(int param_1)

{
  undefined4 in_lr;
  
  sub_080033DC(param_1 + 0x6c,&DAT_085980e4);
  sub_08001FCC(param_1 + 0x2c,&DAT_085400e4,param_1 + 0x4c);
  *(undefined2 *)(param_1 + 0x42) = 0;
  *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf;
  *(byte *)(param_1 + 0x44) = *(byte *)(param_1 + 10) >> 4 & 1;
  *(byte *)(param_1 + 0x45) = *(byte *)(param_1 + 10) >> 5 & 1;
  *(undefined4 *)(param_1 + 0xb8) = 0xff;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 8;
  return in_lr;
}

