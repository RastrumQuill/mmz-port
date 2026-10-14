// sub_0807D584 at 0x0807D584 (thumb)

undefined4 sub_0807D584(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x40);
  iVar2 = *(int *)(*(int *)(param_1 + 0x10) + 0x40);
  if (*(char *)(iVar2 + 8) == '\0') {
    iVar1 = 0x280;
    if (*(char *)(iVar3 + 0x10) == '\x03') {
      iVar1 = 0x180;
    }
    if ((*(byte *)(iVar3 + 10) & 0x10) == 0) {
      sub_0801D07C(iVar2,-iVar1);
    }
    else {
      sub_0801D07C(iVar2,iVar1);
    }
    *(undefined *)(iVar3 + 0x11) = 1;
  }
  return in_lr;
}

