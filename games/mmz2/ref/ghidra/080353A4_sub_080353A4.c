// sub_080353A4 at 0x080353A4 (thumb)

undefined4 sub_080353A4(int param_1)

{
  undefined4 in_lr;
  undefined4 local_18 [3];
  
  local_18[0] = 0x80353c9;
  local_18[1] = 0x8035411;
  local_18[2] = 0x803542d;
  sub_080EF118(param_1,local_18[*(byte *)(param_1 + 0xe)],&stack0xfffffff4);
  return in_lr;
}

