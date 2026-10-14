// sub_0805285C at 0x0805285C (thumb)

undefined8 sub_0805285C(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar3 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
  if ((iVar3 - *(int *)(param_1 + 0x50) < 0x440) &&
     (*(int *)(param_1 + 0x50) = iVar3, 0x40 < *(int *)(param_1 + 0x58))) {
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  bVar1 = *(byte *)(param_1 + 10) >> 4;
  iVar5 = (bVar1 & 1) * 0x2000 + -0x1000;
  iVar3 = *(int *)(param_1 + 0x50) + -0x800;
  cVar2 = sub_080079CC(*(int *)(param_1 + 0x4c) + iVar5,iVar3);
  if (cVar2 == '\0') {
    uVar4 = 0;
  }
  else {
    if ((bVar1 & 1) == 0) {
      iVar3 = sub_08008BC0(*(int *)(param_1 + 0x4c) + iVar5,iVar3);
    }
    else {
      iVar3 = sub_080089EC(*(int *)(param_1 + 0x4c) + iVar5,iVar3);
    }
    *(int *)(param_1 + 0x4c) = iVar3 - iVar5;
    uVar4 = 1;
  }
  return CONCAT44(in_lr,uVar4);
}

