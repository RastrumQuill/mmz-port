// sub_080F004C at 0x080F004C (thumb)

undefined4 sub_080F004C(int param_1)

{
  short sVar1;
  char cVar2;
  ushort uVar3;
  uint uVar4;
  undefined4 in_lr;
  
  if ((DAT_0202f5dc != 0) && (DAT_0202f5dc = DAT_0202f5dc - 1, (DAT_0202f5dc & 3) == 3)) {
    cVar2 = sub_08025AA0(*(undefined4 *)(param_1 + 0x64ac),4);
    if (cVar2 == '\0') {
      DAT_0202f5dc = 0;
    }
    else {
      sub_0800471C(0x22);
    }
  }
  uVar4 = (uint)DAT_020301a8;
  if ((DAT_020301a8 & 8) == 0) {
    if ((DAT_0202f600 != 0) &&
       (sVar1 = *(short *)(*(int *)(param_1 + 0x64ac) + 0xa4), uVar3 = sub_08025A04(),
       (short)(uVar3 & 0xff) <= sVar1)) {
      DAT_0202f60c = DAT_0202f60c + DAT_0202f600;
      DAT_0202f600 = uVar4 & 8;
    }
    if ((DAT_0202f60c != 0) && (DAT_0202f60c = DAT_0202f60c - 1, (DAT_0202f60c & 3) == 3)) {
      cVar2 = sub_08025AD8(*(undefined4 *)(param_1 + 0x64ac));
      if (cVar2 == '\0') {
        DAT_0202f60c = 0;
      }
    }
    if ((DAT_0202f600 != 0) && (DAT_0202f600 = DAT_0202f600 - 1, (DAT_0202f600 & 3) == 3)) {
      cVar2 = sub_08025978(*(undefined4 *)(param_1 + 0x64ac));
      if (cVar2 == '\0') {
        DAT_0202f600 = 0;
      }
    }
  }
  else {
    DAT_0202f600 = 0;
  }
  return in_lr;
}

