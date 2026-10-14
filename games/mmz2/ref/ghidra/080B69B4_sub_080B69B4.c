// sub_080B69B4 at 0x080B69B4 (thumb)

undefined4 sub_080B69B4(int param_1)

{
  undefined4 in_lr;
  
  sub_080126A0();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_080127E4(param_1,0x5203);
  sub_080128D4(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(undefined2 *)(param_1 + 0x50) = 0x60;
  *(undefined2 *)(param_1 + 0x52) = 0x60;
  if ((*(byte *)(param_1 + 0x11) & 1) == 0) {
    *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | 8;
  }
  else {
    *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) | 0xc;
  }
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined *)(param_1 + 0x12) = 0x20;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 4);
  sub_080B6984(param_1);
  return in_lr;
}

