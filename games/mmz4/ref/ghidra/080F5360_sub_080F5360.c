// sub_080F5360 at 0x080F5360 (thumb)

undefined4 sub_080F5360(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = 0xb7000;
  local_14 = 0x20000;
  uVar1 = sub_080F4CF8(&local_18,1,0);
  *(undefined4 *)(param_1 + 0xb4) = uVar1;
  local_18 = 0xb9000;
  local_14 = 0x26000;
  uVar1 = sub_080F4CF8(&local_18,1,0);
  *(undefined4 *)(param_1 + 0xb8) = uVar1;
  local_18 = 0xb7000;
  local_14 = 0x22000;
  uVar1 = sub_080F4CF8(&local_18,1,0);
  *(undefined4 *)(param_1 + 0xb4) = uVar1;
  return in_lr;
}

