// sub_080EA294 at 0x080EA294 (thumb)

undefined8 sub_080EA294(int param_1,char param_2)

{
  undefined4 in_lr;
  
  if (0 < param_2) {
    param_2 = sub_080EF11C(param_1,(int)param_2,
                           *(undefined4 *)(&DAT_0835e880 + (uint)*(byte *)(param_1 + 4) * 4));
  }
  sub_080EA5D0(param_1);
  return CONCAT44(in_lr,(int)param_2);
}

