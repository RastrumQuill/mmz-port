// sub_0801FB14 at 0x0801FB14 (thumb)

undefined8 sub_0801FB14(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x38) - *param_2;
  if (iVar2 < 0) {
    iVar2 = -iVar2;
  }
  iVar2 = iVar2 + -0x7800;
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  iVar1 = *(int *)(param_1 + 0x3c) - param_2[1];
  if (iVar1 < 0) {
    iVar1 = -iVar1;
  }
  iVar1 = iVar1 + -0x5000;
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  if (iVar1 <= iVar2) {
    iVar1 = iVar2;
  }
  return CONCAT44(in_lr,iVar1);
}

