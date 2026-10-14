// sub_08001BA4 at 0x08001BA4 (thumb)

undefined4 sub_08001BA4(undefined2 param_1,uint param_2,uint param_3)

{
  undefined2 *puVar1;
  undefined4 in_lr;
  undefined4 local_1c;
  undefined2 local_18 [2];
  
  param_3 = param_3 & 0xfffffffe;
  if (param_3 != 0) {
    puVar1 = (undefined2 *)(param_2 & 0xfffffffe);
    if ((param_2 & 2) != 0) {
      *puVar1 = param_1;
      param_3 = param_3 - 2;
      if (param_3 == 0) {
        return in_lr;
      }
      puVar1 = puVar1 + 1;
    }
    if (0x20 < param_3) {
      local_1c = CONCAT22(param_1,param_1);
      sub_080FE110(&local_1c,puVar1,(param_3 & 0xffffffe0) >> 2 & 0x1fffff | 0x1000000);
      puVar1 = (undefined2 *)((int)puVar1 + (param_3 & 0xffffffe0));
      param_3 = param_3 & 0x1f;
      if (param_3 == 0) {
        return in_lr;
      }
    }
    local_18[0] = param_1;
    FUN_080fe114(local_18,puVar1,(param_3 << 10) >> 0xb | 0x1000000);
  }
  return in_lr;
}

