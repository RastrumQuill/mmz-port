// sub_080401F0 at 0x080401F0 (thumb)

undefined8 sub_080401F0(int param_1,uint param_2)

{
  undefined4 in_lr;
  int local_18;
  int local_14;
  int local_10;
  undefined4 local_c;
  
  local_18 = *(int *)(param_1 + 0x54);
  local_14 = *(int *)(param_1 + 0x58) + -0x2800;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    local_10 = -*(int *)(&DAT_080fe9f8 + (param_2 & 0xff) * 4);
  }
  else {
    local_10 = *(int *)(&DAT_080fe9f8 + (param_2 & 0xff) * 4);
  }
  local_c = sub_0800A104(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  local_10 = local_10 + local_18;
  sub_0809DFDC(param_1,&local_18);
  return CONCAT44(in_lr,1);
}

