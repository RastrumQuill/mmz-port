// sub_08018D18 at 0x08018D18 (thumb)

undefined4 sub_08018D18(int param_1,undefined param_2,undefined param_3)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  uVar1 = sub_08018D64(param_1,param_2,param_3);
  *(undefined4 *)(param_1 + 0x104) = uVar1;
  *(undefined4 *)(param_1 + 0x10c) = *(undefined4 *)(param_1 + 0x108);
  uVar1 = sub_08018D7C(param_1,param_2,param_3);
  *(undefined4 *)(param_1 + 0x108) = uVar1;
  return in_lr;
}

