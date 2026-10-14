// sub_080977C8 at 0x080977C8 (thumb)

undefined8 sub_080977C8(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 10) >> 4;
  iVar6 = *(int *)(param_1 + 0x58);
  iVar2 = iVar6 + param_2;
  *(int *)(param_1 + 0x58) = iVar2;
  iVar5 = *(int *)(param_1 + 0x54);
  if (param_2 < 1) {
    iVar3 = -0x1000;
  }
  else {
    iVar3 = 0x1000;
  }
  if ((bVar1 & 1) == 0) {
    iVar2 = sub_08009774(iVar5,iVar2 + iVar3);
  }
  else {
    iVar2 = sub_08009684(iVar5);
  }
  if (iVar5 != iVar2) {
    *(int *)(param_1 + 0x58) = iVar6;
    uVar4 = 2;
    goto LAB_08097896;
  }
  if ((bVar1 & 1) == 0) {
    uVar4 = sub_08009774(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  }
  else {
    uVar4 = sub_08009684(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  }
  *(undefined4 *)(param_1 + 0x54) = uVar4;
  if (param_2 < 1) {
    iVar2 = sub_08008F50(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + -0x1000);
  }
  else {
    iVar2 = sub_08008DE8(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x1000);
  }
  if (iVar2 < 0) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar2;
    uVar4 = 1;
    goto LAB_08097896;
  }
  iVar5 = *(int *)(param_1 + 0x58) - *(int *)(param_1 + 0xbc);
  iVar2 = iVar5;
  if (iVar5 < 0) {
    iVar2 = -iVar5;
  }
  if (0x3000 < iVar2) {
    if (param_2 < 1) {
      if (iVar5 < 0) goto LAB_08097890;
    }
    else if (-1 < iVar5) {
LAB_08097890:
      uVar4 = 3;
      goto LAB_08097896;
    }
  }
  uVar4 = 0;
LAB_08097896:
  return CONCAT44(in_lr,uVar4);
}

