// sub_080CBFA4 at 0x080CBFA4 (thumb)

undefined4 sub_080CBFA4(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x28);
  sub_0801CC9C();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801CF00(param_1,0x9504);
  sub_0801CFF0(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08005760(param_1 + 0x74,&DAT_088631cc,param_1 + 0x54,8);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  if ((*(byte *)(iVar1 + 10) & 0x10) == 0) {
    iVar1 = *(int *)(param_1 + 0x54) + -0x2400;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x54) + 0x2400;
  }
  *(int *)(param_1 + 0x54) = iVar1;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -0x1700;
  *(int *)(param_1 + 0x5c) =
       *(short *)((int)&DAT_08128c10 + ((*(byte *)(param_1 + 0x11) + 0x40) * 0x1000000 >> 0x17)) * 3
  ;
  *(int *)(param_1 + 0x60) = (short)(&DAT_08128c10)[*(byte *)(param_1 + 0x11)] * 3;
  sub_080CBB38(param_1 + 0x54,0,1,*(undefined *)(param_1 + 0x11));
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 4);
  sub_080CBCC0(param_1);
  return in_lr;
}

