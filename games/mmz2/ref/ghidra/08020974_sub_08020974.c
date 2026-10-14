// sub_08020974 at 0x08020974 (thumb)

undefined8
sub_08020974(undefined4 *param_1,undefined4 param_2,int *param_3,int param_4,undefined4 param_5,
            undefined4 param_6,uint param_7,undefined4 param_8,int param_9)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 in_lr;
  undefined4 local_28;
  int local_24;
  
  if (param_4 == 0) {
    param_4 = *param_3;
  }
  local_28 = *param_1;
  local_24 = param_1[1];
  sub_0801F1B8(param_3,3);
  uVar1 = *(ushort *)(param_4 + 6);
  *(undefined *)((int)param_3 + 0x7b) = 0xff;
  uVar2 = sub_08020BD8(param_1,param_2,&local_28,param_3,param_4,param_5,param_6,param_7 & 1,param_7
                       ,0,param_8,3,param_9);
  uVar2 = uVar2 & 0xff;
  uVar3 = 0xff;
  if ((uVar2 != 0xff) && (uVar3 = uVar2, param_9 != 0)) {
    *param_1 = local_28;
    param_1[1] = local_24 + 1 + (uint)uVar1;
  }
  *(undefined *)((int)param_3 + 0x7b) = (char)uVar3;
  return CONCAT44(in_lr,uVar3);
}

