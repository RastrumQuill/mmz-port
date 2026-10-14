// sub_0807D5C8 at 0x0807D5C8 (thumb)

undefined4 sub_0807D5C8(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x40);
  if ((*(char *)(*(int *)(iVar2 + 0x20) + 0x11) == '\0') &&
     (iVar3 = *(int *)(*(int *)(param_1 + 0x10) + 0x40), *(char *)(iVar3 + 8) == '\0')) {
    iVar1 = 0x280;
    if (*(char *)(iVar2 + 0x10) == '\0') {
      iVar1 = 0x180;
    }
    if ((*(byte *)(iVar2 + 10) & 0x10) == 0) {
      sub_0801D07C(iVar3,-iVar1);
    }
    else {
      sub_0801D07C(iVar3,iVar1);
    }
  }
  return in_lr;
}

