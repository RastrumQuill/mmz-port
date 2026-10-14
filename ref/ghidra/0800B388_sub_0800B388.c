// sub_0800B388 at 0x0800B388 (thumb)

undefined4 sub_0800B388(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    DAT_02022674 = sub_080B22E0(0x503000,0x52000,0,0);
    DAT_02022678 = sub_080B22E0(0x509000,0x50000,0,0x17);
    DAT_0202267c = sub_080B22E0(0x511000,0x52000,0,0);
    DAT_02022680 = sub_080B22E0(0x519000,0x51000,0,0x17);
    DAT_02022684 = sub_080B22E0(0x521000,0x56000,0,0);
    DAT_02022688 = sub_080B22E0(0x502000,0x64000,1,0);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}

