// sub_08019C74 at 0x08019C74 (thumb)

undefined8
sub_08019C74(undefined4 *param_1,undefined4 param_2,undefined2 *param_3,int param_4,int param_5,
            int param_6)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 in_lr;
  
  uVar1 = *param_1;
  uVar5 = (uint)(ushort)param_3[3];
  iVar4 = param_1[1] - (uVar5 + param_5);
  iVar2 = sub_08009CD4(uVar1,iVar4);
  if (iVar2 < 1) {
    iVar2 = param_4 * 2 + -1;
    uVar3 = sub_08019D88(param_1,iVar4,iVar2,uVar5,*param_3,param_5,param_6);
    uVar3 = uVar3 & 0xff;
    if (uVar3 != 0) goto LAB_08019cfc;
    uVar3 = sub_08019D88(param_1,iVar4,-iVar2,uVar5,param_3[1],param_5,param_6);
  }
  else {
    if (param_6 != 0) {
      param_1[1] = iVar2 + iVar4 + uVar5;
    }
    uVar3 = sub_08009B9C(uVar1,iVar4);
  }
  uVar3 = uVar3 & 0xff;
LAB_08019cfc:
  return CONCAT44(in_lr,uVar3);
}

