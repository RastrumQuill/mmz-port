// sub_081144EC at 0x081144EC (thumb)

undefined4 sub_081144EC(int param_1)

{
  short sVar1;
  char cVar2;
  ushort uVar3;
  uint uVar4;
  undefined4 in_lr;
  
  if ((DAT_0202dc0c != 0) && (DAT_0202dc0c = DAT_0202dc0c - 1, (DAT_0202dc0c & 3) == 3)) {
    cVar2 = sub_0802B624(*(undefined4 *)(param_1 + 0x63a8),4);
    if (cVar2 == '\0') {
      DAT_0202dc0c = 0;
    }
    else {
      sub_08002B10(0x22);
    }
  }
  uVar4 = (uint)DAT_0202e918;
  if ((DAT_0202e918 & 8) == 0) {
    if ((DAT_0202dc30 != 0) &&
       (sVar1 = *(short *)(*(int *)(param_1 + 0x63a8) + 0xa4), uVar3 = sub_0802B604(),
       (short)(uVar3 & 0xff) <= sVar1)) {
      DAT_0202dc3c = DAT_0202dc3c + DAT_0202dc30;
      DAT_0202dc30 = uVar4 & 8;
    }
    if ((DAT_0202dc3c != 0) && (DAT_0202dc3c = DAT_0202dc3c - 1, (DAT_0202dc3c & 3) == 3)) {
      cVar2 = sub_0802B65C(*(undefined4 *)(param_1 + 0x63a8));
      if (cVar2 == '\0') {
        DAT_0202dc3c = 0;
      }
    }
    if ((DAT_0202dc30 != 0) && (DAT_0202dc30 = DAT_0202dc30 - 1, (DAT_0202dc30 & 3) == 3)) {
      cVar2 = sub_0802B5AC(*(undefined4 *)(param_1 + 0x63a8));
      if (cVar2 == '\0') {
        DAT_0202dc30 = 0;
      }
    }
  }
  else {
    DAT_0202dc30 = 0;
  }
  return in_lr;
}

