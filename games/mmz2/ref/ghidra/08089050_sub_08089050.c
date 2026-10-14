// sub_08089050 at 0x08089050 (thumb)

undefined8 sub_08089050(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 in_lr;
  
  uVar5 = 0;
  uVar4 = ~(uint)(*(byte *)(param_1 + 10) >> 5) & 1;
  iVar2 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  if ((int)(iVar2 - (*(int *)(param_1 + 0x58) + uVar4 * 0x1000)) < 0x440) {
    *(uint *)(param_1 + 0x58) = iVar2 + uVar4 * -0x1000;
    if (0x40 < *(int *)(param_1 + 0x60)) {
      uVar5 = 2;
    }
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  if ((*(char *)(param_1 + 0x10) == '\0') || (*(char *)(param_1 + 0x10) == '\x02')) {
    bVar1 = *(byte *)(param_1 + 10) >> 4;
    iVar2 = (bVar1 & 1) * 0x1000 + -0x800;
    iVar3 = *(int *)(param_1 + 0x58) + -0x800 + uVar4 * 0x1000;
    if ((bVar1 & 1) == 0) {
      iVar2 = sub_08009240(*(int *)(param_1 + 0x54) + iVar2,iVar3);
      if ((iVar2 < 1) || (iVar2 < -0x4ff)) goto LAB_080890ee;
    }
    else {
      iVar2 = sub_080090D4(*(int *)(param_1 + 0x54) + iVar2,iVar3);
      if ((-1 < iVar2) || (0x4ff < iVar2)) goto LAB_080890ee;
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar2;
    uVar5 = 1;
  }
LAB_080890ee:
  return CONCAT44(in_lr,uVar5);
}

