// sub_080C5B00 at 0x080C5B00 (thumb)

undefined4 sub_080C5B00(int param_1,uint param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  
  uVar4 = param_2 & 0xff;
  if (uVar4 - 1 < 0x4e) {
    sub_080B51BC(uVar4);
    sub_080B51F8(param_1,uVar4);
    cVar1 = sub_080B47D8(param_1,uVar4);
    if (cVar1 == '\0') {
      iVar3 = 0x182;
    }
    else {
      uVar2 = (param_2 << 0x18) >> 0x1b;
      param_2 = param_2 & 7;
      if ((((int)(uint)*(byte *)(param_1 + 0x1b8 + uVar2) >> param_2 & 1U) == 0) &&
         ((((int)(uint)*(byte *)(param_1 + 0x1a4 + uVar2) >> param_2 & 1U) == 0 ||
          (((int)(uint)*(byte *)(param_1 + 0x1ae + uVar2) >> param_2 & 1U) != 0)))) {
        iVar3 = 0x187;
        if ((&DAT_082b6ea4)[uVar4 * 0xc] != -1) {
          iVar3 = 0x185;
        }
      }
      else {
        iVar3 = 0x186;
      }
    }
    sub_080BC0AC(&UNK_082b932a + (ushort)(&DAT_082b8f3c)[iVar3],1,0x12);
  }
  return in_lr;
}

