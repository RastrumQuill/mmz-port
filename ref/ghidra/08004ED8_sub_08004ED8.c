// sub_08004ED8 at 0x08004ED8 (thumb)

undefined4 sub_08004ED8(int *param_1,int *param_2,int param_3,ushort *param_4)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint uVar8;
  int iVar9;
  undefined4 in_lr;
  
  iVar5 = *param_2;
  iVar3 = param_2[1];
  uVar1 = *param_4;
  param_4 = param_4 + (iVar5 >> 4) + (iVar3 >> 4) * (uint)uVar1 + 2;
  uVar6 = 0;
  iVar9 = param_1[3];
  do {
    uVar4 = 0;
    do {
      uVar8 = (int)(short)uVar4 + (iVar5 >> 4);
      puVar7 = (undefined4 *)
               (param_3 + (((int)(uVar6 * 0x10000) >> 0x10) + (iVar3 >> 4) & 0xfU) * 0x80 +
                (uVar8 & 0xf) * 4 + (uVar8 & 0x10) * 0x80);
      uVar2 = *param_4;
      *puVar7 = *(undefined4 *)((uint)uVar2 * 8 + iVar9);
      puVar7[0x10] = *(undefined4 *)((uint)uVar2 * 8 + iVar9 + 4);
      param_4 = param_4 + 1;
      uVar8 = (int)(short)uVar4 + 1;
      uVar4 = uVar8 & 0xffff;
    } while ((int)(uVar8 * 0x10000) >> 0x10 < 0x10);
    param_4 = param_4 + (uVar1 - 0x10);
    uVar4 = uVar6 * 0x10000 + 0x10000;
    uVar6 = uVar4 >> 0x10;
  } while ((int)uVar4 >> 0x10 < 0xb);
  iVar5 = *param_2;
  *(ushort *)(param_1 + 2) = (ushort)iVar5 & 0x1ff;
  iVar3 = param_2[1];
  *(ushort *)((int)param_1 + 10) = (ushort)iVar3 & 0x1ff;
  *param_1 = iVar5;
  param_1[1] = iVar3;
  return in_lr;
}

