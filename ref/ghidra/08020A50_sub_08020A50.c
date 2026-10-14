// sub_08020A50 at 0x08020A50 (thumb)

undefined4 sub_08020A50(int param_1)

{
  byte *pbVar1;
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xf) = 1;
  *(byte *)(param_1 + 0x128) = *(byte *)(param_1 + 0x128) | 2;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0xfffffe80;
  *(undefined *)(param_1 + 0x118) = 0xf0;
  sub_08018C20(param_1,6,1,1);
  if ((*(ushort *)(param_1 + 0x90) & 0x80) != 0) {
    pbVar1 = (byte *)(param_1 + 0x95);
    if (*pbVar1 < 0xff) {
      *pbVar1 = 0;
    }
    else {
      *pbVar1 = *pbVar1 + 1;
    }
  }
  sub_08020AB4(param_1);
  return in_lr;
}

