// sub_08075814 at 0x08075814 (thumb)

undefined8 sub_08075814(int param_1)

{
  undefined4 in_lr;
  undefined4 local_c;
  int local_8;
  undefined4 uStack_4;
  
  local_c = *(undefined4 *)(param_1 + 0x54);
  local_8 = *(int *)(param_1 + 0x58) + -0x1000;
  uStack_4 = in_lr;
  sub_080B8CF4(&local_c,0);
  return CONCAT44(uStack_4,1);
}

