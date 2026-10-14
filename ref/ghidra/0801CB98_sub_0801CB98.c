// sub_0801CB98 at 0x0801CB98 (thumb)

undefined8 sub_0801CB98(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  uVar1 = *(undefined4 *)(param_1 + 0x20c);
  uVar2 = *(undefined4 *)(param_1 + 0x210);
  *(undefined4 *)(param_2 + 0x90) = *(undefined4 *)(param_1 + 0x208);
  *(undefined4 *)(param_2 + 0x94) = uVar1;
  *(undefined4 *)(param_2 + 0x98) = uVar2;
  uVar1 = *(undefined4 *)(param_1 + 0x218);
  uVar2 = *(undefined4 *)(param_1 + 0x21c);
  *(undefined4 *)(param_2 + 0x9c) = *(undefined4 *)(param_1 + 0x214);
  *(undefined4 *)(param_2 + 0xa0) = uVar1;
  *(undefined4 *)(param_2 + 0xa4) = uVar2;
  return CONCAT44(param_2 + 0xa8,in_lr);
}

