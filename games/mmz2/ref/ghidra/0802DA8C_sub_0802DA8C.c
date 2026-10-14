// sub_0802DA8C at 0x0802DA8C (thumb)

undefined4 sub_0802DA8C(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = sub_080338F0(param_1,1);
  if ((iVar2 < 1) || (cVar1 = sub_08036E60(param_1), cVar1 == '\0')) {
    if ((*(char *)(param_1 + 0x1fc) == '\x05') && (iVar2 = sub_080338F0(param_1,1), 0 < iVar2)) {
      sub_08034F4C(param_1);
    }
    else if (*(char *)(param_1 + 0x73) == '\x03') {
      sub_08035238(param_1);
      sub_0803543C(param_1);
    }
  }
  else {
    sub_08034ED4(param_1);
  }
  return in_lr;
}

