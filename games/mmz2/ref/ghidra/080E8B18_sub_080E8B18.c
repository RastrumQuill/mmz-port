// sub_080E8B18 at 0x080E8B18 (thumb)

undefined8 sub_080E8B18(int param_1,char param_2)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = sub_080EF11C(param_1,(int)param_2,
                       *(undefined4 *)(&DAT_0835e610 + (uint)*(byte *)(param_1 + 2) * 4));
  return CONCAT44(in_lr,(int)cVar1);
}

