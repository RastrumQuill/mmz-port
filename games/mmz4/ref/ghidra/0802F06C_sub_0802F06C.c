// sub_0802F06C at 0x0802F06C (thumb)

undefined8 sub_0802F06C(ushort param_1,char param_2)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (param_1 == 0) goto LAB_0802f096;
  if (param_1 != 1) {
    if (param_1 < 8) {
      if (param_2 != '\0') {
LAB_0802f096:
        uVar1 = 0;
        goto LAB_0802f098;
      }
    }
    else if ((0xd < param_1) || (param_2 == '\0')) goto LAB_0802f096;
  }
  uVar1 = 1;
LAB_0802f098:
  return CONCAT44(in_lr,uVar1);
}

