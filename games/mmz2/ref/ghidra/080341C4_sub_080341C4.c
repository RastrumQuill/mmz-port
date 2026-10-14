// sub_080341C4 at 0x080341C4 (thumb)

undefined8 sub_080341C4(int param_1)

{
  byte bVar1;
  byte bVar2;
  undefined uVar3;
  byte *pbVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  undefined4 in_lr;
  
  if (*(byte *)(param_1 + 0x17a) != 3) {
    uVar6 = 1;
    goto LAB_080343e6;
  }
  pbVar4 = (byte *)(param_1 + 0x17d);
  bVar1 = *pbVar4;
  uVar7 = (uint)bVar1;
  bVar2 = *(byte *)(param_1 + 0xd);
  uVar9 = (uint)bVar2;
  if ((uVar9 == 1) && (uVar7 == 3)) {
    *(byte *)(param_1 + 0x17a) = *(byte *)(param_1 + 0x176);
    *(byte *)(param_1 + 0x176) = bVar1;
    *(byte *)(param_1 + 0x17b) = *(byte *)(param_1 + 0x177);
    *(byte *)(param_1 + 0x177) = bVar2;
    *(byte *)(param_1 + 0x17c) = *(byte *)(param_1 + 0x178);
    *(byte *)(param_1 + 0x178) = bVar2;
    *pbVar4 = *(byte *)(param_1 + 0x179);
    *(byte *)(param_1 + 0x179) = 4;
  }
  else {
    *(undefined *)(param_1 + 0x17a) = *(undefined *)(param_1 + 0x176);
    *(undefined *)(param_1 + 0x176) = 3;
    *(undefined *)(param_1 + 0x17b) = *(undefined *)(param_1 + 0x177);
    *(undefined *)(param_1 + 0x177) = 2;
    *(undefined *)(param_1 + 0x17c) = *(undefined *)(param_1 + 0x178);
    *(undefined *)(param_1 + 0x178) = 1;
    *pbVar4 = *(byte *)(param_1 + 0x179);
    *(byte *)(param_1 + 0x179) = bVar1;
  }
  uVar8 = (uint)*(byte *)(param_1 + 0x174);
  if ((uVar8 == 2) && (uVar7 == 1)) {
    uVar5 = (uint)*(byte *)(param_1 + 0x2b9);
    if (uVar5 < 5) {
      uVar11 = 1;
    }
    else {
      uVar11 = 0;
      uVar5 = uVar5 - 4;
    }
  }
  else {
    uVar11 = (uint)*(char *)(param_1 + 0x71);
    uVar5 = (uint)*(char *)(param_1 + 0x72);
  }
  if ((uVar9 == 2) && (uVar7 == 1)) {
    sub_0801E9FC(param_1,0x42);
    if (uVar11 == 0) {
      uVar5 = uVar5 + 4;
    }
    *(char *)(param_1 + 0x2b9) = (char)uVar5;
  }
  else {
    if (uVar7 == 3) {
      if (uVar11 < 9) {
        uVar11 = 0;
      }
      else {
        uVar12 = uVar11 - 9;
        iVar10 = (byte)(&DAT_08335c70)[uVar12 + uVar8 * 3] - uVar5;
        if (uVar12 != 0) {
          pbVar4 = &DAT_08335c70 + uVar12 + uVar8 * 3;
          do {
            pbVar4 = pbVar4 + -1;
            uVar12 = uVar12 - 1;
            iVar10 = iVar10 + (uint)*pbVar4;
          } while (uVar12 != 0);
        }
        uVar3 = (&DAT_08335c7d)[uVar8 * 2];
        iVar10 = iVar10 * (uint)(byte)(&DAT_08335c7d)[uVar9 * 2];
        uVar8 = sub_080EF150(iVar10,uVar3);
        iVar10 = sub_080EF1E8(iVar10,uVar3);
        if (iVar10 != 0) {
          uVar8 = uVar8 + 1;
        }
        uVar5 = (uint)(byte)(&DAT_08335c7d)[uVar9 * 2];
        if (uVar5 < uVar8) {
          uVar8 = uVar5;
        }
        uVar5 = (uint)(byte)(&DAT_08335c70)[uVar9 * 3];
        uVar11 = (uint)(byte)(&DAT_08335c7c)[uVar9 * 2];
        if (uVar12 < uVar11) {
          if (uVar5 <= uVar8) {
            pbVar4 = &DAT_08335c70 + uVar9 * 3 + uVar12;
            do {
              pbVar4 = pbVar4 + 1;
              uVar12 = uVar12 + 1;
              if (uVar11 <= uVar12) goto LAB_080343b0;
              uVar8 = uVar8 - uVar5;
              uVar5 = (uint)*pbVar4;
            } while (uVar5 <= uVar8);
          }
          if (uVar12 < uVar11) {
            uVar5 = uVar5 - uVar8;
            if (uVar5 == 0) {
              uVar5 = 1;
            }
            uVar11 = uVar12 + 1;
            goto LAB_080343b8;
          }
        }
LAB_080343b0:
        uVar5 = 1;
      }
LAB_080343b8:
      if (uVar9 != 1) {
        uVar11 = uVar11 + 8;
      }
    }
    sub_0801EA38(param_1,*(undefined *)((int)&DAT_08335c60 + uVar7 + uVar9 * 3 + 3),uVar11,uVar5);
  }
  uVar6 = 3;
LAB_080343e6:
  return CONCAT44(in_lr,uVar6);
}

