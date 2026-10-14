// sub_0800F830 at 0x0800F830 (thumb)

undefined4 sub_0800F830(int param_1,undefined4 param_2)

{
  undefined4 in_lr;
  
  if ((DAT_0202cac0 & 0xf) == 2) {
    *(uint *)(param_1 + 0x4c) = (uint)(*(ushort *)(param_1 + 0x6c) >> 4);
    sub_08007638(param_1,param_2);
  }
  else {
    sub_08007638(param_1,param_2);
  }
  return in_lr;
}

