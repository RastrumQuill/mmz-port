// sub_080C39C4 at 0x080C39C4 (thumb)

undefined8 sub_080C39C4(int param_1)

{
  byte bVar1;
  byte bVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  int iVar8;
  int iVar9;
  undefined4 in_lr;
  
  iVar4 = *(byte *)(param_1 + 6) - 1;
  if (iVar4 < 1) {
    iVar4 = *(int *)(param_1 + 0x10);
    sVar3 = *(short *)(iVar4 + 0x8c);
    uVar5 = sub_0801C5CC();
    pbVar6 = (byte *)((uint)*(byte *)(param_1 + 5) + iVar4 + 0x17c);
    bVar1 = *pbVar6;
    iVar8 = sVar3 + 1;
    *(short *)(iVar4 + 0x8c) = (short)iVar8;
    iVar9 = bVar1 - 1;
    *pbVar6 = (byte)iVar9;
    sub_08001EAC(0x1d);
    if (((int)(uVar5 & 0xff) <= iVar8) || (iVar9 == 0)) {
      *(undefined *)(param_1 + 1) = 0;
      iVar8 = *(byte *)(iVar4 + 0x17b) - 1;
      while (iVar9 = iVar8, iVar9 != 0) {
        iVar8 = iVar9 + -1;
        if (-1 < iVar8) {
          pbVar7 = (byte *)(iVar4 + 0x17c + iVar9);
          pbVar6 = (byte *)(iVar9 + 0x17b + iVar4);
          iVar9 = iVar8;
          do {
            bVar1 = *pbVar7;
            if (*pbVar6 < bVar1) {
              bVar2 = *pbVar6;
              *pbVar6 = bVar1;
              *pbVar7 = bVar2;
            }
            pbVar6 = pbVar6 + -1;
            iVar9 = iVar9 + -1;
          } while (-1 < iVar9);
        }
      }
      goto LAB_080c3a68;
    }
    iVar4 = 4;
  }
  *(char *)(param_1 + 6) = (char)iVar4;
LAB_080c3a68:
  return CONCAT44(in_lr,2);
}

