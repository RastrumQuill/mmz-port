// sub_0803133C at 0x0803133C (thumb)

undefined4 sub_0803133C(int param_1)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 in_lr;
  
  uVar4 = 0;
  uVar11 = 0;
  iVar2 = param_1 + 10;
  do {
    bVar1 = (&DAT_083359a4)[uVar4];
    pbVar3 = (byte *)(param_1 + 8 + uVar4);
    uVar4 = uVar4 + 1;
    if (1 < *pbVar3) {
      uVar10 = uVar11 + bVar1;
      uVar7 = uVar11;
      do {
        bVar8 = *(byte *)(iVar2 + uVar7);
        uVar9 = uVar7 + 1;
        uVar5 = uVar9;
        uVar6 = uVar7;
        do {
          if (bVar8 < *(byte *)(iVar2 + uVar5)) {
            uVar6 = uVar5;
            bVar8 = *(byte *)(iVar2 + uVar5);
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar10);
        *(byte *)(iVar2 + uVar6) = *(byte *)(iVar2 + uVar7);
        *(byte *)(iVar2 + uVar7) = bVar8;
        uVar7 = uVar9;
      } while (uVar9 < uVar10 - 1);
    }
    uVar11 = uVar11 + bVar1;
  } while (uVar4 < 2);
  return in_lr;
}

