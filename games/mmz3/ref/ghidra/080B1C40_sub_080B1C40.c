// sub_080B1C40 at 0x080B1C40 (thumb)

undefined4 sub_080B1C40(int param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  cVar2 = '\0';
  iVar4 = *(int *)(param_1 + 0x2c);
  iVar3 = *(int *)(*(int *)(param_1 + 0xc) + 0x2c);
  if ((*(char *)(iVar3 + 0x11) == '\0') && (*(char *)(iVar4 + 0x11) == '\x02')) {
    cVar2 = '\x01';
  }
  cVar1 = *(char *)(iVar3 + 0x11);
  if ((cVar1 == '\x01') && (*(char *)(iVar4 + 0x11) == '\0')) {
    cVar2 = '\x01';
  }
  if ((cVar1 == '\x02') && (*(char *)(iVar4 + 0x11) == '\x01')) {
    cVar2 = '\x01';
  }
  if (cVar2 != '\0') {
    *(char *)(iVar4 + 0xbc) = cVar2;
  }
  return in_lr;
}

