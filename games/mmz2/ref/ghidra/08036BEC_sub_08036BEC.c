// sub_08036BEC at 0x08036BEC (thumb)

undefined8 sub_08036BEC(int param_1)

{
  byte *pbVar1;
  undefined4 in_lr;
  
  if ((DAT_0202ebb4 & 2) == 0) {
    pbVar1 = (byte *)(param_1 + 0x180);
    if (*pbVar1 == 0) {
      if (*(ushort *)(param_1 + 0xa4) < 3) {
        *pbVar1 = 1;
      }
    }
    else if (7 < *(ushort *)(param_1 + 0xa4)) {
      *pbVar1 = DAT_0202ebb4 & 2;
    }
  }
  else {
    *(undefined *)(param_1 + 0x180) = 1;
  }
  return CONCAT44(in_lr,(uint)*(byte *)(param_1 + 0x180));
}

