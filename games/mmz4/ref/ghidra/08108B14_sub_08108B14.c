// sub_08108B14 at 0x08108B14 (thumb)

undefined8 sub_08108B14(char param_1,int param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = DAT_0202edb0 + 0x14;
  if (param_2 == 0) {
    param_2 = iVar1;
  }
  do {
    param_2 = *(int *)(param_2 + 4);
    if (param_2 == iVar1) goto LAB_08108b38;
  } while (*(char *)(param_2 + 9) != param_1);
  if (param_2 == iVar1) {
LAB_08108b38:
    param_2 = 0;
  }
  return CONCAT44(in_lr,param_2);
}

