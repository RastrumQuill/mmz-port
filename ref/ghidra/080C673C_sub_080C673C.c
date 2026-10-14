// sub_080C673C at 0x080C673C (thumb)

undefined4 sub_080C673C(int param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  uVar3 = param_2 & 0xff;
  if (uVar3 - 1 < 0x4e) {
    sub_080B51BC(uVar3);
    sub_080B51F8(param_1,uVar3);
    iVar4 = 0x17d;
    iVar2 = 3;
    do {
      iVar2 = iVar2 + -1;
      if (*(byte *)(param_1 + 0x180 + iVar2) == uVar3) {
        iVar4 = 0x181;
      }
    } while ((iVar2 != 0) && (iVar4 == 0x17d));
    if (iVar4 == 0x17d) {
      cVar1 = sub_080B47D8(param_1,uVar3);
      if (cVar1 == '\0') {
        iVar4 = 0x180;
      }
      else {
        uVar3 = uVar3 >> 3;
        param_2 = param_2 & 7;
        if ((((int)(uint)*(byte *)(param_1 + 0x1b8 + uVar3) >> param_2 & 1U) != 0) ||
           ((((int)(uint)*(byte *)(param_1 + 0x1a4 + uVar3) >> param_2 & 1U) != 0 &&
            (((int)(uint)*(byte *)(param_1 + 0x1ae + uVar3) >> param_2 & 1U) == 0)))) {
          iVar4 = 0x17f;
        }
      }
    }
    sub_080BC0AC(&UNK_082b932a + (ushort)(&DAT_082b8f3c)[iVar4],1,0x12);
  }
  return in_lr;
}

