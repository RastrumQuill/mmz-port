// sub_0801FE4C at 0x0801FE4C (thumb)

undefined8
sub_0801FE4C(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,undefined2 *param_4,
            int param_5,int param_6,undefined4 param_7,int param_8,int param_9)

{
  undefined2 uVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 in_lr;
  undefined2 *local_28;
  
  *(undefined2 *)(param_3 + 3) = 0;
  *(undefined2 *)(param_3 + 5) = 0;
  sVar2 = 0;
  local_28 = param_4;
  if (param_4 == (undefined2 *)0x0) {
    local_28 = (undefined2 *)*param_3;
  }
  uVar6 = *param_1;
  uVar4 = (uint)(ushort)local_28[2];
  iVar7 = param_1[1] + uVar4 + param_6;
  iVar3 = sub_08008EA4(uVar6,iVar7);
  if (iVar3 < 0) {
    uVar1 = sub_08008D80(uVar6,iVar7);
    iVar3 = sub_080226A8(param_1,param_2,uVar6,iVar7,uVar4,param_6,param_7,param_9,iVar3,uVar1,
                         0x1400,0xc01);
    if (iVar3 == 0) {
      iVar3 = sub_08022934(param_1,param_2,uVar6,iVar7,uVar4,param_9,uVar1);
      if (-1 < iVar3) {
        sVar2 = 0;
        goto LAB_0801ff52;
      }
      param_9 = 0;
      iVar5 = iVar7 + iVar3 + 1;
      sVar2 = sub_08008D80(uVar6,iVar5);
    }
    else {
      iVar5 = iVar7 + iVar3 + 1;
      uVar1 = sub_08008D80(uVar6,iVar5);
      sVar2 = sub_080201C0(uVar6,iVar5,uVar1);
      if (param_9 != 0) {
        param_1[1] = (iVar7 + iVar3) - uVar4;
        param_9 = 0;
      }
    }
    sub_080220D8(param_3,2,uVar6,iVar5,sVar2);
  }
LAB_0801ff52:
  if ((param_8 != 0) || (sVar2 == 0)) {
    iVar3 = param_5 * 2 + -1;
    sVar2 = sub_0801FFE0(param_1,param_2,param_3,iVar7,iVar3,uVar4,*local_28,param_6,param_7,param_8
                         ,param_9);
    if (sVar2 != 0) {
      param_9 = 0;
    }
    if ((param_8 != 0) || (sVar2 == 0)) {
      sub_0801FFE0(param_1,param_2,param_3,iVar7,-iVar3,uVar4,local_28[1],param_6,param_7,param_8,
                   param_9);
    }
  }
  return CONCAT44(in_lr,(uint)*(ushort *)(param_3 + 3));
}

