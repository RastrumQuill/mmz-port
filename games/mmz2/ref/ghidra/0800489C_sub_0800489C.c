// sub_0800489C at 0x0800489C (thumb)

undefined4 sub_0800489C(undefined2 *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  short *psVar3;
  int iVar4;
  int iVar5;
  short *psVar6;
  int iVar7;
  undefined4 in_lr;
  
  param_1[0xf] = 0;
  param_1[0xb] = 0;
  param_1[7] = 0;
  param_1[3] = 0;
  param_1[0xe] = 0;
  param_1[10] = 0;
  param_1[6] = 0;
  param_1[2] = 0;
  param_1[0xd] = 0;
  param_1[9] = 0;
  param_1[5] = 0;
  param_1[1] = 0;
  param_1[0xc] = 0;
  param_1[8] = 0;
  param_1[4] = 0;
  *param_1 = 0;
  iVar1 = 0;
  do {
    iVar2 = iVar1 + 1;
    iVar4 = 0;
    do {
      iVar5 = iVar4 + 1;
      psVar3 = (short *)(iVar4 * 8 + param_3);
      psVar6 = (short *)(iVar1 * 2 + param_2);
      iVar7 = 2;
      do {
        param_1[iVar4 * 4 + iVar1] =
             (short)((uint)((int)*psVar6 * (int)*psVar3) >> 8) + param_1[iVar4 * 4 + iVar1];
        psVar3 = psVar3 + 1;
        psVar6 = psVar6 + 4;
        iVar7 = iVar7 + -1;
      } while (-1 < iVar7);
      iVar4 = iVar5;
    } while (iVar5 < 3);
    iVar1 = iVar2;
  } while (iVar2 < 3);
  return in_lr;
}

