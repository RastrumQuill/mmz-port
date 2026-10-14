// sub_080C49F0 at 0x080C49F0 (thumb)

undefined8 sub_080C49F0(int param_1,char param_2)

{
  char cVar1;
  undefined4 in_lr;
  
  sub_08001904(0x7b,0);
  cVar1 = sub_080C8A9C(param_1,(int)param_2,
                       *(undefined4 *)(&DAT_082cc33c + (uint)*(byte *)(param_1 + 2) * 4));
  return CONCAT44(in_lr,(int)cVar1);
}

