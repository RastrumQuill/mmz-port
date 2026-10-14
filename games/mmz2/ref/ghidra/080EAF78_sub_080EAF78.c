// sub_080EAF78 at 0x080EAF78 (thumb)

undefined8 sub_080EAF78(int param_1,char param_2)

{
  char cVar1;
  undefined4 in_lr;
  
  sub_08002EF0(0x90);
  cVar1 = sub_080EF11C(param_1,(int)param_2,
                       *(undefined4 *)(&DAT_0835e8d8 + (uint)*(byte *)(param_1 + 1) * 4));
  return CONCAT44(in_lr,(int)cVar1);
}

