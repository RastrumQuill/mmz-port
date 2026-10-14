// sub_080602B4 at 0x080602B4 (thumb)

undefined8 sub_080602B4(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 10) >> 4;
  iVar6 = *(int *)(param_1 + 0x50);
  iVar2 = iVar6 + param_2;
  *(int *)(param_1 + 0x50) = iVar2;
  iVar5 = *(int *)(param_1 + 0x4c);
  if (param_2 < 1) {
    iVar3 = -0x1000;
  }
  else {
    iVar3 = 0x1000;
  }
  if ((bVar1 & 1) == 0) {
    iVar2 = sub_08008BC0(iVar5,iVar2 + iVar3);
  }
  else {
    iVar2 = sub_080089EC(iVar5);
  }
  if (iVar5 != iVar2) {
    *(int *)(param_1 + 0x50) = iVar6;
    uVar4 = 2;
    goto LAB_08060382;
  }
  if ((bVar1 & 1) == 0) {
    uVar4 = sub_08008BC0(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
  }
  else {
    uVar4 = sub_080089EC(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
  }
  *(undefined4 *)(param_1 + 0x4c) = uVar4;
  if (param_2 < 1) {
    iVar2 = sub_08007CF8(*(undefined4 *)(param_1 + 0x4c),*(int *)(param_1 + 0x50) + -0x1000);
  }
  else {
    iVar2 = sub_08007B30(*(undefined4 *)(param_1 + 0x4c),*(int *)(param_1 + 0x50) + 0x1000);
  }
  if (iVar2 < 0) {
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + iVar2;
    uVar4 = 1;
    goto LAB_08060382;
  }
  iVar5 = *(int *)(param_1 + 0x50) - *(int *)(param_1 + 0xc0);
  iVar2 = iVar5;
  if (iVar5 < 0) {
    iVar2 = -iVar5;
  }
  if (0x3000 < iVar2) {
    if (param_2 < 1) {
      if (iVar5 < 0) goto LAB_0806037c;
    }
    else if (-1 < iVar5) {
LAB_0806037c:
      uVar4 = 3;
      goto LAB_08060382;
    }
  }
  uVar4 = 0;
LAB_08060382:
  return CONCAT44(in_lr,uVar4);
}

