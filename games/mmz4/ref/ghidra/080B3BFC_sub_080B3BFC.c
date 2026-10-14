// sub_080B3BFC at 0x080B3BFC (thumb)

undefined4 sub_080B3BFC(int param_1)

{
  undefined4 in_lr;
  
  sub_0801CC9C();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801CF00(param_1,(ushort)*(byte *)(param_1 + 0x10) * 9 + -0x3700);
  sub_0801CFF0(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08005760(param_1 + 0x74,&DAT_0886034c,param_1 + 0x54,6);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0x80b465d;
  *(undefined *)(param_1 + 0xb8) = 0;
  *(undefined *)(param_1 + 0xbd) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined2 *)(param_1 + 0xbe) = 300;
  *(undefined *)(param_1 + 0x12) = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_080B3CB0(param_1);
  return in_lr;
}

