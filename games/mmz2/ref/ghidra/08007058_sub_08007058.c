// sub_08007058 at 0x08007058 (thumb)

undefined4 sub_08007058(byte **param_1,uint param_2,uint param_3)

{
  byte bVar1;
  short sVar2;
  short sVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  undefined4 in_lr;
  
  pbVar8 = *param_1;
  piVar4 = (int *)param_1[2];
  sVar2 = (&DAT_080ef450)[0xff - (param_3 & 0xff) & 0xff];
  sVar3 = (&DAT_080ef450)[0x13f - (param_3 & 0xff) & 0xff];
  bVar1 = *(byte *)(param_1 + 8);
  if ((bVar1 & 0x7f) != 0) {
    *(byte *)(param_1 + 8) = bVar1 & 0x80 | (bVar1 & 0x7f) - 1;
  }
  if (pbVar8 != (byte *)0x0) {
    if ((pbVar8[3] == 0) && (pbVar8[8] == 0)) {
      param_1[7] = param_1[6];
      param_1[6] = (byte *)0x0;
    }
    else {
      if (DAT_030032e3 < 0x40) {
        do {
          iVar5 = (uint)DAT_030032e3 * 0x18;
          DAT_030032e3 = DAT_030032e3 + 1;
          *(byte ***)(&DAT_030032ec + iVar5) = param_1;
          *(byte **)(&DAT_030032e8 + iVar5) = pbVar8;
          iVar7 = ((int)*(short *)(pbVar8 + 0x10) * (int)sVar3 >> 8) +
                  ((int)*(short *)(pbVar8 + 0x12) * (int)sVar2 >> 8);
          iVar6 = ((int)*(short *)(pbVar8 + 0x12) * (int)sVar3 >> 8) -
                  ((int)*(short *)(pbVar8 + 0x10) * (int)sVar2 >> 8);
          if ((param_2 & 1) == 0) {
            iVar7 = *piVar4 + iVar7;
          }
          else {
            iVar7 = *piVar4 - iVar7;
          }
          *(int *)(&DAT_030032f0 + iVar5) = iVar7;
          if ((param_2 & 2) == 0) {
            iVar6 = piVar4[1] + iVar6;
          }
          else {
            iVar6 = piVar4[1] - iVar6;
          }
          *(int *)(&DAT_030032f4 + iVar5) = iVar6;
          *(undefined2 *)(&DAT_030032f8 + iVar5) = *(undefined2 *)(pbVar8 + 0x14);
          *(undefined2 *)(&DAT_030032fa + iVar5) = *(undefined2 *)(pbVar8 + 0x16);
          *(undefined4 *)(&DAT_030032e4 + iVar5) =
               (&DAT_030038e4)[(uint)*pbVar8 * 3 + (uint)pbVar8[1]];
          (&DAT_030038e4)[(uint)*pbVar8 * 3 + (uint)pbVar8[1]] = &DAT_030032e4 + iVar5;
        } while ((pbVar8[0xb] != 0) && (pbVar8 = pbVar8 + 0x18, DAT_030032e3 < 0x40));
      }
      param_1[7] = param_1[6];
      param_1[6] = (byte *)0x0;
    }
  }
  return in_lr;
}

