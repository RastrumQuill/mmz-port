// sub_080D26D4 at 0x080D26D4 (thumb)

undefined4 sub_080D26D4(int param_1)

{
  char cVar1;
  byte bVar2;
  undefined uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 in_lr;
  
  sub_0801CDBC();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801CF00(param_1,0xb00);
  sub_0801CFF0(param_1);
  uVar4 = DAT_0202dc38 * 0x343fd + 0x269ec3;
  DAT_0202dc38 = uVar4 & 0x7fffffff;
  uVar4 = uVar4 * 2 >> 0x11 & 1;
  if (uVar4 == 0) {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar2;
  *(char *)(param_1 + 0x4c) = (char)uVar4;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar4 << 4);
  *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3;
  uVar4 = DAT_0202dc38 * 0x343fd + 0x269ec3;
  uVar5 = (uVar4 * 2 >> 0x11 & 0x7f) + 0x100;
  uVar4 = (uVar4 & 0x7fffffff) * 0x343fd + 0x269ec3;
  cVar1 = *(char *)(param_1 + 0x11) * '@' + ((byte)(uVar4 * 2 >> 0x11) & 0x3f);
  *(short *)(param_1 + 0x50) = (short)uVar5;
  *(short *)(param_1 + 0x52) = (short)(uVar5 >> 1);
  *(char *)(param_1 + 0x24) = cVar1;
  uVar4 = (uVar4 & 0x7fffffff) * 0x343fd + 0x269ec3;
  DAT_0202dc38 = uVar4 & 0x7fffffff;
  uVar3 = sub_08128A9C(uVar4 * 2 >> 0x11,0x14);
  *(undefined *)(param_1 + 0x12) = uVar3;
  *(char *)(param_1 + 0x13) = cVar1;
  *(undefined4 *)(param_1 + 100) = 0x80;
  *(undefined4 *)(param_1 + 0x68) = 0x10;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 4);
  sub_080D263C(param_1);
  return in_lr;
}

