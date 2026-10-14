// sub_08033090 at 0x08033090 (thumb)

undefined8 sub_08033090(int param_1,undefined4 param_2,int param_3,uint param_4)

{
  int iVar1;
  undefined4 in_lr;
  
  if (param_4 == 0xffffffff) {
    if (param_3 == -1) {
      param_3 = sub_08033018(param_2);
    }
    param_4 = sub_08033048(param_2,param_3);
  }
  if ((param_3 == -1) || (param_4 == 0xffffffff)) {
    iVar1 = 0;
  }
  else {
    if (*(int *)(&DAT_08335d9c + param_3 * 4) != 0) {
      param_4 = (uint)*(byte *)(*(int *)(param_4 * 4 + *(int *)(&DAT_08335d9c + param_3 * 4)) +
                               (int)*(char *)(param_1 + 0x71));
    }
    iVar1 = *(int *)(&DAT_08335d80 + param_3 * 4) + param_4 * 4;
  }
  return CONCAT44(in_lr,iVar1);
}

