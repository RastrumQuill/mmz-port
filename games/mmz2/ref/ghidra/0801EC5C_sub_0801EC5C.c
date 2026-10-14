// sub_0801EC5C at 0x0801EC5C (thumb)

undefined8 sub_0801EC5C(int param_1,undefined4 param_2,int param_3)

{
  byte bVar1;
  bool bVar2;
  byte *pbVar3;
  undefined4 uVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  uint *puVar8;
  byte bVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  undefined4 in_lr;
  undefined local_34;
  int local_30;
  
  if (*(char *)(param_1 + 0x197) < 0) {
    uVar7 = *(byte *)(param_1 + 10) >> 4 & 1;
    bVar1 = *(byte *)((&DAT_08333a58)[uVar7 ^ 1] + (uint)*(byte *)(param_1 + 9));
    local_30 = 2;
    do {
      local_30 = local_30 + -1;
      bVar2 = true;
      pbVar3 = *(byte **)(local_30 * 4 + *(int *)(&DAT_08333aac + param_3 * 4));
      iVar12 = 0;
      bVar9 = *pbVar3;
      uVar10 = (uint)*(byte *)(param_1 + 0x195);
      do {
        if ((bVar9 & 0xc) != 0) {
          bVar5 = bVar9 & 0xf3;
          bVar6 = bVar9 & 8;
          bVar9 = bVar1 | bVar5;
          if (bVar6 != 0) {
            bVar9 = *(byte *)((&DAT_08333a58)[uVar7] + (uint)*(byte *)(param_1 + 9)) | bVar5;
          }
        }
        iVar11 = 10;
        do {
          if (((*(uint *)(param_1 + 0x1d8 + (uVar10 >> 5) * 4) & 1 << (uVar10 & 0x1f)) != 0) ||
             (bVar6 = *(byte *)(param_1 + 0x198 + uVar10), (bVar6 & bVar1) != 0)) goto LAB_0801ed7c;
          bVar6 = bVar6 & 0xf;
          uVar10 = uVar10 - 1 & 0x3f;
          iVar11 = iVar11 + -1;
        } while ((bVar2) && ((iVar11 != 0 && (bVar6 != bVar9))));
        if (bVar2) {
          if (bVar6 == bVar9) {
            iVar12 = iVar12 + 1;
            bVar9 = pbVar3[iVar12];
          }
          else {
LAB_0801ed7c:
            bVar2 = false;
          }
        }
      } while ((bVar9 != 0) && (bVar2));
      if (local_30 == 0) {
        if (!bVar2) goto LAB_0801ed98;
        break;
      }
    } while (!bVar2);
    local_34 = (undefined)param_3;
    *(undefined *)(param_1 + 0x197) = local_34;
    bVar1 = *(byte *)(param_1 + 0x195);
    puVar8 = (uint *)(param_1 + 0x1d8 + (uint)(bVar1 >> 5) * 4);
    *puVar8 = *puVar8 | 1 << (bVar1 & 0x1f);
  }
  else if (*(char *)(param_1 + 0x197) != param_3) {
LAB_0801ed98:
    uVar4 = 0;
    goto LAB_0801edc2;
  }
  uVar4 = 1;
LAB_0801edc2:
  return CONCAT44(in_lr,uVar4);
}

