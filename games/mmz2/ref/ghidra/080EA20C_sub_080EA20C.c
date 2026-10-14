// sub_080EA20C at 0x080EA20C (thumb)

undefined8 sub_080EA20C(byte *param_1,char param_2)

{
  char cVar1;
  undefined4 in_lr;
  
  if (param_2 == -1) {
    *param_1 = 2;
  }
  cVar1 = sub_080EF11C(param_1,(int)param_2,*(undefined4 *)(&DAT_0835e6f0 + (uint)*param_1 * 4));
  return CONCAT44(in_lr,(int)cVar1);
}

