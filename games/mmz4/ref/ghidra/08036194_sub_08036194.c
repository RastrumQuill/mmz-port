// sub_08036194 at 0x08036194 (thumb)

undefined4 sub_08036194(int param_1)

{
  char *pcVar1;
  undefined4 in_lr;
  
  pcVar1 = (char *)(param_1 + 0x102);
  if (*pcVar1 == '\0') {
    sub_0801CF00(param_1,0x1a00);
    sub_0803C490(param_1,0x14);
    *pcVar1 = *pcVar1 + '\x01';
  }
  else {
    sub_0803A3BC(param_1,0x1a00);
    if (*(char *)(param_1 + 0x73) == '\x03') {
      if ((*(uint *)(param_1 + 600) & 0x80) == 0) {
        *(undefined *)(param_1 + 0x101) = 3;
        *pcVar1 = '\0';
      }
      else {
        *(undefined *)(param_1 + 0x101) = 2;
        *pcVar1 = '\0';
        sub_08035F34(param_1);
      }
    }
  }
  return in_lr;
}

