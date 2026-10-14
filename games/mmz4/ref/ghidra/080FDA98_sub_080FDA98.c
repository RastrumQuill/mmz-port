// sub_080FDA98 at 0x080FDA98 (thumb)

undefined4 sub_080FDA98(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0x54) = DAT_0202ea30;
  *(undefined4 *)(param_1 + 0x58) = DAT_0202ea34;
  if (*(char *)(param_1 + 0xd) != '\0') {
    iVar2 = *(int *)(param_1 + 100);
    iVar6 = *(int *)(param_1 + 0x68);
    iVar4 = *(int *)(param_1 + 0x5c);
    iVar3 = *(int *)(param_1 + 0x60);
    sVar1 = sub_080146BC(iVar2,iVar6);
    if (sVar1 != 0) {
      sub_080FDDB8(param_1,iVar2,iVar6);
    }
    iVar5 = iVar2 + iVar4;
    iVar7 = iVar6 + iVar3;
    sVar1 = sub_080146BC(iVar5,iVar7);
    if (sVar1 != 0) {
      sub_080FDDB8(param_1,iVar5,iVar7);
    }
    iVar6 = iVar6 - iVar3;
    sVar1 = sub_080146BC(iVar5,iVar6);
    if (sVar1 != 0) {
      sub_080FDDB8(param_1,iVar5,iVar6);
    }
    iVar2 = iVar2 - iVar4;
    sVar1 = sub_080146BC(iVar2,iVar7);
    if (sVar1 != 0) {
      sub_080FDDB8(param_1,iVar2,iVar7);
    }
    sVar1 = sub_080146BC(iVar2,iVar6);
    if (sVar1 != 0) {
      sub_080FDDB8(param_1,iVar2,iVar6);
    }
    *(undefined *)(param_1 + 0xd) = 0;
  }
  return in_lr;
}

