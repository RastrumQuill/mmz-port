// sub_080EBBD8 at 0x080EBBD8 (thumb)

undefined4 sub_080EBBD8(int param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  uVar3 = param_2 & 0xff;
  if (uVar3 - 1 < 0x51) {
    sub_080D5B80(uVar3);
    sub_080D5BBC(param_1,uVar3);
    iVar4 = 0x17d;
    iVar2 = 3;
    do {
      iVar2 = iVar2 + -1;
      if (*(byte *)(param_1 + 0x20a + iVar2) == uVar3) {
        iVar4 = 0x181;
      }
    } while ((iVar2 != 0) && (iVar4 == 0x17d));
    if (iVar4 == 0x17d) {
      cVar1 = sub_080D5A34(param_1,uVar3);
      if (cVar1 == '\0') {
        iVar4 = 0x180;
      }
      else {
        uVar3 = uVar3 >> 3;
        param_2 = param_2 & 7;
        if ((((int)(uint)*(byte *)(param_1 + 0x23e + uVar3) >> param_2 & 1U) != 0) ||
           ((((int)(uint)*(byte *)(param_1 + 0x228 + uVar3) >> param_2 & 1U) != 0 &&
            (((int)(uint)*(byte *)(param_1 + 0x233 + uVar3) >> param_2 & 1U) == 0)))) {
          iVar4 = 0x17f;
        }
      }
    }
    sub_080DE510(&DAT_0834c9e4 + (ushort)(&DAT_0834c47c)[iVar4],1,0x12);
  }
  return in_lr;
}

