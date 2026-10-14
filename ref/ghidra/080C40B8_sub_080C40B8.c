// sub_080C40B8 at 0x080C40B8 (thumb)

undefined8 sub_080C40B8(byte *param_1,char param_2)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = sub_080C8A9C(param_1,(int)param_2,*(undefined4 *)(&DAT_082cc210 + (uint)*param_1 * 4));
  return CONCAT44(in_lr,(int)cVar1);
}

