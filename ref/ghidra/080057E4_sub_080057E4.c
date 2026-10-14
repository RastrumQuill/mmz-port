// sub_080057E4 at 0x080057E4 (thumb)

undefined4 sub_080057E4(int *param_1,uint param_2,uint param_3)

{
  byte bVar1;
  int *piVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  
  piVar2 = (int *)param_1[3];
  pbVar3 = (byte *)param_1[2];
  iVar5 = (int)(short)(&DAT_080c8e24)[0xff - (param_3 & 0xff)];
  iVar7 = (int)(short)(&DAT_080c8e24)[0x13f - (param_3 & 0xff)];
  bVar1 = *(byte *)(param_1 + 8);
  if ((bVar1 & 0x7f) != 0) {
    *(byte *)(param_1 + 8) = bVar1 & 0x80 | (bVar1 & 0x7f) - 1;
  }
  if (pbVar3[3] != 0) {
    bVar1 = *pbVar3;
    if ((param_2 & 1) == 0) {
      iVar6 = (int)*(short *)(pbVar3 + 8);
    }
    else {
      iVar6 = -(int)*(short *)(pbVar3 + 8);
    }
    if ((param_2 & 2) == 0) {
      iVar4 = (int)*(short *)(pbVar3 + 10);
    }
    else {
      iVar4 = -(int)*(short *)(pbVar3 + 10);
    }
    param_1[9] = *piVar2 + (iVar6 * iVar7 >> 8) + (iVar4 * iVar5 >> 8);
    param_1[10] = (piVar2[1] - (iVar6 * iVar5 >> 8)) + (iVar4 * iVar7 >> 8);
    *(undefined2 *)(param_1 + 0xb) = *(undefined2 *)(pbVar3 + 0xc);
    *(undefined2 *)((int)param_1 + 0x2e) = *(undefined2 *)(pbVar3 + 0xe);
    *param_1 = (&DAT_02004fa4)[bVar1];
    (&DAT_02004fa4)[bVar1] = param_1;
  }
  if (pbVar3[0x10] != 0) {
    bVar1 = *pbVar3;
    if ((param_2 & 1) == 0) {
      iVar6 = (int)*(short *)(pbVar3 + 0x14);
    }
    else {
      iVar6 = -(int)*(short *)(pbVar3 + 0x14);
    }
    if ((param_2 & 2) == 0) {
      iVar4 = (int)*(short *)(pbVar3 + 0x16);
    }
    else {
      iVar4 = -(int)*(short *)(pbVar3 + 0x16);
    }
    param_1[0xc] = *piVar2 + (iVar6 * iVar7 >> 8) + (iVar4 * iVar5 >> 8);
    param_1[0xd] = (piVar2[1] - (iVar6 * iVar5 >> 8)) + (iVar4 * iVar7 >> 8);
    *(undefined2 *)(param_1 + 0xe) = *(undefined2 *)(pbVar3 + 0x18);
    *(undefined2 *)((int)param_1 + 0x3a) = *(undefined2 *)(pbVar3 + 0x1a);
    param_1[1] = (int)(&DAT_02004fb0)[bVar1];
    (&DAT_02004fb0)[bVar1] = param_1;
  }
  *(undefined2 *)((int)param_1 + 0x1e) = *(undefined2 *)(param_1 + 7);
  *(undefined2 *)(param_1 + 7) = 0;
  return in_lr;
}

