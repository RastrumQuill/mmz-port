// sub_080B44B0 at 0x080B44B0 (thumb)

char sub_080B44B0(int param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  
  cVar3 = '\0';
  iVar2 = 3;
  piVar1 = (int *)(param_1 + 0xfc);
  do {
    piVar1 = piVar1 + -1;
    iVar2 = iVar2 + -1;
    if (*piVar1 != 0) {
      cVar3 = cVar3 + '\x01';
    }
  } while (iVar2 != 0);
  return cVar3;
}

