// sub_08033048 at 0x08033048 (thumb)

undefined8 sub_08033048(uint param_1,int param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = -1;
  if ((param_2 != -1) || (param_2 = sub_08033018(param_1), param_2 != -1)) {
    do {
      iVar1 = iVar1 + 1;
      if (param_1 == *(byte *)(*(int *)(&DAT_08335cb0 + param_2 * 4) + iVar1)) goto LAB_08033088;
    } while ((iVar1 == 0) || (*(byte *)(*(int *)(&DAT_08335cb0 + param_2 * 4) + iVar1) != 0));
  }
  iVar1 = -1;
LAB_08033088:
  return CONCAT44(in_lr,iVar1);
}

