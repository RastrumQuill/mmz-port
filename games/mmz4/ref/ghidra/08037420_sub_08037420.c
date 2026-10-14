// sub_08037420 at 0x08037420 (thumb)

undefined4 sub_08037420(int param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 in_lr;
  
  pcVar2 = (char *)(param_1 + 0x102);
  if (*pcVar2 == '\0') {
    sub_0801CF00(param_1,0x2901);
    sub_08040BF0(param_1);
    *(undefined *)(param_1 + 0x151) = 0x18;
    *pcVar2 = *pcVar2 + '\x01';
  }
  sub_0803A3BC(param_1,0x2901);
  sub_0803A3FC(param_1,0x2901);
  cVar1 = *(char *)(param_1 + 0x151) + -1;
  *(char *)(param_1 + 0x151) = cVar1;
  if (cVar1 == -1) {
    *(undefined *)(param_1 + 0x101) = 3;
    *pcVar2 = '\0';
  }
  return in_lr;
}

