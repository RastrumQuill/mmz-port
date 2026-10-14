// sub_080E1094 at 0x080E1094 (thumb)

undefined8 sub_080E1094(int *param_1,int *param_2,int *param_3,byte *param_4,short param_5)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar3 = *param_3 - (*param_2 + *param_1);
  iVar2 = param_3[1] - (param_2[1] + param_1[1]);
  iVar4 = (int)param_5;
  if ((((uint)(iVar4 * 2) < (uint)(iVar3 + iVar4)) || ((uint)(iVar4 * 2) < (uint)(iVar2 + iVar4)))
     || (iVar4 * iVar4 < iVar3 * iVar3 + iVar2 * iVar2)) {
    iVar2 = sub_080E90EC(iVar3,iVar2);
    *param_4 = (byte)iVar2;
    *param_1 = *param_1 +
               ((int)*(short *)((int)&DAT_080fe64c + ((uint)((iVar2 + 0x40) * 0x1000000) >> 0x17)) *
                (int)param_5 >> 8);
    param_1[1] = param_1[1] + ((int)(short)(&DAT_080fe64c)[*param_4] * (int)param_5 >> 8);
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return CONCAT44(in_lr,uVar1);
}

