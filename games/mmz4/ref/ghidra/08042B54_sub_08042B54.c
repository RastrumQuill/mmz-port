// sub_08042B54 at 0x08042B54 (thumb)

undefined4 sub_08042B54(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  uVar2 = *(undefined4 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x2c);
  sub_0801CC9C(param_1);
  sub_0801CEEC(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801CF00(param_1,0x8020);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08005760(param_1 + 0x74,&DAT_08852680,param_1 + 0x54,8);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0x8043009;
  *(undefined *)(param_1 + 0x25) = 0x11;
  sub_080429A0(uVar2,uVar1,param_1,0);
  sub_080429A0(uVar2,uVar1,param_1,1);
  sub_080429A0(uVar2,uVar1,param_1,2);
  sub_080429A0(uVar2,uVar1,param_1,3);
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0x800;
  return in_lr;
}

