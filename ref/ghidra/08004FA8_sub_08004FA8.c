// sub_08004FA8 at 0x08004FA8 (thumb)

undefined4 sub_08004FA8(int *param_1,int *param_2,int param_3,ushort *param_4)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  undefined4 in_lr;
  
  iVar8 = *param_2;
  iVar5 = param_2[1];
  uVar1 = *param_4;
  param_4 = param_4 + (iVar8 >> 4) + (iVar5 >> 4) * (uint)uVar1 + 2;
  uVar6 = 0;
  iVar3 = param_1[3];
  do {
    uVar4 = 0;
    do {
      uVar9 = (int)(short)uVar4 + (iVar8 >> 4);
      puVar7 = (undefined4 *)
               (param_3 + (((int)(uVar6 * 0x10000) >> 0x10) + (iVar5 >> 4) & 0xfU) * 0x80 +
                (uVar9 & 0xf) * 4 + (uVar9 & 0x10) * 0x80);
      uVar2 = *param_4;
      *puVar7 = *(undefined4 *)((uint)uVar2 * 8 + iVar3);
      puVar7[0x10] = *(undefined4 *)((uint)uVar2 * 8 + iVar3 + 4);
      param_4 = param_4 + 1;
      uVar9 = (int)(short)uVar4 + 1;
      uVar4 = uVar9 & 0xffff;
    } while ((int)(uVar9 * 0x10000) >> 0x10 < 0x12);
    param_4 = param_4 + (uVar1 - 0x12);
    uVar4 = uVar6 * 0x10000 + 0x10000;
    uVar6 = uVar4 >> 0x10;
  } while ((int)uVar4 >> 0x10 < 0xc);
  iVar5 = *param_2;
  *(ushort *)(param_1 + 2) = (ushort)iVar5 & 0x1ff;
  iVar3 = param_2[1];
  *(ushort *)((int)param_1 + 10) = (ushort)iVar3 & 0x1ff;
  *param_1 = iVar5;
  param_1[1] = iVar3;
  return in_lr;
}

