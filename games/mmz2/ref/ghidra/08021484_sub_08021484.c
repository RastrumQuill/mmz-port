// sub_08021484 at 0x08021484 (thumb)

undefined8
sub_08021484(undefined4 param_1,undefined4 param_2,int *param_3,int param_4,int param_5,
            undefined4 param_6)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  if (param_4 == 0) {
    param_4 = *param_3;
  }
  if (param_5 == 0) {
    param_5 = param_3[1];
  }
  uVar1 = sub_0801F634(param_1,param_2,param_3,param_4,param_5,param_6,0x800,1,1,0);
  uVar2 = sub_0801F670(param_1,param_2,param_3,param_4,param_5,param_6,0x800,1,1,0);
  if ((((uVar1 & 0xf) == 0) || ((*(ushort *)(param_3 + 4) & 0xd) == 0)) &&
     (((uVar2 & 0xf) == 0 || ((*(ushort *)((int)param_3 + 0x12) & 0xd) == 0)))) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return CONCAT44(in_lr,uVar3);
}

