// sub_0809D9D8 at 0x0809D9D8 (thumb)

undefined4 sub_0809D9D8(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,0x6e01);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  cVar1 = sub_0809DE24(param_1);
  if (cVar1 != '\x01') {
    iVar2 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = iVar2;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      if ((iVar2 < *(int *)(param_1 + 0xb4)) || (cVar1 = sub_0809DBD4(param_1), cVar1 != '\0')) {
        sub_0809DEBC(param_1);
      }
    }
    else if ((*(int *)(param_1 + 0xb8) < iVar2) || (cVar1 = sub_0809DBD4(param_1), cVar1 != '\0')) {
      sub_0809DEBC(param_1);
    }
  }
  return in_lr;
}

