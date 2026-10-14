// sub_08006954 at 0x08006954 (thumb)

undefined4 sub_08006954(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = param_3 & 0xffffffe0;
  sub_080EEF68(param_2,param_1,uVar1 >> 2 & 0x1fffff);
  if ((param_3 & 0x1f) != 0) {
    sub_080EEF6C(param_2 + uVar1,param_1 + uVar1,(param_3 & 0x1f) >> 2 | 0x4000000);
  }
  return in_lr;
}

