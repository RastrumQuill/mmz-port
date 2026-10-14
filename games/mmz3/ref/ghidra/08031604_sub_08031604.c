// sub_08031604 at 0x08031604 (thumb)

undefined4 sub_08031604(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined4 in_lr;
  
  pcVar2 = (char *)(param_1 + 0xee);
  if (*pcVar2 == '\0') {
    sub_08017700(param_1,0x1d00);
  }
  else {
    sub_08034558(param_1,0x1d00);
    if (*pcVar2 != '\x01') {
      if (*(char *)(param_1 + 0x73) != '\x03') {
        return in_lr;
      }
      *(undefined *)(param_1 + 0xec) = 0;
      if (*(char *)(param_1 + 0xe) == '\0') {
        if (*(char *)(param_1 + 0xf) != '\x02') {
          sub_08017700(param_1,0x701);
          return in_lr;
        }
        uVar1 = 0x702;
      }
      else {
        if (*(char *)(param_1 + 0xf) != '\x03') {
          sub_080177CC(param_1,0x704,4,1);
          return in_lr;
        }
        uVar1 = 0x705;
      }
      sub_080177CC(param_1,uVar1,1,1);
      return in_lr;
    }
    if ('\x01' < *(char *)(param_1 + 0x72)) {
      return in_lr;
    }
    sub_08038394(param_1,7);
  }
  *pcVar2 = *pcVar2 + '\x01';
  return in_lr;
}

