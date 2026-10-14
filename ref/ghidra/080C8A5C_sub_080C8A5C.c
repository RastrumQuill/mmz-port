// sub_080C8A5C at 0x080C8A5C (thumb)

undefined8 sub_080C8A5C(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  byte bVar1;
  undefined4 in_lr;
  
  for (bVar1 = 0; bVar1 < 3; bVar1 = bVar1 + 1) {
    sub_080C8988(param_1,param_2,param_3);
    param_4 = sub_080C89F8(param_1,param_2,param_3);
    if (param_4 == 0) break;
  }
  return CONCAT44(in_lr,param_4);
}

