// sub_080C33E8 at 0x080C33E8 (thumb)

undefined8 sub_080C33E8(int param_1,char param_2)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = sub_080C8A9C(param_1,(int)param_2,
                       *(undefined4 *)(&DAT_082cc1b4 + (uint)*(byte *)(param_1 + 2) * 4));
  return CONCAT44(in_lr,(int)cVar1);
}

