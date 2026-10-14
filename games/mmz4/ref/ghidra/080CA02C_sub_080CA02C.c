// sub_080CA02C at 0x080CA02C (thumb)

undefined8 sub_080CA02C(int param_1)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  pcVar1 = (char *)(param_1 + 0xb6);
  if (*pcVar1 == -1) {
    if ((*(int *)(param_1 + 0x54) + -0x500 < *(int *)(DAT_0202dbf0 + 0x54)) &&
       (*(int *)(DAT_0202dbf0 + 0x54) < *(int *)(param_1 + 0x54) + 0x500)) {
      if (*(int *)(param_1 + 0x58) < *(int *)(DAT_0202dbf0 + 0x58)) {
        *pcVar1 = '\x01';
      }
      else {
        *pcVar1 = '\0';
      }
      uVar2 = 1;
      goto LAB_080ca07c;
    }
  }
  uVar2 = 0;
LAB_080ca07c:
  return CONCAT44(in_lr,uVar2);
}

