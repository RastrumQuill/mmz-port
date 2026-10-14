// sub_0807A60C at 0x0807A60C (thumb)

undefined4 sub_0807A60C(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x28);
  if (((iVar5 != 0) && (*(char *)(iVar5 + 0xcf) != '\0')) && (1 < *(byte *)(param_1 + 0xd))) {
    iVar6 = *(int *)(param_1 + 0x54);
    iVar7 = iVar6;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      iVar7 = iVar6 + -0x800;
    }
    iVar3 = *(int *)(param_1 + 0x58) + 0x500;
    iVar2 = *(int *)(iVar5 + 100);
    if ((iVar2 == 0) && (*(int *)(iVar5 + 0x68) == 0)) {
      *(int *)(iVar5 + 100) = iVar7;
      *(int *)(iVar5 + 0x68) = iVar3;
    }
    else {
      iVar1 = *(int *)(iVar5 + 0x54);
      uVar4 = iVar2 - iVar1;
      if ((int)uVar4 < 0) {
        uVar4 = iVar1 - iVar2;
      }
      if ((iVar1 - iVar6) + (uVar4 & 0xffff) <= (uVar4 & 0xffff) * 2) {
        *(int *)(iVar5 + 100) = iVar7;
        *(int *)(iVar5 + 0x68) = iVar3;
      }
    }
  }
  return in_lr;
}

