// sub_08003E14 at 0x08003E14 (thumb)

undefined4 sub_08003E14(int *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (*(short *)(param_1 + 1) != 0) {
    param_2 = param_2 + (uint)*(byte *)((int)param_1 + 7) * 0x20;
    if (*(char *)((int)param_1 + 6) == '\0') {
      DAT_040000d4 = (int)param_1 + *param_1;
      DAT_040000d8 = (int)&DAT_03002ac0 + param_2;
      DAT_040000dc = *(ushort *)(param_1 + 1) >> 2 | 0x84000000;
      uVar1 = DAT_040000dc;
    }
    else {
      sub_080FE11C((int)param_1 + *param_1,(int)&DAT_03002ac0 + param_2);
    }
  }
  return in_lr;
}

