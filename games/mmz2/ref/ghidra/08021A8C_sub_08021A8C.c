// sub_08021A8C at 0x08021A8C (thumb)

undefined8 sub_08021A8C(undefined4 *param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 in_lr;
  undefined4 local_18;
  int local_14;
  
  local_18 = *param_1;
  local_14 = param_1[1];
  uVar1 = sub_08021B80(param_1,param_2,&local_18,2,param_3);
  uVar1 = uVar1 & 0xff;
  uVar2 = 0xff;
  if ((uVar1 != 0xff) && (uVar2 = uVar1, param_3 != 0)) {
    *param_1 = local_18;
    param_1[1] = local_14 + -1;
  }
  return CONCAT44(in_lr,uVar2);
}

