// sub_080F8D08 at 0x080F8D08 (thumb)

undefined4 sub_080F8D08(int param_1)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 in_lr;
  undefined auStack_18 [4];
  
  sub_08128B5C(auStack_18,&DAT_08129d6c,3);
  uVar4 = (uint)*(byte *)(param_1 + 0x10);
  bVar1 = *(byte *)(param_1 + 0x11);
  DAT_0202e8d6 = DAT_0202e8d6 + 1;
  if (DAT_0202e8d6 < 2) {
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
    uVar3 = sub_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar3;
    if (uVar4 == 3) {
      uVar4 = DAT_0202dc38 * 0x343fd + 0x269ec3;
      DAT_0202dc38 = uVar4 & 0x7fffffff;
      uVar4 = sub_08128A9C(uVar4 * 2 >> 0x11,3);
    }
    *(undefined *)(param_1 + 0xb4) = auStack_18[uVar4];
    *(undefined *)(param_1 + 0xb6) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    sub_0801CC9C(param_1);
    *(undefined *)(param_1 + 0x25) = 0x18;
    if (bVar1 == 0) {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar2;
    uVar4 = bVar1 & 1;
    *(char *)(param_1 + 0x4c) = (char)uVar4;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar4 << 4);
    sub_0801CF00(param_1,0x8100);
    sub_0801CFF0(param_1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_08005760(param_1 + 0x74,&DAT_08866f00,param_1 + 0x54,0x20);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0x80f978d;
    sub_080F9BA8(param_1);
    sub_080F8E7C(param_1);
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  return in_lr;
}

