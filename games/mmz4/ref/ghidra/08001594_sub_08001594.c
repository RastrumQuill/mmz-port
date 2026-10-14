// sub_08001594 at 0x08001594 (thumb)

undefined8 sub_08001594(uint param_1,int param_2)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  int local_30;
  undefined4 uStack_2c;
  int local_28;
  undefined4 local_24;
  
  param_1 = param_1 & 0xff;
  local_30 = 0x20202020;
  uStack_2c = 0;
  local_28 = 0;
  local_24 = 0;
  if (param_1 < 6) {
    sVar1 = 3;
    do {
      sub_08001B38(param_1 * 0x55,&local_30,0x10);
      if (((((local_30 == 0x49544e49) && (local_28 == param_2)) && (local_24._1_1_ == '\x02')) &&
          ((local_24 >> 0x18 & 0x7f) == param_1)) ||
         (((sub_08001B38((param_1 + 6) * 0x55,&local_30,0x10), local_30 == 0x49544e49 &&
           (local_28 == param_2)) &&
          ((local_24._1_1_ == '\x02' && ((local_24 >> 0x18 & 0x7f) == param_1)))))) {
        uVar2 = 1;
        goto LAB_08001644;
      }
      sVar1 = sVar1 + -1;
    } while (sVar1 != 0);
  }
  uVar2 = 0;
LAB_08001644:
  return CONCAT44(in_lr,uVar2);
}

