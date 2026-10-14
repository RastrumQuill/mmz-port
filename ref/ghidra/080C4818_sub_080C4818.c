// sub_080C4818 at 0x080C4818 (thumb)

undefined8 sub_080C4818(int param_1,char param_2)

{
  char cVar1;
  undefined4 in_lr;
  
  sub_08001904(0x7b,0);
  cVar1 = sub_080C8A9C(param_1,(int)param_2,
                       *(undefined4 *)(&DAT_082cc32c + (uint)*(byte *)(param_1 + 3) * 4));
  return CONCAT44(in_lr,(int)cVar1);
}

