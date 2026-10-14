// sub_08080594 at 0x08080594 (thumb)

undefined8 sub_08080594(int param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar3 = sub_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  if ((iVar3 - *(int *)(param_1 + 0x58) < 0x440) &&
     (*(int *)(param_1 + 0x58) = iVar3, 0x40 < *(int *)(param_1 + 0x60))) {
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  bVar1 = *(byte *)(param_1 + 10) >> 4;
  iVar5 = (bVar1 & 1) * 0x2000 + -0x1000;
  iVar3 = *(int *)(param_1 + 0x58) + -0x800;
  sVar2 = sub_08007C7C(*(int *)(param_1 + 0x54) + iVar5,iVar3);
  if (sVar2 == 0) {
    uVar4 = 0;
  }
  else {
    if ((bVar1 & 1) == 0) {
      iVar3 = sub_08008988(*(int *)(param_1 + 0x54) + iVar5,iVar3);
    }
    else {
      iVar3 = sub_08008868(*(int *)(param_1 + 0x54) + iVar5,iVar3);
    }
    *(int *)(param_1 + 0x54) = iVar3 - iVar5;
    uVar4 = 1;
  }
  return CONCAT44(in_lr,uVar4);
}

