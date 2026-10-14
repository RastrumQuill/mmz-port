// sub_08000EAC at 0x08000EAC (thumb)

undefined8 sub_08000EAC(undefined4 param_1,int param_2,int param_3)

{
  (&DAT_02000f90)[param_3 * 4 + param_2] = (short)param_1;
  return CONCAT44(param_2,param_1);
}

