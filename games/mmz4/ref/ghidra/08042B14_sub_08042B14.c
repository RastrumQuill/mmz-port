// sub_08042B14 at 0x08042B14 (thumb)

undefined4 sub_08042B14(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  sub_0801CD28();
  sub_0801CEEC(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801CF00(param_1,0x801d);
  sub_08002B10(0x73);
  uVar1 = sub_080428FC(uVar1,param_1);
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  return in_lr;
}

