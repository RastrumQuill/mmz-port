// sub_0810C36C at 0x0810C36C (thumb)

undefined4 sub_0810C36C(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x28);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  sub_0801CFF0(param_1);
  if ((1 < *(byte *)(iVar2 + 1)) && (1 < *(byte *)(iVar2 + 3))) {
    if (*(char *)(param_1 + 0x11) == '\0') {
      cVar1 = *(char *)(iVar2 + 0xdda);
    }
    else {
      cVar1 = *(char *)(iVar2 + 0xddb);
    }
    if (cVar1 != '\0') {
      return in_lr;
    }
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  return in_lr;
}

