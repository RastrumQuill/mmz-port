// sub_08002AEC at 0x08002AEC (thumb)

undefined4 sub_08002AEC(int *param_1,int param_2)

{
  undefined4 in_lr;
  
  if (*(short *)(param_1 + 1) != 0) {
    param_2 = param_2 + (uint)*(byte *)((int)param_1 + 7) * 0x20;
    if (*(char *)((int)param_1 + 6) == '\0') {
      sub_080EEF68((int)param_1 + *param_1,(int)&DAT_03002ac0 + param_2,
                   *(ushort *)(param_1 + 1) >> 2);
    }
    else {
      sub_080EEF74((int)param_1 + *param_1,(int)&DAT_03002ac0 + param_2);
    }
  }
  return in_lr;
}

