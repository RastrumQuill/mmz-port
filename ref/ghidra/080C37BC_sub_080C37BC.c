// sub_080C37BC at 0x080C37BC (thumb)

undefined8 sub_080C37BC(int param_1,char param_2)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = sub_080C8A9C(param_1,(int)param_2,
                       *(undefined4 *)(&DAT_082cc1e0 + (uint)*(byte *)(param_1 + 3) * 4));
  return CONCAT44(in_lr,(int)cVar1);
}

