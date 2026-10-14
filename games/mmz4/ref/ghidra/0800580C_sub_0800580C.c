// sub_0800580C at 0x0800580C (thumb)

undefined4 sub_0800580C(byte **param_1)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  int *piVar4;
  undefined4 in_lr;
  
  pbVar3 = *param_1;
  piVar4 = (int *)param_1[2];
  bVar1 = *(byte *)(param_1 + 8);
  if ((bVar1 & 0x7f) != 0) {
    *(byte *)(param_1 + 8) = bVar1 & 0x80 | (bVar1 & 0x7f) - 1;
  }
  if (pbVar3 != (byte *)0x0) {
    if ((pbVar3[3] == 0) && (pbVar3[8] == 0)) {
      param_1[7] = param_1[6];
      param_1[6] = (byte *)0x0;
    }
    else {
      while (DAT_030032e3 < 0x40) {
        iVar2 = (uint)DAT_030032e3 * 0x18;
        DAT_030032e3 = DAT_030032e3 + 1;
        *(byte ***)(&DAT_030032ec + iVar2) = param_1;
        *(byte **)(&DAT_030032e8 + iVar2) = pbVar3;
        *(int *)(&DAT_030032f0 + iVar2) = *piVar4 + (int)*(short *)(pbVar3 + 0x10);
        *(int *)(&DAT_030032f4 + iVar2) = piVar4[1] + (int)*(short *)(pbVar3 + 0x12);
        *(undefined2 *)(&DAT_030032f8 + iVar2) = *(undefined2 *)(pbVar3 + 0x14);
        *(undefined2 *)(&DAT_030032fa + iVar2) = *(undefined2 *)(pbVar3 + 0x16);
        *(undefined4 *)(&DAT_030032e4 + iVar2) =
             (&DAT_030038e4)[(uint)*pbVar3 * 3 + (uint)pbVar3[1]];
        (&DAT_030038e4)[(uint)*pbVar3 * 3 + (uint)pbVar3[1]] = &DAT_030032e4 + iVar2;
        if (pbVar3[0xb] == 0) break;
        pbVar3 = pbVar3 + 0x18;
      }
      param_1[7] = param_1[6];
      param_1[6] = (byte *)0x0;
    }
  }
  return in_lr;
}

