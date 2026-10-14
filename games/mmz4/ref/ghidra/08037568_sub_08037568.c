// sub_08037568 at 0x08037568 (thumb)

undefined4 sub_08037568(int param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 in_lr;
  
  pcVar2 = (char *)(param_1 + 0x102);
  if (*pcVar2 == '\0') {
    sub_0801CF00(param_1,0x2904);
    *(undefined *)(param_1 + 0x151) = 4;
    *pcVar2 = *pcVar2 + '\x01';
  }
  sub_0803A3BC(param_1,0x2904);
  sub_0803A3FC(param_1,0x2904);
  cVar1 = *(char *)(param_1 + 0x151) + -1;
  *(char *)(param_1 + 0x151) = cVar1;
  if (cVar1 == -1) {
    sub_0801CFC8(param_1,0x500,4,1);
    *(undefined *)(param_1 + 0x100) = 0;
  }
  return in_lr;
}

