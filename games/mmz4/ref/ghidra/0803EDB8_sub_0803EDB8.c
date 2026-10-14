// sub_0803EDB8 at 0x0803EDB8 (thumb)

undefined4 sub_0803EDB8(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0xb4);
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        cVar2 = *(char *)(param_1 + 0x12) + -1;
        *(char *)(param_1 + 0x12) = cVar2;
        if (cVar2 != '\0') {
          return in_lr;
        }
        cVar2 = *(char *)(param_1 + 0x13);
        *(char *)(param_1 + 0x13) = cVar2 + '\x01';
        if ((byte)(cVar2 + 1U) < 3) {
          *(undefined *)(iVar3 + 0x154) = 2;
          *(undefined *)(param_1 + 0xd) = 0;
          return in_lr;
        }
        *(undefined *)(iVar3 + 0x154) = 3;
        *(undefined *)(param_1 + 0x12) = 2;
      }
      else {
        if (bVar1 != 3) {
          return in_lr;
        }
        cVar2 = *(char *)(param_1 + 0x12) + -1;
        *(char *)(param_1 + 0x12) = cVar2;
        if (cVar2 != '\0') {
          return in_lr;
        }
        *(undefined *)(iVar3 + 0x154) = 4;
      }
      goto LAB_0803eeaa;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    sub_0801CF00(param_1,*(byte *)(param_1 + 0x13) + 0x8033);
    if (*(char *)(param_1 + 0x13) == '\0') {
      cVar2 = *(char *)(iVar3 + 0xe6);
      if (cVar2 == '\0') {
        *(undefined *)(param_1 + 0x13) = 3;
      }
      else {
        if (cVar2 != -1) {
          *(char *)(iVar3 + 0xe6) = cVar2 + -1;
        }
        sub_08049238(iVar3,param_1,*(undefined *)(param_1 + 0x13));
        sub_08002B10(0x6e);
      }
    }
    else {
      sub_08049238(iVar3,param_1,*(char *)(param_1 + 0x13));
    }
    *(undefined *)(iVar3 + 0x154) = 0;
    *(undefined *)(param_1 + 0x12) = 2;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 != '\0') {
    return in_lr;
  }
  *(undefined *)(iVar3 + 0x154) = 1;
  *(undefined *)(param_1 + 0x12) = 2;
LAB_0803eeaa:
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  return in_lr;
}

