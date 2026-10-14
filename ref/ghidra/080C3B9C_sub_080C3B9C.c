// sub_080C3B9C at 0x080C3B9C (thumb)

undefined8 sub_080C3B9C(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = sub_0801C4FC(*(undefined4 *)(param_1 + 0x10));
  return CONCAT44(in_lr,-(uVar1 & 0xff) >> 0x1f);
}

