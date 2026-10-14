// sub_080C4768 at 0x080C4768 (thumb)

undefined8 sub_080C4768(undefined4 *param_1,char param_2)

{
  char cVar1;
  undefined4 in_lr;
  
  *param_1 = 1;
  *(undefined *)(param_1 + 1) = 0;
  param_1[5] = 0;
  sub_080C4BAC(param_1);
  cVar1 = sub_080C4798(param_1,(int)param_2);
  return CONCAT44(in_lr,(int)cVar1);
}

