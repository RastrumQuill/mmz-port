// sub_0804193C at 0x0804193C (thumb)

undefined4 sub_0804193C(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  sub_0801CF00(param_1,0x8027);
  sub_08002B10(0x44);
  uVar1 = sub_08041710(uVar1,param_1);
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  return in_lr;
}

