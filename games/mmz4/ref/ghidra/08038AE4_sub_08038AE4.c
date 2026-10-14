// sub_08038AE4 at 0x08038AE4 (thumb)

undefined8 sub_08038AE4(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xc6) != '\x14') {
    if (*(char *)(param_1 + 199) == '\x02') {
      if (*(char *)(param_1 + 0xf2) == '\0') {
LAB_08038b10:
        uVar1 = 0;
        goto LAB_08038b12;
      }
    }
    else if (*(char *)(param_1 + 0xf2) != '\x01') goto LAB_08038b10;
  }
  uVar1 = 1;
LAB_08038b12:
  return CONCAT44(in_lr,uVar1);
}

