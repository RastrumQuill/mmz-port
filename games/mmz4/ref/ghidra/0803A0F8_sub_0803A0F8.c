// sub_0803A0F8 at 0x0803A0F8 (thumb)

undefined8 sub_0803A0F8(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 199) == '\x02') {
    if (*(char *)(param_1 + 0xf3) != '\0') goto LAB_0803a11a;
LAB_0803a12a:
    if (2 < *(byte *)(param_1 + 0x148)) {
      uVar1 = 0;
      goto LAB_0803a13c;
    }
  }
  else {
    if (*(char *)(param_1 + 0xf3) != '\x01') goto LAB_0803a12a;
LAB_0803a11a:
    if (3 < *(byte *)(param_1 + 0x148)) {
      uVar1 = 0;
      goto LAB_0803a13c;
    }
  }
  uVar1 = 1;
LAB_0803a13c:
  return CONCAT44(in_lr,uVar1);
}

