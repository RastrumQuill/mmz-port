// sub_08108970 at 0x08108970 (thumb)

undefined4 sub_08108970(int param_1)

{
  byte *pbVar1;
  uint uVar2;
  undefined4 in_lr;
  undefined4 local_1c;
  undefined4 local_18;
  
  uVar2 = 0;
  local_1c = 0;
  DAT_0202edac = param_1;
  sub_081284E4(&local_1c,param_1,0x1000000);
  local_18 = 0;
  sub_081284E8(&local_18,param_1,&DAT_05000002);
  do {
    pbVar1 = (byte *)(DAT_0202edac + (uVar2 >> 2));
    *pbVar1 = (byte)(1 << (uVar2 & 3)) | *pbVar1;
    pbVar1 = (byte *)(DAT_0202edac + (uVar2 >> 2));
    *pbVar1 = (byte)(0x10 << (uVar2 & 3)) | *pbVar1;
    uVar2 = uVar2 + 1 & 0xff;
  } while (uVar2 < 0x1c);
  return in_lr;
}

