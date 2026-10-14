// sub_0807F544 at 0x0807F544 (thumb)

undefined8 sub_0807F544(undefined4 param_1,int *param_2,int *param_3,int *param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *param_4;
  iVar3 = *param_3 + iVar4;
  *param_3 = iVar3;
  iVar2 = param_3[1];
  if (-0x80 < iVar2) {
    iVar2 = iVar2 + -8;
    param_3[1] = iVar2;
  }
  *param_2 = *param_2 + iVar3;
  param_2[1] = param_2[1] + iVar2;
  bVar1 = 0x7fe < iVar3 + 0x3ffU;
  if (bVar1) {
    *param_4 = -iVar4;
  }
  return CONCAT44(in_lr,(uint)bVar1);
}

