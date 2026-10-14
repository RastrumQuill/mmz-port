// sub_0807181C at 0x0807181C (thumb)

undefined8 sub_0807181C(int param_1,int param_2)

{
  ushort uVar1;
  ushort uVar2;
  bool bVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 in_lr;
  
  bVar3 = false;
  uVar1 = *(ushort *)(param_2 + 4);
  uVar2 = *(ushort *)(param_2 + 4);
  iVar5 = *(int *)(param_1 + 0x54);
  uVar7 = *(undefined4 *)(param_1 + 0x58);
  uVar8 = 0;
  do {
    iVar6 = (iVar5 - (uint)(uVar2 >> 1)) + uVar8 * 0x1000;
    if (uVar8 != 0) {
      iVar6 = iVar6 + -1;
    }
    sVar4 = sub_08008CFC(iVar6,uVar7);
    if (sVar4 != 0) {
      uVar7 = sub_080093C4(iVar6,uVar7);
      bVar3 = true;
    }
    uVar8 = uVar8 + 1 & 0xff;
  } while (uVar8 <= uVar1 >> 0xc);
  if (bVar3) {
    *(undefined4 *)(param_1 + 0x58) = uVar7;
  }
  return CONCAT44(in_lr,(uint)bVar3);
}

