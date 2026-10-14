// sub_080191B4 at 0x080191B4 (thumb)

undefined8
sub_080191B4(undefined4 *param_1,undefined4 param_2,undefined2 *param_3,int param_4,int param_5,
            int param_6)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 in_lr;
  
  uVar6 = *param_1;
  uVar2 = (uint)(ushort)param_3[2];
  iVar5 = param_1[1] + param_5 + uVar2;
  iVar3 = sub_08009C3C(uVar6,iVar5);
  if (iVar3 < 0) {
    uVar4 = sub_08009B9C(uVar6,iVar5);
    uVar4 = uVar4 & 0xff;
    iVar3 = sub_08019634(param_1,param_2,uVar6,iVar5,uVar2,param_5,param_6,iVar3,uVar4);
    if (iVar3 != 0) {
      if (param_6 != 0) {
        param_1[1] = (iVar3 + iVar5) - uVar2;
      }
      goto LAB_0801928e;
    }
    cVar1 = sub_080198AC(param_1,uVar6,iVar5,uVar2,param_6,uVar4);
    if (cVar1 != '\0') goto LAB_0801928e;
  }
  iVar3 = param_4 * 2 + -1;
  uVar4 = sub_08019390(param_1,param_2,iVar5,iVar3,uVar2,*param_3,param_5,param_6);
  uVar4 = uVar4 & 0xff;
  if (uVar4 == 0) {
    uVar4 = sub_08019390(param_1,param_2,iVar5,-iVar3,uVar2,param_3[1],param_5,param_6);
    uVar4 = uVar4 & 0xff;
  }
LAB_0801928e:
  return CONCAT44(in_lr,uVar4);
}

