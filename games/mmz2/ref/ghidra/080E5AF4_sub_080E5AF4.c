// sub_080E5AF4 at 0x080E5AF4 (thumb)

undefined4 sub_080E5AF4(int param_1)

{
  char cVar1;
  short sVar2;
  ushort uVar3;
  uint uVar4;
  undefined4 in_lr;
  
  if ((DAT_0202e150 != 0) && (DAT_0202e150 = DAT_0202e150 - 1, (DAT_0202e150 & 3) == 3)) {
    sVar2 = sub_0802306C(*(undefined4 *)(param_1 + 0x75b8),4);
    if (sVar2 == 0) {
      DAT_0202e150 = 0;
    }
    else {
      sub_0801E6AC(0x22);
    }
  }
  uVar4 = (uint)DAT_0202ec38;
  if ((DAT_0202ec38 & 0x10) == 0) {
    if ((DAT_0202e180 != 0) &&
       (sVar2 = *(short *)(*(int *)(param_1 + 0x75b8) + 0xa4), uVar3 = sub_08022AF0(),
       (short)(uVar3 & 0xff) <= sVar2)) {
      DAT_0202e18c = DAT_0202e18c + DAT_0202e180;
      DAT_0202e180 = uVar4 & 0x10;
    }
    if ((DAT_0202e18c != 0) && (DAT_0202e18c = DAT_0202e18c - 1, (DAT_0202e18c & 3) == 3)) {
      cVar1 = sub_08022FEC(*(undefined4 *)(param_1 + 0x75b8));
      if (cVar1 == '\0') {
        DAT_0202e18c = 0;
      }
    }
    if ((DAT_0202e180 != 0) && (DAT_0202e180 = DAT_0202e180 - 1, (DAT_0202e180 & 3) == 3)) {
      cVar1 = sub_08022FEC(*(undefined4 *)(param_1 + 0x75b8));
      if (cVar1 == '\0') {
        DAT_0202e180 = 0;
      }
    }
  }
  else {
    DAT_0202e180 = 0;
  }
  return in_lr;
}

