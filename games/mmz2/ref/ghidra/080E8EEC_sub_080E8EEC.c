// sub_080E8EEC at 0x080E8EEC (thumb)

undefined8 sub_080E8EEC(int param_1,char param_2)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = sub_080EF11C(param_1,(int)param_2,
                       *(undefined4 *)(&DAT_0835e63c + (uint)*(byte *)(param_1 + 3) * 4));
  return CONCAT44(in_lr,(int)cVar1);
}

