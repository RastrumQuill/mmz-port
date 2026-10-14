// sub_080534D0 at 0x080534D0 (thumb)

undefined8 sub_080534D0(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar3 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
  if (iVar3 - *(int *)(param_1 + 0x50) < 0x440) {
    *(int *)(param_1 + 0x50) = iVar3;
  }
  bVar1 = *(byte *)(param_1 + 10) >> 4;
  iVar6 = (bVar1 & 1) * 0x2000 + -0x1000;
  iVar3 = *(int *)(param_1 + 0x50);
  iVar5 = iVar3 + -0x800;
  cVar2 = sub_080079CC(*(int *)(param_1 + 0x4c) + iVar6,iVar5);
  if (cVar2 == '\0') {
    cVar2 = sub_080079CC(*(int *)(param_1 + 0x4c) + iVar6,iVar3 + 0x800);
    if (cVar2 != '\0') {
      uVar4 = 0;
      goto LAB_0805355c;
    }
  }
  else {
    if ((bVar1 & 1) == 0) {
      iVar3 = sub_08008BC0(*(int *)(param_1 + 0x4c) + iVar6,iVar5);
    }
    else {
      iVar3 = sub_080089EC(*(int *)(param_1 + 0x4c) + iVar6,iVar5);
    }
    *(int *)(param_1 + 0x4c) = iVar3 - iVar6;
  }
  uVar4 = 1;
LAB_0805355c:
  return CONCAT44(in_lr,uVar4);
}

