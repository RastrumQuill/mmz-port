// sub_080D3B64 at 0x080D3B64 (thumb)

undefined4 sub_080D3B64(int param_1)

{
  undefined4 in_lr;
  
  sub_08002C94(param_1 + 0x34,0x80d3ca5);
  *(int *)(param_1 + 0x3c) = param_1;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xf7 | 3;
  *(undefined *)(param_1 + 0x12) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 4);
  sub_080D3B2C(param_1);
  return in_lr;
}

