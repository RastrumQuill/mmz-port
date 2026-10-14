// sub_080075E0 at 0x080075E0 (thumb)

undefined4 sub_080075E0(byte **param_1,uint param_2,uint param_3)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  undefined4 in_lr;
  
  pbVar8 = *param_1;
  piVar2 = (int *)param_1[2];
  iVar6 = (int)*(short *)((int)&DAT_080fe64c + ((0xff - (param_3 & 0xff)) * 0x1000000 >> 0x17));
  iVar4 = (int)*(short *)((int)&DAT_080fe64c + ((0x3f - (param_3 & 0xff)) * 0x1000000 >> 0x17));
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
          iVar3 = (uint)DAT_030032e3 * 0x18;
          DAT_030032e3 = DAT_030032e3 + 1;
          *(byte ***)(&DAT_030032ec + iVar3) = param_1;
          *(byte **)(&DAT_030032e8 + iVar3) = pbVar8;
          iVar7 = (*(short *)(pbVar8 + 0x10) * iVar4 >> 8) +
                  (*(short *)(pbVar8 + 0x12) * iVar6 >> 8);
          iVar5 = (*(short *)(pbVar8 + 0x12) * iVar4 >> 8) -
                  (*(short *)(pbVar8 + 0x10) * iVar6 >> 8);
          if ((param_2 & 1) == 0) {
            iVar7 = *piVar2 + iVar7;
          }
          else {
            iVar7 = *piVar2 - iVar7;
          }
          *(int *)(&DAT_030032f0 + iVar3) = iVar7;
          if ((param_2 & 2) == 0) {
            iVar5 = piVar2[1] + iVar5;
          }
          else {
            iVar5 = piVar2[1] - iVar5;
          }
          *(int *)(&DAT_030032f4 + iVar3) = iVar5;
          *(undefined2 *)(&DAT_030032f8 + iVar3) = *(undefined2 *)(pbVar8 + 0x14);
          *(undefined2 *)(&DAT_030032fa + iVar3) = *(undefined2 *)(pbVar8 + 0x16);
          *(undefined4 *)(&DAT_030032e4 + iVar3) =
               (&DAT_030038e4)[(uint)*pbVar8 * 3 + (uint)pbVar8[1]];
          (&DAT_030038e4)[(uint)*pbVar8 * 3 + (uint)pbVar8[1]] = &DAT_030032e4 + iVar3;
        } while ((pbVar8[0xb] != 0) && (pbVar8 = pbVar8 + 0x18, DAT_030032e3 < 0x40));
      }
      param_1[7] = param_1[6];
      param_1[6] = (byte *)0x0;
    }
  }
  return in_lr;
}

