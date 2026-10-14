// sub_080B31F4 at 0x080B31F4 (thumb)

undefined4 sub_080B31F4(int param_1)

{
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 0x2c) == 0) {
    if (*(char *)(param_1 + 0xe) == '\0') {
      *(undefined *)(param_1 + 0x11) = 0x3c;
      *(undefined *)(param_1 + 0x12) = 0;
      *(undefined *)(param_1 + 0xe) = 1;
    }
    if (*(char *)(param_1 + 0x11) == '\0') {
      *(undefined *)(param_1 + 0xd) = 1;
      *(undefined *)(param_1 + 0xe) = 0;
    }
    *(char *)(param_1 + 0x11) = *(char *)(param_1 + 0x11) + -1;
  }
  else if (1 < *(byte *)(*(int *)(param_1 + 0x2c) + 0xc)) {
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    DAT_0202dada._0_1_ = (byte)(1 << *(sbyte *)(param_1 + 0x10)) | (byte)DAT_0202dada;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    sub_08002B10(0x183);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_08005760(param_1 + 0x74,&DAT_088601c0,param_1 + 0x54,(int)*(short *)(param_1 + 0xa4));
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0x80b2dad;
  }
  sub_080B3344(param_1);
  return in_lr;
}

