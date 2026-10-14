// sub_08003460 at 0x08003460 (thumb)

undefined8 sub_08003460(uint param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 in_lr;
  undefined4 local_18;
  
  param_1 = param_1 & 0xff;
  local_18 = 0;
  if (param_1 < 6) {
    uVar1 = sub_080FE284(&local_18,param_1 * 0xaaa + 0xe000000,4);
    uVar2 = sub_080FE284(&local_18,(param_1 + 6) * 0xaaa + 0xe000000,4);
    uVar1 = uVar1 | uVar2;
  }
  else {
    uVar1 = 0xffffffff;
  }
  return CONCAT44(in_lr,uVar1);
}

