// sub_0807E858 at 0x0807E858 (thumb)

undefined8 sub_0807E858(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar1 = 0;
  do {
    iVar2 = iVar1 + 1;
    if ((param_2 + -0x7800) - *(int *)(param_1 + 0xb4) <
        *(int *)(&DAT_0885a314 + iVar2 * 4) + -0x1800) goto LAB_0807e890;
    iVar1 = iVar2;
  } while (iVar2 < 4);
  iVar1 = 4;
LAB_0807e890:
  return CONCAT44(in_lr,iVar1);
}

