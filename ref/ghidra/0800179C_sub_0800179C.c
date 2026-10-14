// sub_0800179C at 0x0800179C (thumb)

undefined4 sub_0800179C(int *param_1,int param_2)

{
  undefined4 in_lr;
  
  if (*(short *)(param_1 + 1) != 0) {
    param_2 = param_2 + (uint)*(byte *)((int)param_1 + 7) * 0x20;
    if (*(char *)((int)param_1 + 6) == '\0') {
      FUN_080c88ec((int)param_1 + *param_1,(int)&DAT_030017a0 + param_2,
                   *(ushort *)(param_1 + 1) >> 2);
    }
    else {
      sub_080C88F8((int)param_1 + *param_1,(int)&DAT_030017a0 + param_2);
    }
  }
  return in_lr;
}

