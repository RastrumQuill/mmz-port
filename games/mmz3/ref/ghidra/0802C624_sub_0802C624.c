// sub_0802C624 at 0x0802C624 (thumb)

undefined4 sub_0802C624(int param_1)

{
  short sVar1;
  undefined4 in_lr;
  
  if ((*(byte *)(param_1 + 0x143) & 0xf) == 0) {
    if ((*(byte *)(param_1 + 10) >> 4 & 1) == *(byte *)(param_1 + 0x118)) {
      sub_080177CC(param_1,0x3100,3,4);
    }
    else {
      sub_080177CC(param_1,0x3200,3,4);
    }
  }
  else {
    if ((*(byte *)(param_1 + 0x143) & 0xf0) == 0) {
      sub_080177CC(param_1,0x3200,3,4);
    }
    else {
      sub_080177CC(param_1,0x3100,3,4);
    }
    *(byte *)(param_1 + 0x143) = *(byte *)(param_1 + 0x143) & 0xf0;
  }
  if (*(int *)(param_1 + 0xf4) != 0) {
    *(undefined *)(*(int *)(param_1 + 0xf4) + 0x11) = 1;
    *(undefined4 *)(param_1 + 0xf4) = 0;
  }
  *(undefined *)(param_1 + 0xec) = 0;
  *(undefined *)(param_1 + 0x12d) = 0xff;
  *(undefined *)(param_1 + 0x126) = 0xff;
  *(undefined *)(param_1 + 0x12e) = 0xff;
  *(undefined *)(param_1 + 0x127) = 0xff;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  sVar1 = sub_08026664(param_1,&DAT_0835b034 + (uint)*(byte *)(param_1 + 0x147) * 8,0);
  if (sVar1 == 0) {
    *(undefined *)(param_1 + 0xe) = 2;
    *(undefined *)(param_1 + 0xf) = 0;
    sub_0802C88C(param_1);
  }
  else {
    *(undefined *)(param_1 + 0xe) = 1;
    *(undefined *)(param_1 + 0xf) = 0;
    sub_0802C73C(param_1);
  }
  return in_lr;
}

