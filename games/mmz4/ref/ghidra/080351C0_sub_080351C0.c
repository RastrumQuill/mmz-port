// sub_080351C0 at 0x080351C0 (thumb)

undefined4 sub_080351C0(int param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 in_lr;
  
  pcVar2 = (char *)(param_1 + 0x102);
  if (*pcVar2 == '\0') {
    sub_0801CFC8(param_1,0x2001,(short)*(char *)(param_1 + 0x71),(short)*(char *)(param_1 + 0x72));
    *(undefined *)(param_1 + 0x145) = 5;
    *pcVar2 = *pcVar2 + '\x01';
  }
  *(byte *)(param_1 + 0x153) = *(byte *)(param_1 + 0x153) | 8;
  cVar1 = sub_08039FE4(param_1,param_1 + 0x144);
  if (cVar1 == '\0') {
    cVar1 = *(char *)(param_1 + 0x145) + -1;
    *(char *)(param_1 + 0x145) = cVar1;
    if (cVar1 == -1) {
      *(undefined *)(param_1 + 0x100) = 0;
      sub_0801CFC8(param_1,0x200,(short)*(char *)(param_1 + 0x71),(short)*(char *)(param_1 + 0x72));
    }
  }
  else {
    *(undefined *)(param_1 + 0x100) = 3;
    *(undefined *)(param_1 + 0x101) = 0;
    sub_08034B54(param_1);
  }
  return in_lr;
}

