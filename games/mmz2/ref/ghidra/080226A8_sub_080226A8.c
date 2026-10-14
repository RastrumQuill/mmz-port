// sub_080226A8 at 0x080226A8 (thumb)

undefined8
sub_080226A8(int *param_1,int *param_2,int param_3,int param_4,undefined4 param_5,int param_6,
            int param_7,undefined4 param_8,int param_9,uint param_10,int param_11,int param_12)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 in_lr;
  
  if (param_7 == 1) {
    if ((param_10 & 0x8000) == 0) {
      if ((param_12 < 1) ||
         (param_9 + param_12 != 0 && param_9 + param_12 < 0 == SCARRY4(param_9,param_12)))
      goto LAB_080227b6;
      if ((-1 < param_1[1] - param_2[1]) && (param_2[1] <= param_1[1] + param_9)) goto LAB_080227b6;
    }
    else {
      iVar3 = param_1[1];
      uVar6 = param_2[1];
      iVar4 = iVar3 - uVar6;
      if (-1 < iVar4) {
        iVar7 = *param_1 - *param_2;
        iVar2 = param_3 - iVar7;
        uVar5 = param_4 - iVar4;
        uVar1 = sub_08008D80(iVar2,uVar5);
        if ((uVar1 & 0xf) == 0) {
          if (iVar7 == 0) goto LAB_080227b6;
          iVar4 = param_4 + param_9;
          uVar1 = iVar4 - (param_4 - iVar3);
          if (((int)uVar6 <= (int)uVar1) || ((int)(uVar6 & 0xfffff000) <= (int)(uVar1 & 0xfffff000))
             ) goto LAB_080227b6;
          if (iVar7 < 0) {
            iVar7 = -iVar7;
          }
          iVar3 = sub_0802283C(param_3,iVar4,(uint)(param_3 < iVar2) * 2 + -1,iVar7,iVar4 - param_6)
          ;
          if ((iVar3 < 1) && (iVar3 = sub_08008EA4(iVar2,uVar5), -1 < iVar3)) {
            iVar3 = sub_08008EA4(iVar2,(uVar5 & 0xfffff000) + 0xfff);
            if ((iVar3 < 0) ||
               (iVar3 = sub_08008EA4(iVar2,(uVar5 & 0xfffff000) + 0x1fff), iVar3 < 0))
            goto LAB_080227b6;
          }
        }
      }
    }
  }
  else if (((param_7 == 0) || (param_11 < 1)) ||
          (param_9 + param_11 != 0 && param_9 + param_11 < 0 == SCARRY4(param_9,param_11)))
  goto LAB_080227b6;
  param_9 = 0;
LAB_080227b6:
  return CONCAT44(in_lr,param_9);
}

