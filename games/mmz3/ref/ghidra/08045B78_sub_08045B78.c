// sub_08045B78 at 0x08045B78 (thumb)

undefined4 sub_08045B78(int param_1)

{
  undefined4 in_lr;
  int local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_1c = *(int *)(param_1 + 0x58) + -0x3e00;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    local_20 = *(int *)(param_1 + 0x54) + -0x1200;
    local_18 = 0xffffff0f;
    local_14 = 0xffffffaa;
    sub_0809EF5C(param_1,&local_20,&local_18,0x72);
    local_18 = 0xffffff0f;
    local_14 = 0x56;
    sub_0809EF5C(param_1,&local_20,&local_18,0x8e);
  }
  else {
    local_20 = *(int *)(param_1 + 0x54) + 0x1200;
    local_18 = 0xf1;
    local_14 = 0x56;
    sub_0809EF5C(param_1,&local_20,&local_18,0xf2);
    local_18 = 0xf1;
    local_14 = 0xffffffaa;
    sub_0809EF5C(param_1,&local_20,&local_18,0xe);
  }
  return in_lr;
}

