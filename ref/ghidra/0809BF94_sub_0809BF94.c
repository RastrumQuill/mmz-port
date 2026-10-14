// sub_0809BF94 at 0x0809BF94 (thumb)

undefined4 sub_0809BF94(int param_1)

{
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 4);
  sub_08088120(param_1);
  *(undefined *)(param_1 + 0x44) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  sub_080033F0(param_1 + 0x6c,0x19);
  *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) | 0xf0;
  *(undefined *)(param_1 + 0x1e) = 0xf;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  sub_0809BFF4(param_1);
  return in_lr;
}

