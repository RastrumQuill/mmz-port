// sub_08030988 at 0x08030988 (thumb)

undefined4 sub_08030988(int param_1)

{
  char *pcVar1;
  undefined4 in_lr;
  
  pcVar1 = (char *)(param_1 + 0xee);
  if (*pcVar1 == '\0') {
    sub_08017700(param_1,0x1c00);
  }
  else {
    sub_08034558(param_1,0x1c00);
    if (*pcVar1 != '\x01') {
      if (*(char *)(param_1 + 0x73) != '\x03') {
        return in_lr;
      }
      sub_080177CC(param_1,0x500,4,1);
      *(undefined *)(param_1 + 0xec) = 0;
      return in_lr;
    }
    if ('\x01' < *(char *)(param_1 + 0x72)) {
      return in_lr;
    }
    sub_08038394(param_1,6);
  }
  *pcVar1 = *pcVar1 + '\x01';
  return in_lr;
}

