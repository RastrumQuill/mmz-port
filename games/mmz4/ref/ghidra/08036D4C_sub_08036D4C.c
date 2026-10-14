// sub_08036D4C at 0x08036D4C (thumb)

undefined4 sub_08036D4C(int param_1)

{
  char *pcVar1;
  undefined4 in_lr;
  
  pcVar1 = (char *)(param_1 + 0x102);
  if (*pcVar1 == '\0') {
    sub_0801CF00(param_1,0x1904);
    *pcVar1 = *pcVar1 + '\x01';
  }
  sub_0803A3BC(param_1,0x1904);
  sub_0803A3FC(param_1,0x1904);
  if (*(char *)(param_1 + 0x155) == '\x03') {
    *(undefined *)(param_1 + 0x101) = 3;
    *pcVar1 = '\0';
    sub_08036DA8(param_1);
  }
  return in_lr;
}

