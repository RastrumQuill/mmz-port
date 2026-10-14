// sub_08034210 at 0x08034210 (thumb)

undefined4 sub_08034210(int param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 in_lr;
  
  pcVar2 = (char *)(param_1 + 0x102);
  if (*pcVar2 == '\0') {
    sub_0801CF00(param_1,0x2709);
    *(undefined *)(param_1 + 0x151) = 0x10;
    *pcVar2 = *pcVar2 + '\x01';
  }
  sub_0803A3BC(param_1,0x2709);
  sub_0803A3FC(param_1,0x2709);
  if (*(char *)(param_1 + 0x71) < '\x01') {
    *(byte *)(param_1 + 0x153) = *(byte *)(param_1 + 0x153) | 6;
  }
  else {
    *(byte *)(param_1 + 0x153) = *(byte *)(param_1 + 0x153) | 8;
    cVar1 = sub_08039FE4(param_1,param_1 + 0x144);
    if (cVar1 != '\0') {
      *(undefined *)(param_1 + 0x100) = 3;
      *(undefined *)(param_1 + 0x101) = 0;
      sub_080334E8(param_1);
      return in_lr;
    }
  }
  cVar1 = *(char *)(param_1 + 0x151) + -1;
  *(char *)(param_1 + 0x151) = cVar1;
  if (cVar1 == -1) {
    *(undefined *)(param_1 + 0x101) = 5;
    *(undefined *)(param_1 + 0x102) = 0;
  }
  return in_lr;
}

