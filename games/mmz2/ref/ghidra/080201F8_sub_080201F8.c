// sub_080201F8 at 0x080201F8 (thumb)

undefined8
sub_080201F8(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,undefined2 *param_4,
            int param_5,int param_6,undefined4 param_7,int param_8,int param_9)

{
  short sVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  undefined2 *local_24;
  
  *(undefined2 *)((int)param_3 + 0xe) = 0;
  *(undefined2 *)((int)param_3 + 0x16) = 0;
  sVar1 = 0;
  local_24 = param_4;
  if (param_4 == (undefined2 *)0x0) {
    local_24 = (undefined2 *)*param_3;
  }
  uVar2 = *param_1;
  uVar3 = (uint)(ushort)local_24[3];
  iVar6 = param_1[1] - (param_6 + uVar3);
  iVar4 = sub_0800901C(uVar2,iVar6);
  if (0 < iVar4) {
    iVar5 = iVar6 + iVar4 + -1;
    sVar1 = sub_08008D80(uVar2,iVar5);
    if (param_9 != 0) {
      param_1[1] = iVar6 + iVar4 + uVar3;
      param_9 = 0;
    }
    sub_080221F0(param_3,3,uVar2,iVar5,sVar1);
  }
  if ((param_8 != 0) || (sVar1 == 0)) {
    iVar4 = param_5 * 2 + -1;
    sVar1 = sub_080202FC(param_1,param_3,iVar6,iVar4,uVar3,*local_24,param_6,param_8,param_9);
    if (sVar1 != 0) {
      param_9 = 0;
    }
    if ((param_8 != 0) || (sVar1 == 0)) {
      sub_080202FC(param_1,param_3,iVar6,-iVar4,uVar3,local_24[1],param_6,param_8,param_9);
    }
  }
  return CONCAT44(in_lr,(uint)*(ushort *)((int)param_3 + 0xe));
}

