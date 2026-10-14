// sub_080EAE08 at 0x080EAE08 (thumb)

undefined8 sub_080EAE08(int param_1,char param_2)

{
  char cVar1;
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 3) = 1;
  *(undefined *)(param_1 + 6) = 4;
  cVar1 = sub_080EAE24(param_1,(int)param_2);
  return CONCAT44(in_lr,(int)cVar1);
}

