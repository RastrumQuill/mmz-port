// sub_0800B8B0 at 0x0800B8B0 (thumb)

undefined4 sub_0800B8B0(void)

{
  undefined4 in_lr;
  undefined4 local_10;
  undefined4 local_c;
  
  if (DAT_0202265c == 0) {
    local_10 = 0x51d000;
    local_c = 0x31000;
    sub_080A1944(&local_10,0);
    local_10 = 0x53d000;
    sub_080A1944(&local_10,1);
    local_10 = 0x568800;
    sub_080A1944(&local_10,2);
  }
  DAT_0202265c = DAT_0202265c + 1;
  if (200 < DAT_0202265c) {
    DAT_0202265c = 0;
  }
  return in_lr;
}

