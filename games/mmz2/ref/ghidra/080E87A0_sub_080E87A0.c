// sub_080E87A0 at 0x080E87A0 (thumb)

undefined8 sub_080E87A0(undefined4 *param_1,char param_2)

{
  char cVar1;
  undefined4 in_lr;
  
  *param_1 = 1;
  *(undefined *)(param_1 + 1) = 0;
  sub_080D5790(param_1[4]);
  *(undefined *)((int)param_1 + 7) = 0xff;
  sub_080E9418(param_1);
  sub_080E95C0(param_1);
  if ((DAT_0202ebb4 & 2) != 0) {
    sub_08002D68(0x51,0);
  }
  cVar1 = sub_080E87F4(param_1,(int)param_2);
  return CONCAT44(in_lr,(int)cVar1);
}

