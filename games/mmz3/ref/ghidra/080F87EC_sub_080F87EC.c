// sub_080F87EC at 0x080F87EC (thumb)

undefined4 sub_080F87EC(int param_1)

{
  byte *pbVar1;
  uint uVar2;
  undefined4 in_lr;
  undefined4 local_1c;
  undefined4 local_18;
  
  uVar2 = 0;
  local_1c = 0;
  DAT_0203df90 = param_1;
  sub_080FE110(&local_1c,param_1,0x1000008);
  local_18 = 0;
  FUN_080fe114(&local_18,param_1 + 0x20,&DAT_05000004);
  do {
    pbVar1 = (byte *)(DAT_0203df90 + (uVar2 >> 2));
    *pbVar1 = (byte)(1 << (uVar2 & 3)) | *pbVar1;
    pbVar1 = (byte *)(DAT_0203df90 + (uVar2 >> 2));
    *pbVar1 = (byte)(0x10 << (uVar2 & 3)) | *pbVar1;
    uVar2 = uVar2 + 1 & 0xff;
  } while (uVar2 < 0xb4);
  sub_080F8858();
  return in_lr;
}

