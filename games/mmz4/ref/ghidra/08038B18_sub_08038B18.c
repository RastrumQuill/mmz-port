// sub_08038B18 at 0x08038B18 (thumb)

undefined8 sub_08038B18(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 199) == '\x02') {
    if (*(byte *)(param_1 + 0xf2) < 2) {
LAB_08038b3c:
      uVar1 = 0;
      goto LAB_08038b3e;
    }
  }
  else if (*(char *)(param_1 + 0xf2) != '\x02') goto LAB_08038b3c;
  uVar1 = 1;
LAB_08038b3e:
  return CONCAT44(in_lr,uVar1);
}

