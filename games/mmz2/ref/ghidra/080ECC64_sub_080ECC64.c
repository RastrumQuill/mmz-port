// sub_080ECC64 at 0x080ECC64 (thumb)

undefined4 sub_080ECC64(int param_1,uint param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  
  uVar4 = param_2 & 0xff;
  if (uVar4 - 1 < 0x51) {
    sub_080D5B80(uVar4);
    sub_080D5BBC(param_1,uVar4);
    cVar1 = sub_080D5A34(param_1,uVar4);
    if (cVar1 == '\0') {
      iVar3 = 0x182;
    }
    else {
      uVar2 = (param_2 << 0x18) >> 0x1b;
      param_2 = param_2 & 7;
      if ((((int)(uint)*(byte *)(param_1 + 0x23e + uVar2) >> param_2 & 1U) == 0) &&
         ((((int)(uint)*(byte *)(param_1 + 0x228 + uVar2) >> param_2 & 1U) == 0 ||
          (((int)(uint)*(byte *)(param_1 + 0x233 + uVar2) >> param_2 & 1U) != 0)))) {
        iVar3 = 0x187;
        if ((&DAT_0834a1d4)[uVar4 * 0xc] != -1) {
          iVar3 = 0x185;
        }
      }
      else {
        iVar3 = 0x186;
      }
    }
    sub_080DE510(&DAT_0834c9e4 + (ushort)(&DAT_0834c47c)[iVar3],1,0x12);
  }
  return in_lr;
}

