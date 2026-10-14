// sub_0800C6D8 at 0x0800C6D8 (thumb)

undefined4 sub_0800C6D8(int param_1,int param_2)

{
  int iVar1;
  undefined4 in_lr;
  uint local_10;
  undefined4 local_c;
  
  iVar1 = (param_2 << 4) >> 0x10;
  local_10 = (iVar1 + 0x5a) * 0x10000 | (uint)(param_1 << 4) >> 0x10;
  local_c = 0x10001;
  sub_0800736C((param_1 << 4) >> 0x10,iVar1,&local_10);
  return in_lr;
}

