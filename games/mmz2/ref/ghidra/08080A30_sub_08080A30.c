// sub_08080A30 at 0x08080A30 (thumb)

undefined8 sub_08080A30(int param_1,short param_2,int param_3,int param_4)

{
  char *pcVar1;
  undefined4 in_lr;
  
  pcVar1 = (char *)(param_1 + 0xba);
  if (*pcVar1 != '\0') {
    *pcVar1 = '\0';
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + param_3;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + param_4;
  if (param_2 == 0) {
    *pcVar1 = '\x01';
  }
  return CONCAT44(in_lr,(uint)(param_2 != 0));
}

