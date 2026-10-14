// sub_08012420 at 0x08012420 (thumb)

undefined8 sub_08012420(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 in_lr;
  
  iVar5 = 0;
  uVar6 = 0xffffffff;
  if (*(short *)(param_1 + 8) == *(short *)(param_1 + 10)) {
    iVar5 = 0;
  }
  else {
    sub_08006B48(param_1);
    iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 4);
    *(int *)(param_1 + 0xc) = iVar1;
    while (iVar1 != param_1 + 0x14) {
      if ((((*(byte *)(iVar1 + 10) & 1) != 0) && ((*(byte *)(iVar1 + 10) & 4) != 0)) &&
         ((iVar4 = *(int *)(iVar1 + 0x54) - *param_2 >> 8,
          iVar2 = *(int *)(iVar1 + 0x58) - param_2[1] >> 8, uVar3 = iVar4 * iVar4 + iVar2 * iVar2,
          uVar3 < uVar6 ||
          ((uVar3 == uVar6 && (uVar3 = uVar6, *(byte *)(iVar5 + 0x1c) < *(byte *)(iVar1 + 0x1c))))))
         ) {
        iVar5 = iVar1;
        uVar6 = uVar3;
      }
      iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 4);
      *(int *)(param_1 + 0xc) = iVar1;
    }
  }
  return CONCAT44(in_lr,iVar5);
}

