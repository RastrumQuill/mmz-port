// sub_08020B28 at 0x08020B28 (thumb)

undefined8
sub_08020B28(int *param_1,undefined4 param_2,int *param_3,int param_4,undefined4 param_5,int param_6
            ,undefined4 param_7,undefined4 param_8,int param_9)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  int local_2c;
  int local_28;
  undefined4 local_24;
  
  if (param_4 == 0) {
    param_4 = *param_3;
  }
  local_2c = *param_1;
  local_28 = param_1[1];
  local_24 = param_2;
  sub_0801F1B8(param_3,1);
  iVar3 = 1;
  if (param_6 != 0) {
    iVar3 = -1;
  }
  uVar1 = *(ushort *)(param_4 + 2);
  *(undefined *)((int)param_3 + 0x79) = 0xff;
  uVar2 = sub_08020BD8(param_1,local_24,&local_2c,param_3,param_4,param_5,param_6,0,0,param_7,
                       param_8,1,param_9);
  uVar2 = uVar2 & 0xff;
  uVar4 = 0xff;
  if ((uVar2 != 0xff) && (uVar4 = uVar2, param_9 != 0)) {
    *param_1 = (local_2c - iVar3) - (uint)uVar1 * iVar3;
    param_1[1] = local_28;
  }
  *(undefined *)((int)param_3 + 0x79) = (char)uVar4;
  return CONCAT44(in_lr,uVar4);
}

