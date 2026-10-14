// sub_080CBCF0 at 0x080CBCF0 (thumb)

undefined4 sub_080CBCF0(int param_1)

{
  undefined4 in_lr;
  
  sub_0801CC9C();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  if (*(char *)(param_1 + 0x11) == '\x01') {
    sub_0801CF00(param_1,0x9502);
    sub_080CBB38(param_1 + 0x54,0,2,*(undefined *)(param_1 + 0x13));
    *(undefined *)(param_1 + 0x12) = 2;
  }
  else {
    sub_0801CF00(param_1,0x9500);
    *(undefined *)(param_1 + 0x12) = 4;
  }
  sub_0801CFF0(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08005760(param_1 + 0x74,&DAT_08863184,param_1 + 0x54,8);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(int *)(param_1 + 0x5c) =
       *(short *)((int)&DAT_08128c10 + ((*(byte *)(param_1 + 0x13) + 0x40) * 0x1000000 >> 0x17)) * 3
  ;
  *(int *)(param_1 + 0x60) = (short)(&DAT_08128c10)[*(byte *)(param_1 + 0x13)] * 3;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 4);
  sub_080CBCC0(param_1);
  return in_lr;
}

