// sub_080E931C at 0x080E931C (thumb)

undefined8 sub_080E931C(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = sub_08037C20(*(undefined4 *)(param_1 + 0x10));
  return CONCAT44(in_lr,-(uVar1 & 0xff) >> 0x1f);
}

