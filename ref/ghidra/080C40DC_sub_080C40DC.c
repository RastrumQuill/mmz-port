// sub_080C40DC at 0x080C40DC (thumb)

undefined8 sub_080C40DC(undefined4 *param_1,char param_2)

{
  char cVar1;
  undefined4 in_lr;
  
  *param_1 = 1;
  *(undefined *)(param_1 + 1) = 0;
  *(undefined *)((int)param_1 + 5) = 0;
  sub_080C4358(param_1);
  cVar1 = sub_080C410C(param_1,(int)param_2);
  return CONCAT44(in_lr,(int)cVar1);
}

