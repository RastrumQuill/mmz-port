// sub_080CEA68 at 0x080CEA68 (thumb)

undefined4 sub_080CEA68(int param_1)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0xc);
  iVar7 = *(int *)(iVar5 + 4);
  iVar6 = **(int **)(iVar5 + 8);
  if (iVar6 - 0x1c2000U < 0xf000) {
    return in_lr;
  }
  if ((*(byte *)(*(int *)(iVar5 + 0x2c) + 10) & 0x10) == 0) {
    iVar2 = (int)*(short *)(iVar7 + 0x10);
  }
  else {
    iVar2 = -(int)*(short *)(iVar7 + 0x10);
  }
  iVar6 = iVar6 + iVar2;
  iVar2 = (*(int **)(iVar5 + 8))[1] + (int)*(short *)(iVar7 + 0x12);
  uVar3 = (uint)(*(ushort *)(iVar7 + 0x14) >> 1);
  uVar4 = (uint)(*(ushort *)(iVar7 + 0x16) >> 1);
  sVar1 = sub_08010F08(iVar6,iVar2);
  iVar5 = iVar6;
  if (sVar1 == 0) {
    iVar5 = iVar6 + uVar3;
    iVar7 = iVar2 + uVar4;
    sVar1 = sub_08010F08(iVar5,iVar7);
    if (sVar1 != 0) {
LAB_080ceb0e:
      sub_08010F70(iVar5,iVar7);
      return in_lr;
    }
    iVar2 = iVar2 - uVar4;
    sVar1 = sub_08010F08(iVar5,iVar2);
    if (sVar1 == 0) {
      iVar5 = iVar6 - uVar3;
      sVar1 = sub_08010F08(iVar5,iVar7);
      if (sVar1 != 0) goto LAB_080ceb0e;
      sVar1 = sub_08010F08(iVar5,iVar2);
      if (sVar1 == 0) {
        *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xfffffffe;
        return in_lr;
      }
    }
  }
  sub_08010F70(iVar5,iVar2);
  return in_lr;
}

