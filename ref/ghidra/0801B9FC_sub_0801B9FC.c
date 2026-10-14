// sub_0801B9FC at 0x0801B9FC (thumb)

undefined8 sub_0801B9FC(int param_1,undefined4 param_2,byte param_3)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte *pbVar5;
  undefined4 uVar6;
  byte bVar7;
  byte bVar8;
  uint *puVar9;
  uint uVar10;
  int iVar11;
  undefined4 in_lr;
  int local_2c;
  int local_28;
  
  if (*(char *)(param_1 + 0x12f) < 0) {
    bVar8 = *(byte *)(param_1 + 10) >> 4;
    bVar2 = 4;
    if ((bVar8 & 1) != 0) {
      bVar2 = 8;
    }
    bVar3 = 4;
    if ((bVar8 & 1) != 1) {
      bVar3 = 8;
    }
    local_2c = 2;
    do {
      local_2c = local_2c + -1;
      bVar1 = true;
      pbVar5 = *(byte **)(local_2c * 4 + *(int *)(&DAT_082a97a4 + (uint)param_3 * 4));
      local_28 = 0;
      bVar8 = *pbVar5;
      uVar10 = (uint)*(byte *)(param_1 + 0x12e);
      do {
        if ((bVar8 & 0xc) != 0) {
          bVar7 = bVar8 & 0xf3;
          bVar4 = bVar8 & 8;
          bVar8 = bVar3 | bVar7;
          if (bVar4 != 0) {
            bVar8 = bVar2 | bVar7;
          }
        }
        iVar11 = 10;
        do {
          if (((*(uint *)((uVar10 >> 5) * 4 + param_1 + 0x170) & 1 << (uVar10 & 0x1f)) != 0) ||
             (bVar4 = *(byte *)(param_1 + 0x130 + uVar10), (bVar4 & bVar3) != 0)) goto LAB_0801bb10;
          bVar4 = bVar4 & 0xf;
          uVar10 = uVar10 - 1 & 0x3f;
          iVar11 = iVar11 + -1;
        } while ((bVar1) && ((iVar11 != 0 && (bVar4 != bVar8))));
        if (bVar1) {
          if (bVar4 == bVar8) {
            local_28 = local_28 + 1;
            bVar8 = pbVar5[local_28];
          }
          else {
LAB_0801bb10:
            bVar1 = false;
          }
        }
      } while ((bVar8 != 0) && (bVar1));
      if (local_2c == 0) {
        if (!bVar1) goto LAB_0801bb2e;
        break;
      }
    } while (!bVar1);
    *(byte *)(param_1 + 0x12f) = param_3;
    puVar9 = (uint *)(param_1 + 0x170 + (uint)(*(byte *)(param_1 + 0x12e) >> 5) * 4);
    *puVar9 = *puVar9 | 1 << (*(byte *)(param_1 + 0x12e) & 0x1f);
  }
  else if ((int)*(char *)(param_1 + 0x12f) != (uint)param_3) {
LAB_0801bb2e:
    uVar6 = 0;
    goto LAB_0801bb60;
  }
  uVar6 = 1;
LAB_0801bb60:
  return CONCAT44(in_lr,uVar6);
}

