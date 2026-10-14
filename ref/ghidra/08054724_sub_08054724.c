// sub_08054724 at 0x08054724 (thumb)

undefined8 sub_08054724(int param_1)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  
  iVar4 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
  if ((iVar4 < *(int *)(param_1 + 0x50)) &&
     (*(int *)(param_1 + 0x50) = iVar4, *(char *)(param_1 + 0xc) != '\x02')) {
    if (0x100 < *(int *)(param_1 + 0x58)) {
      sub_08001EAC(0x7a);
    }
    iVar4 = *(int *)(param_1 + 0x58) * 200;
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0xff;
    }
    *(int *)(param_1 + 0x58) = -(iVar4 >> 8);
  }
  bVar1 = *(byte *)(param_1 + 10) >> 4;
  iVar7 = (bVar1 & 1) * 0x2000 + -0x1000;
  iVar4 = *(int *)(param_1 + 0x50);
  iVar6 = iVar4 + -0x800;
  bVar2 = sub_080079CC(*(int *)(param_1 + 0x4c) + iVar7,iVar6);
  if (((bVar2 & 0x80) == 0) && (bVar2 != 0)) {
    if ((bVar1 & 1) == 0) {
      iVar4 = sub_08008BC0(*(int *)(param_1 + 0x4c) + iVar7,iVar6);
    }
    else {
      iVar4 = sub_080089EC(*(int *)(param_1 + 0x4c) + iVar7,iVar6);
    }
    *(int *)(param_1 + 0x4c) = iVar4 - iVar7;
    uVar5 = 1;
  }
  else {
    cVar3 = sub_080079CC(*(int *)(param_1 + 0x4c) + iVar7,iVar4 + 0x800);
    if (cVar3 == '\0') {
      uVar5 = 2;
    }
    else {
      uVar5 = 0;
    }
  }
  return CONCAT44(in_lr,uVar5);
}

