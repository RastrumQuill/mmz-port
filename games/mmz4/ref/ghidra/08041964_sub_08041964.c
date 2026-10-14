// sub_08041964 at 0x08041964 (thumb)

undefined4 sub_08041964(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  sub_0801CF00(param_1,0x8023);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08005760(param_1 + 0x74,&DAT_088524fc,param_1 + 0x54,8);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0x8041e4d;
  sub_080417B4(uVar1,param_1,0);
  sub_080417B4(uVar1,param_1,1);
  sub_080417B4(uVar1,param_1,2);
  sub_080417B4(uVar1,param_1,3);
  *(undefined4 *)(param_1 + 0x5c) = 0xc00;
  return in_lr;
}

