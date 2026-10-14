// sub_0800174C at 0x0800174C (thumb)

undefined4 sub_0800174C(undefined *param_1)

{
  byte bVar1;
  short sVar2;
  byte *pbVar3;
  uint uVar4;
  undefined4 in_lr;
  undefined4 local_2c;
  int local_28;
  uint local_24;
  byte local_20;
  undefined local_1f;
  undefined local_1e;
  byte local_1d;
  
  sub_08001AA0();
  bVar1 = param_1[3];
  if (bVar1 == 1) {
LAB_08001784:
    *(uint *)(param_1 + 0x10) = ((uint)*(ushort *)(param_1 + 6) * 6 + (uint)(byte)param_1[1]) * 0x55
    ;
    local_24 = *(uint *)(param_1 + 0x14);
    *(uint *)(param_1 + 0x18) = local_24;
    local_2c = 0x49544e49;
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 8);
    local_28 = 0;
    local_20 = 0;
    for (uVar4 = local_24; uVar4 != 0; uVar4 = uVar4 - 1) {
      pbVar3 = *(byte **)(param_1 + 0xc);
      local_28 = local_28 + (uint)*pbVar3;
      local_20 = (*pbVar3 << (uVar4 & 7) | (byte)((int)(uint)*pbVar3 >> (8 - (uVar4 & 7) & 0xff))) ^
                 local_20;
      *(byte **)(param_1 + 0xc) = pbVar3 + 1;
    }
    local_1f = 2;
    local_1e = 6;
    local_1d = local_1d & 0x80 | param_1[1] & 0x7f | 0x80;
    sVar2 = sub_08001BB0(&local_2c,*(undefined2 *)(param_1 + 0x10),0x10);
    if (sVar2 == 0) {
      *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 8);
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 2;
      param_1[3] = 2;
      goto LAB_080018da;
    }
    sVar2 = *(short *)(param_1 + 4);
    *(short *)(param_1 + 4) = sVar2 + -1;
    if ((short)(sVar2 + -1) != 0) goto LAB_080018da;
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) goto LAB_080018da;
      *(undefined2 *)(param_1 + 4) = 3;
      *(ushort *)(param_1 + 6) = (ushort)bVar1;
      param_1[3] = 1;
      goto LAB_08001784;
    }
    if (bVar1 != 2) {
      if (bVar1 == 3) {
        if (*(short *)(param_1 + 6) == 0) {
          *(ushort *)(param_1 + 4) = (ushort)bVar1;
          *(undefined2 *)(param_1 + 6) = 1;
          param_1[3] = 1;
        }
        else {
          if (DAT_020007ac == 0) {
            DAT_020007ac = 1;
          }
          *param_1 = 0;
          *(undefined2 *)(param_1 + 2) = 0;
        }
      }
      goto LAB_080018da;
    }
    uVar4 = 8;
    if (*(uint *)(param_1 + 0x18) < 9) {
      param_1[3] = 3;
      uVar4 = *(uint *)(param_1 + 0x18);
    }
    sVar2 = sub_08001BB0(*(undefined4 *)(param_1 + 0xc),*(undefined2 *)(param_1 + 0x10),
                         (int)(short)uVar4);
    if (sVar2 == 0) {
      *(uint *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + uVar4;
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
      *(uint *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) - uVar4;
      goto LAB_080018da;
    }
    sVar2 = *(short *)(param_1 + 4);
    *(short *)(param_1 + 4) = sVar2 + -1;
    if ((short)(sVar2 + -1) != 0) {
      param_1[3] = 1;
      goto LAB_080018da;
    }
  }
  DAT_020007ac = -1;
  param_1[3] = 3;
LAB_080018da:
  sub_08001B24(param_1);
  return in_lr;
}

