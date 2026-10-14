// sub_080056D4 at 0x080056D4 (thumb)

undefined4 sub_080056D4(int *param_1,uint param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  int *piVar4;
  undefined4 in_lr;
  
  piVar4 = (int *)param_1[3];
  pbVar2 = (byte *)param_1[2];
  bVar1 = *(byte *)(param_1 + 8);
  if ((bVar1 & 0x7f) != 0) {
    *(byte *)(param_1 + 8) = bVar1 & 0x80 | (bVar1 & 0x7f) - 1;
  }
  if (pbVar2[3] != 0) {
    bVar1 = *pbVar2;
    if ((param_2 & 1) == 0) {
      iVar3 = *piVar4 + (int)*(short *)(pbVar2 + 8);
    }
    else {
      iVar3 = *piVar4 - (int)*(short *)(pbVar2 + 8);
    }
    param_1[9] = iVar3;
    if ((param_2 & 2) == 0) {
      iVar3 = piVar4[1] + (int)*(short *)(pbVar2 + 10);
    }
    else {
      iVar3 = piVar4[1] - (int)*(short *)(pbVar2 + 10);
    }
    param_1[10] = iVar3;
    *(undefined2 *)(param_1 + 0xb) = *(undefined2 *)(pbVar2 + 0xc);
    *(undefined2 *)((int)param_1 + 0x2e) = *(undefined2 *)(pbVar2 + 0xe);
    *param_1 = (&DAT_02004fa4)[bVar1];
    (&DAT_02004fa4)[bVar1] = param_1;
  }
  if (pbVar2[0x10] != 0) {
    bVar1 = *pbVar2;
    if ((param_2 & 1) == 0) {
      iVar3 = *piVar4 + (int)*(short *)(pbVar2 + 0x14);
    }
    else {
      iVar3 = *piVar4 - (int)*(short *)(pbVar2 + 0x14);
    }
    param_1[0xc] = iVar3;
    if ((param_2 & 2) == 0) {
      iVar3 = piVar4[1] + (int)*(short *)(pbVar2 + 0x16);
    }
    else {
      iVar3 = piVar4[1] - (int)*(short *)(pbVar2 + 0x16);
    }
    param_1[0xd] = iVar3;
    *(undefined2 *)(param_1 + 0xe) = *(undefined2 *)(pbVar2 + 0x18);
    *(undefined2 *)((int)param_1 + 0x3a) = *(undefined2 *)(pbVar2 + 0x1a);
    param_1[1] = (int)(&DAT_02004fb0)[bVar1];
    (&DAT_02004fb0)[bVar1] = param_1;
  }
  *(undefined2 *)((int)param_1 + 0x1e) = *(undefined2 *)(param_1 + 7);
  *(undefined2 *)(param_1 + 7) = 0;
  return in_lr;
}

