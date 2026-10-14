// sub_08034EF0 at 0x08034EF0 (thumb)

undefined4 sub_08034EF0(int param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 in_lr;
  
  pcVar2 = (char *)(param_1 + 0x102);
  if (*pcVar2 == '\0') {
    sub_0801CFC8(param_1,0x1500,(short)*(char *)(param_1 + 0x71),(short)*(char *)(param_1 + 0x72));
    sub_0803C490(param_1,3);
    *(undefined *)(param_1 + 0x145) = 2;
    *pcVar2 = *pcVar2 + '\x01';
  }
  else {
    sub_0803A3BC(param_1,0x1500);
  }
  cVar1 = *(char *)(param_1 + 0x145) + -1;
  *(char *)(param_1 + 0x145) = cVar1;
  if (cVar1 == -1) {
    *(undefined *)(param_1 + 0x101) = 2;
    *(undefined *)(param_1 + 0x102) = 0;
    sub_08034F80(param_1);
  }
  return in_lr;
}

