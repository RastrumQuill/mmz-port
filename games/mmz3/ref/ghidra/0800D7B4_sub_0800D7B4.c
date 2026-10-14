// sub_0800D7B4 at 0x0800D7B4 (thumb)

undefined8 sub_0800D7B4(int param_1,int param_2)

{
  short sVar1;
  undefined4 in_lr;
  uint local_14;
  undefined4 local_10;
  
  local_14 = 0;
  local_10 = 0x10001;
  sVar1 = sub_0800D754(param_1,param_2);
  if (sVar1 != 0) {
    local_14 = param_1 >> 0xc & 0xffffU | (param_2 + 0x32000) * 0x10 & 0xffff0000U;
    sub_080092B4(param_1 >> 0xc,param_2 >> 0xc,&local_14);
  }
  return CONCAT44(in_lr,(uint)(sVar1 != 0));
}

