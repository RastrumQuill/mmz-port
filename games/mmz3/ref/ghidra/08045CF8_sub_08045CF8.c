// sub_08045CF8 at 0x08045CF8 (thumb)

undefined4 sub_08045CF8(int param_1)

{
  char *pcVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    pcVar1 = (char *)(param_1 + 0xd0);
    if (*pcVar1 == '\0') {
      if (*(char *)(param_1 + 0xcf) != '\0') {
        sub_080040A8(0x19,800);
        sub_080041E4(0x19);
        *pcVar1 = *pcVar1 + '\x01';
      }
    }
    else if ((*pcVar1 == '\x01') && (sub_080041E4(0x19), *(char *)(param_1 + 0xcf) == '\0')) {
      sub_08004230(0x19);
      *pcVar1 = '\0';
    }
  }
  return in_lr;
}

