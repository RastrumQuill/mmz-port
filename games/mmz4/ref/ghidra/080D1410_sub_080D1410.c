// sub_080D1410 at 0x080D1410 (thumb)

undefined4 sub_080D1410(int param_1)

{
  undefined4 in_lr;
  
  sub_08002C94(param_1 + 0x34,0x80d152d);
  *(int *)(param_1 + 0x3c) = param_1;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xf7 | 1;
  sub_08001D30(&DAT_08c4403c,(DAT_0202e046 - 0x30) * 0x20 + 0x10000);
  sub_08002208(&DAT_08c44048,(DAT_0202de46 - 0xe) * 0x20 + 0x200);
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0x9400;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 4);
  *(undefined *)(param_1 + 0x12) = 0;
  sub_080D149C(param_1);
  return in_lr;
}

