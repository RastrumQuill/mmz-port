// sub_0808D814 at 0x0808D814 (thumb)

undefined8 sub_0808D814(int param_1)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  
  iVar4 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  if ((iVar4 < *(int *)(param_1 + 0x58)) &&
     (*(int *)(param_1 + 0x58) = iVar4, *(char *)(param_1 + 0xc) != '\x02')) {
    if (0x100 < *(int *)(param_1 + 0x60)) {
      sub_080032EC(0x3e);
    }
    iVar4 = *(int *)(param_1 + 0x60) * 200;
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0xff;
    }
    *(int *)(param_1 + 0x60) = -(iVar4 >> 8);
  }
  bVar1 = *(byte *)(param_1 + 10) >> 4;
  iVar7 = (bVar1 & 1) * 0x2000 + -0x1000;
  iVar4 = *(int *)(param_1 + 0x58);
  iVar6 = iVar4 + -0x800;
  cVar2 = sub_08008CFC(*(int *)(param_1 + 0x54) + iVar7,iVar6);
  if (cVar2 == '\0') {
    sVar3 = sub_08008CFC(*(int *)(param_1 + 0x54) + iVar7,iVar4 + 0x800);
    if (sVar3 == 0) {
      uVar5 = 2;
    }
    else {
      uVar5 = 0;
    }
  }
  else {
    if ((bVar1 & 1) == 0) {
      iVar4 = sub_08009774(*(int *)(param_1 + 0x54) + iVar7,iVar6);
    }
    else {
      iVar4 = sub_08009684(*(int *)(param_1 + 0x54) + iVar7,iVar6);
    }
    *(int *)(param_1 + 0x54) = iVar4 - iVar7;
    uVar5 = 1;
  }
  return CONCAT44(in_lr,uVar5);
}

