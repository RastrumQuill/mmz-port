// sub_0803A354 at 0x0803A354 (thumb)

undefined4 sub_0803A354(int param_1)

{
  char cVar1;
  int iVar2;
  char cVar3;
  undefined4 in_lr;
  
  iVar2 = sub_08035BD8(*(undefined *)(param_1 + 0x13));
  if (*(char *)(param_1 + 0x12) == '\0') {
    cVar1 = *(char *)(iVar2 + 7);
    cVar3 = *(char *)(iVar2 + 8);
  }
  else {
    cVar1 = *(char *)(iVar2 + 9);
    cVar3 = *(char *)(iVar2 + 10);
  }
  sub_0803A9C0(param_1,(int)cVar1,(int)cVar3,0);
  return in_lr;
}

