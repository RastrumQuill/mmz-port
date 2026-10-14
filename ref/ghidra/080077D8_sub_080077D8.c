// sub_080077D8 at 0x080077D8 (thumb)

undefined4 sub_080077D8(int *param_1,undefined4 *param_2,int *param_3)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 in_lr;
  bool bVar9;
  
  uVar1 = (uint)*(byte *)(param_1 + 3);
  piVar4 = (int *)param_2[2];
  param_1[0xf] = param_1[0xd];
  param_1[0x10] = param_1[0xe];
  param_1[0xd] = (*param_3 >> 8) + param_2[0x1b] * -0xf0;
  iVar3 = (param_3[1] >> 8) + param_2[0x1c] * -0xa0;
  param_1[0xe] = iVar3;
  if (((uint)(byte)(&DAT_082915ec)[param_1[0xd] >> 4] < (uint)*(byte *)(param_2[0x1d] + 2)) &&
     ((uint)(byte)(&DAT_08290dec)[iVar3 >> 4] < (uint)*(byte *)(param_2[0x1d] + 3))) {
    piVar2 = (int *)(((int)(uint)((ushort *)param_2[0x1f])
                                 [((uint)(byte)(&DAT_08290dec)[iVar3 >> 4] <<
                                  (*(ushort *)param_2[0x1f] & 0xff)) +
                                  (uint)(byte)(&DAT_082915ec)[param_1[0xd] >> 4] + 4] >>
                      ((2 - uVar1) * 4 & 0xff) & 0xfU) * 0xc + param_2[0x1e]);
    iVar8 = *piVar2;
    iVar3 = piVar2[1];
    iVar6 = piVar2[2];
  }
  else {
    iVar8 = *param_1;
    iVar3 = param_1[1];
    iVar6 = param_1[2];
  }
  bVar9 = *(char *)((int)param_1 + 0xd) != *(char *)param_2;
  if (((bVar9) || (*param_1 != iVar8)) || (param_1[1] != iVar3)) {
    if (param_1[2] != 0) {
      sub_080C8A9C(param_1,param_2);
    }
    *param_1 = iVar8;
    param_1[1] = iVar3;
    param_1[2] = iVar6;
    uVar7 = param_2[uVar1 + 6];
    param_1[0x15] = uVar7;
    iVar5 = param_2[uVar1 + 9];
    param_1[0x16] = iVar5;
    iVar6 = param_2[uVar1 + 0xc];
    param_1[0x17] = iVar6;
    param_1[0x11] = param_2[uVar1 * 2 + 0xf];
    param_1[0x12] = param_2[uVar1 * 2 + 0x10];
    param_1[0x13] = param_2[uVar1 * 2 + 0x15];
    param_1[0x14] = param_2[uVar1 * 2 + 0x16];
    if ((iVar8 == 0) && (iVar3 == 0)) {
      DAT_02004f30 = DAT_02004f30 & ~(ushort)(uVar7 << 8);
    }
    else {
      (&DAT_02004f34)[uVar7 >> 4] = (ushort)iVar5 | (ushort)iVar6 | 0x6044;
      DAT_02004f30 = (ushort)(uVar7 << 8) | DAT_02004f30;
    }
    param_1[0xf] = param_1[0xf] + 0x78;
    *(undefined *)((int)param_1 + 0xf) = 0;
    *(undefined *)((int)param_1 + 0xe) = 0;
    *(undefined2 *)((int)param_1 + 0x12) = 0;
    *(undefined2 *)(param_1 + 4) = 0;
  }
  if (bVar9) {
    if (uVar1 == 0) {
      sub_08003538(param_1 + 5,param_1 + 0xd,&DAT_0202165c,*piVar4 + (int)piVar4,
                   piVar4[2] + (int)piVar4,param_2[3]);
    }
    else {
      sub_08003538(param_1 + 5,param_1 + 0xd,
                   ((ushort)(&DAT_02004f34)[(uint)param_1[0x15] >> 4] & 0x1f00) * 8 + 0x6000000,
                   *piVar4 + (int)piVar4,piVar4[2] + (int)piVar4,param_2[uVar1 + 3]);
    }
    *(char *)((int)param_1 + 0xd) = (char)*param_2;
  }
  return in_lr;
}

