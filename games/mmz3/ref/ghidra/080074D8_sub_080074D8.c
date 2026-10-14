// sub_080074D8 at 0x080074D8 (thumb)

undefined4 sub_080074D8(byte **param_1,uint param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  int *piVar5;
  undefined4 in_lr;
  
  pbVar4 = *param_1;
  piVar5 = (int *)param_1[2];
  bVar1 = *(byte *)(param_1 + 8);
  if ((bVar1 & 0x7f) != 0) {
    *(byte *)(param_1 + 8) = bVar1 & 0x80 | (bVar1 & 0x7f) - 1;
  }
  if (pbVar4 != (byte *)0x0) {
    if ((pbVar4[3] == 0) && (pbVar4[8] == 0)) {
      param_1[7] = param_1[6];
      param_1[6] = (byte *)0x0;
    }
    else {
      if (DAT_030032e3 < 0x40) {
        do {
          iVar3 = (uint)DAT_030032e3 * 0x18;
          DAT_030032e3 = DAT_030032e3 + 1;
          *(byte ***)(&DAT_030032ec + iVar3) = param_1;
          *(byte **)(&DAT_030032e8 + iVar3) = pbVar4;
          if ((param_2 & 1) == 0) {
            iVar2 = *piVar5 + (int)*(short *)(pbVar4 + 0x10);
          }
          else {
            iVar2 = *piVar5 - (int)*(short *)(pbVar4 + 0x10);
          }
          *(int *)(&DAT_030032f0 + iVar3) = iVar2;
          if ((param_2 & 2) == 0) {
            iVar2 = piVar5[1] + (int)*(short *)(pbVar4 + 0x12);
          }
          else {
            iVar2 = piVar5[1] - (int)*(short *)(pbVar4 + 0x12);
          }
          *(int *)(&DAT_030032f4 + iVar3) = iVar2;
          *(undefined2 *)(&DAT_030032f8 + iVar3) = *(undefined2 *)(pbVar4 + 0x14);
          *(undefined2 *)(&DAT_030032fa + iVar3) = *(undefined2 *)(pbVar4 + 0x16);
          *(undefined4 *)(&DAT_030032e4 + iVar3) =
               (&DAT_030038e4)[(uint)*pbVar4 * 3 + (uint)pbVar4[1]];
          (&DAT_030038e4)[(uint)*pbVar4 * 3 + (uint)pbVar4[1]] = &DAT_030032e4 + iVar3;
        } while ((pbVar4[0xb] != 0) && (pbVar4 = pbVar4 + 0x18, DAT_030032e3 < 0x40));
      }
      param_1[7] = param_1[6];
      param_1[6] = (byte *)0x0;
    }
  }
  return in_lr;
}

