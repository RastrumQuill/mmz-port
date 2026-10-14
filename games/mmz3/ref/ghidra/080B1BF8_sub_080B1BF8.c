// sub_080B1BF8 at 0x080B1BF8 (thumb)

undefined4 sub_080B1BF8(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  cVar1 = '\0';
  iVar3 = *(int *)(param_1 + 0x2c);
  iVar2 = *(int *)(*(int *)(param_1 + 0xc) + 0x2c);
  if ((*(char *)(iVar3 + 0x11) == '\0') && (*(char *)(iVar2 + 0x11) == '\x02')) {
    cVar1 = '\x01';
  }
  if ((*(char *)(iVar3 + 0x11) == '\x01') && (*(char *)(iVar2 + 0x11) == '\0')) {
    cVar1 = '\x01';
  }
  if ((*(char *)(iVar3 + 0x11) == '\x02') && (*(char *)(iVar2 + 0x11) == '\x01')) {
    cVar1 = '\x01';
  }
  *(char *)(iVar3 + 0xbc) = '\x01';
  if (cVar1 != '\0') {
    *(char *)(iVar3 + 0xbc) = cVar1;
  }
  return in_lr;
}

