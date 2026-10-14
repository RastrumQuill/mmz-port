// sub_0800DF4C at 0x0800DF4C (thumb)

undefined8 sub_0800DF4C(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 in_lr;
  
  iVar1 = 0;
  uVar6 = 0xffffffff;
  if (*(short *)(param_1 + 8) != *(short *)(param_1 + 10)) {
    sub_08005420(param_1);
    iVar2 = *(int *)(*(int *)(param_1 + 0xc) + 4);
    *(int *)(param_1 + 0xc) = iVar2;
    iVar1 = 0;
    while (iVar2 != param_1 + 0x14) {
      if ((((*(byte *)(iVar2 + 10) & 1) != 0) && ((*(byte *)(iVar2 + 10) & 4) != 0)) &&
         (iVar5 = *(int *)(iVar2 + 0x4c) - *param_2 >> 8,
         iVar3 = *(int *)(iVar2 + 0x50) - param_2[1] >> 8, uVar4 = iVar5 * iVar5 + iVar3 * iVar3,
         uVar4 < uVar6)) {
        uVar6 = uVar4;
        iVar1 = iVar2;
      }
      iVar2 = *(int *)(*(int *)(param_1 + 0xc) + 4);
      *(int *)(param_1 + 0xc) = iVar2;
    }
  }
  return CONCAT44(in_lr,iVar1);
}

