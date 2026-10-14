// sub_0800D0E8 at 0x0800D0E8 (thumb)

undefined4 sub_0800D0E8(int param_1)

{
  undefined4 in_lr;
  undefined4 local_14;
  undefined4 local_10;
  
  sub_08001904(0x4b,0);
  sub_08001904(0x4c,0);
  sub_08001904(0x53,0);
  if (*(char *)(param_1 + 0xe) == '\0') {
    local_14 = 0xaa000;
    local_10 = 0x1e3000;
    DAT_02022660 = sub_080A4358(&local_14,0x23);
    local_14 = 0xb1000;
    local_10 = 0x1e5000;
    DAT_02022664 = sub_080A4358(&local_14,2);
    local_14 = 0xbd000;
    local_10 = 0x1e1000;
    DAT_02022668 = sub_080A4358(&local_14,0x22);
    local_14 = 0xc1000;
    local_10 = 0x1ea000;
    DAT_0202266c = sub_080A4358(&local_14,3);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}

