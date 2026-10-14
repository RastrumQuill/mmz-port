// sub_0803756C at 0x0803756C (thumb)

undefined4 sub_0803756C(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  uVar1 = sub_08037594();
  *(undefined4 *)(param_1 + 0xd4) = uVar1;
  uVar1 = sub_080375A8(param_1,param_2,param_3);
  *(undefined4 *)(param_1 + 0xd8) = uVar1;
  return in_lr;
}

