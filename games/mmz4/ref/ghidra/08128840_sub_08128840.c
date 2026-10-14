// sub_08128840 at 0x08128840 (thumb)

undefined8 sub_08128840(undefined2 param_1,undefined4 param_2,uint param_3)

{
  byte bVar1;
  undefined4 in_lr;
  
  for (bVar1 = 0; bVar1 < 3; bVar1 = bVar1 + 1) {
    param_3 = sub_08128674(param_1,param_2);
    param_3 = param_3 & 0xffff;
    if (param_3 == 0) {
      param_3 = sub_081287E8(param_1,param_2);
      param_3 = param_3 & 0xffff;
      if (param_3 == 0) break;
    }
  }
  return CONCAT44(in_lr,param_3);
}

