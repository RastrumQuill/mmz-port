// sub_08021A18 at 0x08021A18 (thumb)

undefined8 sub_08021A18(int *param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 in_lr;
  
  uVar5 = 0;
  iVar4 = *param_1;
  iVar1 = param_1[1];
  if (param_4 == 0) {
    param_4 = iVar4 - *param_2;
  }
  iVar2 = sub_0801F418(iVar4,iVar1,0 < param_4);
  iVar3 = -1;
  if (0 < param_4) {
    iVar3 = 1;
  }
  if (iVar3 * iVar2 < 0) {
    uVar5 = sub_08008D80(iVar4 + iVar2 + iVar3,iVar1);
    uVar5 = uVar5 & 0xffff;
    if (param_3 != 0) {
      *param_1 = iVar4 + iVar2;
    }
  }
  return CONCAT44(in_lr,uVar5);
}

