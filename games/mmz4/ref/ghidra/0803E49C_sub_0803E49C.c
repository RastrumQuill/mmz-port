// sub_0803E49C at 0x0803E49C (thumb)

undefined4 sub_0803E49C(int param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0xb4);
  bVar2 = *(byte *)(param_1 + 0xd);
  if (bVar2 != 1) {
    if (1 < bVar2) {
      if (bVar2 == 2) {
        cVar1 = *(char *)(param_1 + 0x12) + -1;
        *(char *)(param_1 + 0x12) = cVar1;
        if (cVar1 != '\0') {
          return in_lr;
        }
        sub_0801CF00(param_1,0x8103);
        *(undefined *)(iVar3 + 0x154) = 3;
        *(undefined *)(param_1 + 0x12) = 0x10;
      }
      else {
        if (bVar2 != 3) {
          return in_lr;
        }
        cVar1 = *(char *)(param_1 + 0x12) + -1;
        *(char *)(param_1 + 0x12) = cVar1;
        if (cVar1 != '\0') {
          return in_lr;
        }
        *(undefined *)(iVar3 + 0x154) = 4;
      }
      goto LAB_0803e5be;
    }
    if (bVar2 != 0) {
      return in_lr;
    }
    sub_0801CF00(param_1,0x8104);
    cVar1 = sub_0803AD90(param_1,0);
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      if (0x7e < (byte)(cVar1 + 0xbfU)) goto LAB_0803e504;
      bVar2 = 0x80 - (cVar1 - 0x40U & 0x7f);
    }
    else if ((byte)(cVar1 - 0x40U) < 0x81) {
LAB_0803e504:
      bVar2 = 0x40;
    }
    else {
      bVar2 = cVar1 + 0x40U & 0x7f;
    }
    cVar1 = *(char *)(iVar3 + 0xe6);
    if (cVar1 != '\0') {
      if (cVar1 != -1) {
        *(char *)(iVar3 + 0xe6) = cVar1 + -1;
      }
      sub_0803F03C(iVar3,param_1,0,*(undefined *)(iVar3 + 0xc2),0x380,bVar2,2,
                   *(undefined *)(param_1 + 0x13));
    }
    *(undefined *)(iVar3 + 0x154) = 0;
    *(undefined *)(param_1 + 0x12) = 2;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 != '\0') {
    return in_lr;
  }
  *(undefined *)(iVar3 + 0x154) = 1;
  *(undefined *)(param_1 + 0x12) = 4;
LAB_0803e5be:
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  return in_lr;
}

