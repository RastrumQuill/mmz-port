// sub_0802FCE8 at 0x0802FCE8 (thumb)

undefined4 sub_0802FCE8(int param_1)

{
  char *pcVar1;
  undefined4 in_lr;
  
  pcVar1 = (char *)(param_1 + 0xee);
  if (*pcVar1 == '\0') {
    sub_08017700(param_1,0x1a00);
    sub_08038394(param_1,0x14);
    *pcVar1 = *pcVar1 + '\x01';
  }
  else {
    sub_08034558(param_1,0x1a00);
    if (*(char *)(param_1 + 0x73) == '\x03') {
      if ((*(uint *)(param_1 + 0x218) & 0x80) == 0) {
        *(undefined *)(param_1 + 0xed) = 3;
        *pcVar1 = '\0';
      }
      else {
        *(undefined *)(param_1 + 0xed) = 2;
        *pcVar1 = '\0';
        sub_0802FA88(param_1);
      }
    }
  }
  return in_lr;
}

