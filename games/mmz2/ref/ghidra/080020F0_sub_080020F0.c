// sub_080020F0 at 0x080020F0 (thumb)

undefined8 sub_080020F0(uint param_1)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  int local_18;
  
  param_1 = param_1 & 0xff;
  if (param_1 < 6) {
    sVar1 = 3;
    do {
      sub_080EEFA4(param_1 * 0xaaa + 0xe000000,&local_18,4);
      if ((local_18 == 0x49544e49) ||
         (sub_080EEFA4((param_1 + 6) * 0xaaa + 0xe000000,&local_18,4), local_18 == 0x49544e49)) {
        uVar2 = 1;
        goto LAB_0800214a;
      }
      sVar1 = sVar1 + -1;
    } while (sVar1 != 0);
  }
  uVar2 = 0;
LAB_0800214a:
  return CONCAT44(in_lr,uVar2);
}

