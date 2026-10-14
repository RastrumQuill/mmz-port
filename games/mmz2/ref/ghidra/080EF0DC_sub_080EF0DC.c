// sub_080EF0DC at 0x080EF0DC (thumb)

undefined8 sub_080EF0DC(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  byte bVar1;
  undefined4 in_lr;
  
  for (bVar1 = 0; bVar1 < 3; bVar1 = bVar1 + 1) {
    sub_080EF008(param_1,param_2,param_3);
    param_4 = sub_080EF078(param_1,param_2,param_3);
    if (param_4 == 0) break;
  }
  return CONCAT44(in_lr,param_4);
}

