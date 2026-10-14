// sub_08021B14 at 0x08021B14 (thumb)

undefined8 sub_08021B14(int *param_1,int *param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_lr;
  int local_20;
  int local_1c;
  
  local_20 = *param_1;
  local_1c = param_1[1];
  if (param_4 == 0) {
    param_4 = *param_1 - *param_2;
  }
  if (param_4 < 1) {
    iVar2 = -1;
  }
  else {
    iVar2 = 1;
  }
  uVar1 = sub_08021B80(param_1,param_2,&local_20,0 < param_4,param_3);
  uVar1 = uVar1 & 0xff;
  uVar3 = 0xff;
  if ((uVar1 != 0xff) && (uVar3 = uVar1, param_3 != 0)) {
    *param_1 = local_20 - iVar2;
    param_1[1] = local_1c;
  }
  return CONCAT44(in_lr,uVar3);
}

