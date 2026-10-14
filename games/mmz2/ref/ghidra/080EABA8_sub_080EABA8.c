// sub_080EABA8 at 0x080EABA8 (thumb)

undefined8 sub_080EABA8(undefined4 *param_1,char param_2)

{
  char cVar1;
  undefined4 in_lr;
  
  *param_1 = 1;
  *(undefined *)(param_1 + 1) = 0;
  param_1[5] = 0;
  sub_080EAFEC(param_1);
  cVar1 = sub_080EABD8(param_1,(int)param_2);
  return CONCAT44(in_lr,(int)cVar1);
}

