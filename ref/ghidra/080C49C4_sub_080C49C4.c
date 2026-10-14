// sub_080C49C4 at 0x080C49C4 (thumb)

undefined8 sub_080C49C4(int param_1,char param_2)

{
  char cVar1;
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 3) = 1;
  *(undefined *)(param_1 + 6) = 4;
  cVar1 = sub_080C49E0(param_1,(int)param_2);
  return CONCAT44(in_lr,(int)cVar1);
}

