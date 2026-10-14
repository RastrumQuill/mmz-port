// sub_080E9E00 at 0x080E9E00 (thumb)

undefined8 sub_080E9E00(byte *param_1,char param_2)

{
  char cVar1;
  undefined4 in_lr;
  
  if (param_2 == -1) {
    *param_1 = 2;
  }
  cVar1 = sub_080EF11C(param_1,(int)param_2,*(undefined4 *)(&DAT_0835e66c + (uint)*param_1 * 4));
  return CONCAT44(in_lr,(int)cVar1);
}

