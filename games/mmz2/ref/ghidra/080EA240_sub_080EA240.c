// sub_080EA240 at 0x080EA240 (thumb)

undefined8 sub_080EA240(undefined4 *param_1,char param_2)

{
  char cVar1;
  undefined4 in_lr;
  
  *param_1 = 1;
  *(undefined *)(param_1 + 1) = 0;
  *(undefined *)((int)param_1 + 5) = 0;
  *(undefined *)((int)param_1 + 6) = 0;
  if ((DAT_0202ebb4 & 2) == 0) {
    sub_08002D68(0x21,0);
  }
  else {
    sub_08002D68(0x50,0);
  }
  sub_080EA524(param_1);
  cVar1 = sub_080EA294(param_1,(int)param_2);
  return CONCAT44(in_lr,(int)cVar1);
}

