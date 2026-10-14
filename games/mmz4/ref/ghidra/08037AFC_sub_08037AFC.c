// sub_08037AFC at 0x08037AFC (thumb)

undefined4 sub_08037AFC(int param_1)

{
  char *pcVar1;
  undefined4 in_lr;
  
  pcVar1 = (char *)(param_1 + 0x102);
  if (*pcVar1 == '\0') {
    sub_0801CF00(param_1,0x1c04);
    *pcVar1 = *pcVar1 + '\x01';
  }
  sub_0803A3BC(param_1,0x1c04);
  sub_0803A3FC(param_1,0x1c04);
  if (*(char *)(param_1 + 0x155) == '\x03') {
    *(undefined *)(param_1 + 0x101) = 3;
    *pcVar1 = '\0';
    sub_08037B58(param_1);
  }
  return in_lr;
}

