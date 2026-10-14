// sub_08034F80 at 0x08034F80 (thumb)

undefined4 sub_08034F80(int param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 in_lr;
  
  pcVar2 = (char *)(param_1 + 0x102);
  if (*pcVar2 == '\0') {
    sub_0801CFC8(param_1,0x1600,(short)*(char *)(param_1 + 0x71),(short)*(char *)(param_1 + 0x72));
    *(undefined *)(param_1 + 0x145) = 0xe;
    *pcVar2 = *pcVar2 + '\x01';
  }
  else {
    sub_0803A3BC(param_1,0x1600);
  }
  cVar1 = *(char *)(param_1 + 0x145) + -1;
  *(char *)(param_1 + 0x145) = cVar1;
  if (cVar1 == -1) {
    *(undefined *)(param_1 + 0x100) = 0;
    sub_0801CFC8(param_1,0x200,(short)*(char *)(param_1 + 0x71),(short)*(char *)(param_1 + 0x72));
  }
  return in_lr;
}

