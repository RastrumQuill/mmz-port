// sub_080207AC at 0x080207AC (thumb)

undefined8
sub_080207AC(int *param_1,undefined4 param_2,int *param_3,int param_4,int param_5,int param_6,
            undefined4 param_7,int param_8,int param_9)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  bool bVar7;
  int local_28;
  
  *(undefined2 *)((int)param_3 + 10) = 0;
  *(undefined2 *)((int)param_3 + 0x12) = 0;
  sVar1 = 0;
  local_28 = param_4;
  if (param_4 == 0) {
    local_28 = *param_3;
  }
  iVar2 = param_1[1];
  bVar7 = param_5 == 0;
  iVar6 = -1;
  if (bVar7) {
    iVar6 = 1;
  }
  iVar5 = *param_1 + iVar6 * ((uint)*(ushort *)(local_28 + 2) + param_6);
  iVar3 = iVar6 * (uint)*(ushort *)(local_28 + 2);
  iVar4 = sub_08020564(iVar5,iVar2,bVar7,0x1000);
  if (iVar4 != 0) {
    iVar6 = iVar5 + iVar4 + iVar6;
    sVar1 = sub_08008D80(iVar6,iVar2);
    if (param_9 != 0) {
      *param_1 = (iVar5 + iVar4) - iVar3;
      param_9 = 0;
    }
    sub_08022278(param_3,1,iVar6,iVar2,sVar1);
  }
  if ((param_8 != 0) || (sVar1 == 0)) {
    sVar1 = sub_0802049C(param_1,param_3,iVar5,bVar7,iVar3,*(undefined2 *)(local_28 + 4),1,param_8,
                         param_9);
    if (sVar1 != 0) {
      param_9 = 0;
    }
    if ((param_8 != 0) || (sVar1 == 0)) {
      sub_0802049C(param_1,param_3,iVar5,bVar7,iVar3,-(uint)*(ushort *)(local_28 + 6),1,param_8,
                   param_9);
    }
  }
  return CONCAT44(in_lr,(uint)*(ushort *)((int)param_3 + 10));
}

