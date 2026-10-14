// sub_080DB900 at 0x080DB900 (thumb)

undefined4 sub_080DB900(int param_1)

{
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(undefined *)(param_1 + 0x74) = *(undefined *)(param_1 + 0x11);
  *(undefined *)(param_1 + 0x12) = 0xe;
  sub_0801CC9C(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  sub_0801CF00(param_1,3);
  sub_080DB96C(param_1);
  return in_lr;
}

