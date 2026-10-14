// sub_080C3880 at 0x080C3880 (thumb)

undefined8 sub_080C3880(int param_1,char param_2)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = sub_080C8A9C(param_1,(int)param_2,
                       *(undefined4 *)(&DAT_082cc1ec + (uint)*(byte *)(param_1 + 2) * 4));
  return CONCAT44(in_lr,(int)cVar1);
}

