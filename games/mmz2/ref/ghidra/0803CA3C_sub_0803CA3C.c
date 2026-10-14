// sub_0803CA3C at 0x0803CA3C (thumb)

undefined4 sub_0803CA3C(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08336060)[*(byte *)(param_1 + 9)] + 4);
  iVar1 = *(int *)(param_1 + 0x28);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_08012580(param_1);
  sub_080127D0(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  sub_0803D1EC(param_1,0,0,0);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08006DE4(param_1 + 0x74,&DAT_08338964,param_1 + 0x54,0);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0x803d061;
  iVar1 = (char)(&DAT_08335a12)[*(byte *)(iVar1 + 0x1fc)] + 0xc;
  if (iVar1 < 1) {
    iVar1 = 1;
  }
  *(char *)(param_1 + 100) = (char)iVar1;
  sub_0803D234(param_1,0,(int)*(char *)(param_1 + 0x71));
  *(undefined *)(param_1 + 0x66) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  sub_0803CAF4(param_1);
  return in_lr;
}

