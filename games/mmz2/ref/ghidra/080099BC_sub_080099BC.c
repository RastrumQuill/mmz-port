// sub_080099BC at 0x080099BC (thumb)

undefined4 sub_080099BC(short param_1,undefined2 param_2,int *param_3,short *param_4)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  uVar2 = (uint)DAT_020011d2;
  if (0x1f < uVar2 + 1) {
    return in_lr;
  }
  DAT_020011d2 = (byte)(uVar2 + 1);
  *(short *)(&DAT_020011d4 + uVar2 * 0x18) = param_1;
  (&DAT_020011d6)[uVar2 * 0xc] = param_2;
  (&DAT_020011dc)[uVar2 * 6] = *param_3 + (int)*param_4;
  (&DAT_020011e0)[uVar2 * 6] = param_3[1] + (int)param_4[1];
  iVar3 = 0;
  if (DAT_020011d3 != 0) {
    puVar1 = &DAT_02001000;
    do {
      if (*(short *)(puVar1 + 0x4d4) == *(short *)(&DAT_020011d4 + uVar2 * 0x18)) break;
      puVar1 = puVar1 + 0x18;
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)(uint)DAT_020011d3);
    if (iVar3 < (int)(uint)DAT_020011d3) {
      (&DAT_020011e4)[uVar2 * 6] = *(undefined4 *)(iVar3 * 0x18 + 0x20014dc);
      *(undefined4 *)(&DAT_020011e8 + uVar2 * 0x18) = *(undefined4 *)(iVar3 * 0x18 + 0x20014e0);
      goto LAB_08009ad0;
    }
  }
  (&DAT_020011e4)[uVar2 * 6] = (&DAT_020011dc)[uVar2 * 6];
  *(undefined4 *)(&DAT_020011e8 + uVar2 * 0x18) = (&DAT_020011e0)[uVar2 * 6];
LAB_08009ad0:
  (&DAT_020011d8)[uVar2 * 0xc] = (ushort)param_4[2] >> 1;
  (&DAT_020011da)[uVar2 * 0xc] = (ushort)param_4[3] >> 1;
  return in_lr;
}

