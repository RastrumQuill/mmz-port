// sub_080158A8 at 0x080158A8 (thumb)

undefined4 sub_080158A8(undefined4 param_1,undefined4 param_2)

{
  undefined4 in_lr;
  
  if (DAT_0202f4a4 == '\0') {
    sub_08009550(param_1,param_2);
  }
  else if (DAT_0202e482 != 0) {
    sub_080FE110(&DAT_08533ff8,&DAT_0202e4a4,0x200);
    sub_0800393C(&DAT_087b776c,0x4000);
    sub_08003E14(&DAT_087b7778,0);
    sub_0800393C(&DAT_087b7780,0x4000);
    sub_08003E14(&DAT_087b778c,0);
  }
  return in_lr;
}

