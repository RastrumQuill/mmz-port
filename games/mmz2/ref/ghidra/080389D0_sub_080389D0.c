// sub_080389D0 at 0x080389D0 (thumb)

undefined8 sub_080389D0(int param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  byte *pbVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 in_lr;
  
  if (((DAT_0202ebb4 & 2) == 0) && (cVar2 = sub_08037A60(param_1), cVar2 != '\0')) {
    iVar8 = 0;
    iVar9 = 0;
    do {
      bVar1 = (&DAT_083359a6)[iVar8];
      iVar7 = iVar9;
      for (uVar6 = (uint)*(byte *)(param_1 + 0x204 + iVar8); uVar6 != 0; uVar6 = uVar6 - 1) {
        pbVar5 = (byte *)(param_1 + 0x206 + iVar7);
        uVar3 = (uint)*pbVar5;
        if (uVar3 < bVar1) {
          uVar3 = uVar3 + 1;
          *pbVar5 = (byte)uVar3;
          if (bVar1 <= uVar3) {
            sub_0801E6AC(0x21);
            goto LAB_08038a6c;
          }
          sub_0801E6AC(0x20);
          uVar4 = 1;
          goto LAB_08038a6e;
        }
        iVar7 = iVar7 + 1;
      }
      iVar9 = iVar9 + (uint)(byte)(&DAT_083359a4)[iVar8];
      iVar8 = iVar8 + 1;
    } while (iVar8 < 2);
  }
LAB_08038a6c:
  uVar4 = 0;
LAB_08038a6e:
  return CONCAT44(in_lr,uVar4);
}

