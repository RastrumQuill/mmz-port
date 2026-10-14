// sub_080371A4 at 0x080371A4 (thumb)

undefined4 sub_080371A4(int param_1)

{
  char *pcVar1;
  undefined4 in_lr;
  
  pcVar1 = (char *)(param_1 + 0x102);
  if (*pcVar1 == '\0') {
    sub_0801CF00(param_1,0x1c00);
  }
  else {
    sub_0803A3BC(param_1,0x1c00);
    if (*pcVar1 != '\x01') {
      if (*(char *)(param_1 + 0x73) != '\x03') {
        return in_lr;
      }
      sub_0801CFC8(param_1,0x500,4,1);
      *(undefined *)(param_1 + 0x100) = 0;
      return in_lr;
    }
    if ('\x01' < *(char *)(param_1 + 0x72)) {
      return in_lr;
    }
    sub_0803C490(param_1,6);
  }
  *pcVar1 = *pcVar1 + '\x01';
  return in_lr;
}

