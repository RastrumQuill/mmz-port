// sub_08032BF8 at 0x08032BF8 (thumb)

undefined8 sub_08032BF8(int param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  byte bVar11;
  undefined4 in_lr;
  
  pbVar7 = (byte *)(param_1 + 0x195);
  bVar1 = *pbVar7;
  uVar8 = (uint)bVar1;
  if ((*(byte *)(param_1 + 0x198 + uVar8) & 0x40) == 0) {
    pbVar6 = (byte *)(param_1 + 0x196);
    bVar2 = *pbVar6;
    uVar10 = uVar8 - 1 & 0x3f;
    bVar11 = *(byte *)(param_1 + 0x198 + uVar10);
    iVar9 = 4;
    do {
      uVar5 = sub_0801E91C(param_1);
      uVar5 = uVar5 & 0xff;
      if (uVar5 == 0) {
        *pbVar7 = (byte)uVar10;
        uVar10 = uVar10 - 1 & 0x3f;
        bVar3 = *(byte *)(param_1 + 0x198 + uVar10);
        *pbVar6 = bVar11 & ~bVar3;
        bVar11 = bVar3;
      }
      iVar9 = iVar9 + -1;
    } while ((uVar5 == 0) && (iVar9 != 0));
    if (uVar5 != 0) {
      do {
        uVar10 = uVar10 + 1 & 0x3f;
        *pbVar7 = (byte)uVar10;
        cVar4 = sub_0801E978(param_1);
        uVar5 = (uint)(cVar4 == '\0');
        if (uVar5 == 0) break;
      } while (uVar10 != uVar8);
    }
    *pbVar7 = bVar1;
    *pbVar6 = bVar2;
  }
  else {
    uVar5 = 0x40;
  }
  return CONCAT44(in_lr,uVar5);
}

