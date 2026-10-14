// sub_08004928 at 0x08004928 (thumb)

undefined4 sub_08004928(short *param_1,short *param_2,short *param_3)

{
  undefined2 uVar1;
  short sVar2;
  undefined4 in_lr;
  
  *param_1 = (short)((uint)((int)*param_3 * (int)*param_2) >> 8) +
             (short)((uint)((int)param_2[1] * (int)param_3[4]) >> 8) +
             (short)((uint)((int)param_2[2] * (int)param_3[8]) >> 8);
  param_1[1] = (short)((uint)((int)param_3[1] * (int)*param_2) >> 8) +
               (short)((uint)((int)param_2[1] * (int)param_3[5]) >> 8) +
               (short)((uint)((int)param_2[2] * (int)param_3[9]) >> 8);
  param_1[2] = (short)((uint)((int)param_3[2] * (int)*param_2) >> 8) +
               (short)((uint)((int)param_2[1] * (int)param_3[6]) >> 8) +
               (short)((uint)((int)param_2[2] * (int)param_3[10]) >> 8);
  uVar1 = sub_080EEF7C((int)*param_1 * (int)*param_1 + (int)param_1[1] * (int)param_1[1] +
                       (int)param_1[2] * (int)param_1[2]);
  sVar2 = sub_080EF150((int)*param_1 << 8,uVar1);
  *param_1 = sVar2;
  sVar2 = sub_080EF150((int)param_1[1] << 8,uVar1);
  param_1[1] = sVar2;
  sVar2 = sub_080EF150((int)param_1[2] << 8,uVar1);
  param_1[2] = sVar2;
  return in_lr;
}

