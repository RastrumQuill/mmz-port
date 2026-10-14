// sub_080E8980 at 0x080E8980 (thumb)

undefined8 sub_080E8980(int param_1,char param_2)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = sub_080EF11C(param_1,(int)param_2,
                       *(undefined4 *)(&DAT_0835e5e4 + (uint)*(byte *)(param_1 + 4) * 4));
  return CONCAT44(in_lr,(int)cVar1);
}

