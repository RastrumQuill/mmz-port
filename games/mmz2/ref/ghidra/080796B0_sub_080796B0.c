// sub_080796B0 at 0x080796B0 (thumb)

undefined4 sub_080796B0(int param_1)

{
  char cVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 in_lr;
  
  cVar1 = *(char *)(param_1 + 0x11);
  iVar7 = *(int *)(param_1 + 0x28);
  iVar8 = *(int *)(DAT_0202e130 + 0x54);
  uVar3 = sub_08079654(iVar7 + 0x54,param_1);
  uVar3 = uVar3 & 0xff;
  if (uVar3 == 0x40) {
    uVar3 = 0x41;
  }
  iVar6 = (int)(short)(&DAT_080ef450)[uVar3 + 0x40 & 0xff];
  *(int *)(param_1 + 0x5c) = iVar6 * 2;
  sVar2 = (&DAT_080ef450)[uVar3];
  *(int *)(param_1 + 0x60) = (int)sVar2 << 1;
  iVar4 = iVar6 * 0x50;
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xff;
  }
  *(int *)(param_1 + 100) = iVar4 >> 8;
  iVar5 = sVar2 * 0x50;
  if (iVar5 < 0) {
    iVar5 = iVar5 + 0xff;
  }
  *(int *)(param_1 + 0x68) = iVar5 >> 8;
  if (cVar1 == '\0') {
    if (iVar8 <= *(int *)(iVar7 + 0x54)) {
      return in_lr;
    }
  }
  else if (*(int *)(iVar7 + 0x54) <= iVar8) {
    return in_lr;
  }
  *(int *)(param_1 + 0x5c) = iVar6 * -2;
  *(int *)(param_1 + 100) = -(iVar4 >> 8);
  return in_lr;
}

