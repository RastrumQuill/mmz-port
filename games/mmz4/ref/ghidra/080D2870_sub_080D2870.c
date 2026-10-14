// sub_080D2870 at 0x080D2870 (thumb)

undefined4 sub_080D2870(int param_1)

{
  undefined4 in_lr;
  
  sub_0801CDBC();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  sub_0801CEEC(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  if (*(int *)(param_1 + 0x58) < DAT_0202ea34 + -0x5000) {
    sub_0801CF00(param_1,0xc001);
  }
  else {
    sub_0801CF00(param_1,0xc000);
  }
  sub_0801CFF0(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | 4;
  *(undefined2 *)(param_1 + 0x50) = 0x10;
  *(undefined2 *)(param_1 + 0x52) = 0x10;
  *(undefined *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 4);
  sub_080D263C(param_1);
  return in_lr;
}

