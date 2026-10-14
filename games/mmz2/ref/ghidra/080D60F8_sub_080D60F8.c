// sub_080D60F8 at 0x080D60F8 (thumb)

undefined8 sub_080D60F8(undefined4 param_1,int param_2,int param_3)

{
  byte bVar1;
  undefined4 in_lr;
  
  bVar1 = (&DAT_0834a1d6)[param_2 * 0xc];
  if ((param_3 != 0) && ((bVar1 & 0x80) == 0)) {
    sub_080EF11C(param_1,param_2,*(undefined4 *)(&DAT_0834b000 + (uint)bVar1 * 4));
  }
  return CONCAT44(in_lr,(uint)bVar1);
}

