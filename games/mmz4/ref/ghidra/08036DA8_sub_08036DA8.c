// sub_08036DA8 at 0x08036DA8 (thumb)

undefined4 sub_08036DA8(int param_1)

{
  char *pcVar1;
  undefined4 in_lr;
  
  pcVar1 = (char *)(param_1 + 0x102);
  if (*pcVar1 == '\0') {
    sub_0801CF00(param_1,0x1905);
    *pcVar1 = *pcVar1 + '\x01';
  }
  sub_0803A3BC(param_1,0x1905);
  sub_0803A3FC(param_1,0x1905);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    if (*(char *)(param_1 + 0xe) == '\x01') {
      sub_0801CFC8(param_1,0x403,2,1);
    }
    else {
      sub_0801CFC8(param_1,0x404,2,1);
    }
    *(undefined *)(param_1 + 0x100) = 0;
  }
  return in_lr;
}

