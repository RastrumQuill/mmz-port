// sub_080C410C at 0x080C410C (thumb)

undefined8 sub_080C410C(int param_1,char param_2)

{
  undefined4 in_lr;
  
  if (0 < param_2) {
    param_2 = sub_080C8A9C(param_1,(int)param_2,
                           *(undefined4 *)(&DAT_082cc2ec + (uint)*(byte *)(param_1 + 4) * 4));
  }
  sub_080C43B4(param_1);
  return CONCAT44(in_lr,(int)param_2);
}

