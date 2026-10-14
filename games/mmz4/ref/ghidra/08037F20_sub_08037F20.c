// sub_08037F20 at 0x08037F20 (thumb)

undefined4 sub_08037F20(int param_1)

{
  char *pcVar1;
  undefined4 in_lr;
  
  pcVar1 = (char *)(param_1 + 0x102);
  if (*pcVar1 == '\0') {
    sub_0801CF00(param_1,0x1d00);
  }
  else {
    sub_0803A3BC(param_1,0x1d00);
    if (*pcVar1 != '\x01') {
      if (*(char *)(param_1 + 0x73) != '\x03') {
        return in_lr;
      }
      *(undefined *)(param_1 + 0x100) = 0;
      sub_0801CF00(param_1,0x2810);
      *(undefined *)(param_1 + 0xe) = 2;
      *(undefined *)(param_1 + 0xf) = 0;
      return in_lr;
    }
    if ('\x01' < *(char *)(param_1 + 0x72)) {
      return in_lr;
    }
    sub_0803C490(param_1,7);
  }
  *pcVar1 = *pcVar1 + '\x01';
  return in_lr;
}

