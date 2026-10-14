// sub_080E0E7C at 0x080E0E7C (thumb)

ulonglong sub_080E0E7C(int param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar1 = sub_08009A3C(param_1 + -0x700,param_2);
  uVar2 = sub_08009A3C(param_1 + 0x700,param_2);
  return CONCAT44(in_lr,uVar1 | uVar2) & 0xffffffff0000ffff;
}

