// sub_08021404 at 0x08021404 (thumb)

undefined8
sub_08021404(undefined4 param_1,undefined4 param_2,int *param_3,int param_4,int param_5,
            undefined4 param_6,undefined4 param_7,int param_8)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if (param_4 == 0) {
    param_4 = *param_3;
  }
  if (param_5 == 0) {
    param_5 = param_3[1];
  }
  if (param_8 == 0) {
    uVar1 = sub_0801F634(param_1,param_2,param_3,param_4,param_5,param_6,param_7,1,1,1);
  }
  else {
    uVar1 = sub_0801F670(param_1,param_2,param_3,param_4,param_5,param_6,param_7,1,1,1);
  }
  if (((uVar1 & 0xf) == 0) || ((*(ushort *)((int)param_3 + param_8 * 2 + 0x10) & 0xd) == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return CONCAT44(in_lr,uVar2);
}

