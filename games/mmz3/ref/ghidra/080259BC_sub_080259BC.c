// sub_080259BC at 0x080259BC (thumb)

undefined8 sub_080259BC(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (((*DAT_0203063c & 1) == 0) ||
     (((((*DAT_0203063c & 2) == 0 && (*(char *)(param_1 + 0x231) == '\0')) &&
       (*(char *)(param_1 + 0xb4) != '\0')) && (*(char *)(param_1 + 0xb5) != '\0')))) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return CONCAT44(in_lr,uVar1);
}

