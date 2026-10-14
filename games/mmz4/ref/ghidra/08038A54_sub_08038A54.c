// sub_08038A54 at 0x08038A54 (thumb)

undefined8 sub_08038A54(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 199) != '\x03') {
    if (*(char *)(param_1 + 199) == '\x02') {
      if (*(byte *)(param_1 + 0xf2) < 6) {
LAB_08038a7c:
        uVar1 = 0;
        goto LAB_08038a7e;
      }
    }
    else if (*(char *)(param_1 + 0xf2) != '\x06') goto LAB_08038a7c;
  }
  uVar1 = 1;
LAB_08038a7e:
  return CONCAT44(in_lr,uVar1);
}

