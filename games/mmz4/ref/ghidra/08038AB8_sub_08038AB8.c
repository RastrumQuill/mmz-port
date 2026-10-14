// sub_08038AB8 at 0x08038AB8 (thumb)

undefined8 sub_08038AB8(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 199) == '\x02') {
    if (*(byte *)(param_1 + 0xf2) < 7) {
LAB_08038adc:
      uVar1 = 0;
      goto LAB_08038ade;
    }
  }
  else if (*(char *)(param_1 + 0xf2) != '\a') goto LAB_08038adc;
  uVar1 = 1;
LAB_08038ade:
  return CONCAT44(in_lr,uVar1);
}

