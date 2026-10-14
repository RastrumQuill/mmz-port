// sub_080C30D4 at 0x080C30D4 (thumb)

undefined8 sub_080C30D4(undefined4 *param_1,char param_2)

{
  char cVar1;
  undefined4 in_lr;
  
  *param_1 = 1;
  *(undefined *)(param_1 + 1) = 0;
  sub_080B4518(param_1[4]);
  *(undefined *)((int)param_1 + 7) = 0xff;
  sub_080C3C4C(param_1);
  sub_080C3CE4(param_1);
  cVar1 = sub_080C3110(param_1,(int)param_2);
  return CONCAT44(in_lr,(int)cVar1);
}

