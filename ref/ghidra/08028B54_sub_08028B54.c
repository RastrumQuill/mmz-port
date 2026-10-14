// sub_08028B54 at 0x08028B54 (thumb)

undefined4 sub_08028B54(int param_1)

{
  undefined uVar1;
  int iVar2;
  undefined4 in_lr;
  char cVar3;
  
  cVar3 = *(char *)(param_1 + 0x13);
  iVar2 = -1;
  if (cVar3 != '\0') {
    iVar2 = 1;
  }
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + iVar2 * 0x600;
  sub_080292A4(param_1);
  iVar2 = *(byte *)(param_1 + 0x12) - 1;
  *(char *)(param_1 + 0x12) = (char)iVar2;
  if ((iVar2 == 0) || (*(char *)(param_1 + 0x62) != '\0')) {
    if (*(char *)(param_1 + 0x62) != '\0') {
      cVar3 = cVar3 == '\0';
    }
    if (iVar2 == 0) {
      *(undefined *)(param_1 + 0xe) = 3;
      *(char *)(param_1 + 0xf) = (char)iVar2;
    }
    else {
      *(undefined *)(param_1 + 0xe) = 2;
    }
    uVar1 = 0;
    if (cVar3 == '\0') {
      uVar1 = 0x80;
    }
    *(undefined *)(param_1 + 0x13) = uVar1;
  }
  return in_lr;
}

