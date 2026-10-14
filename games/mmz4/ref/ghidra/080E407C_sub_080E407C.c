// sub_080E407C at 0x080E407C (thumb)

undefined4 sub_080E407C(int param_1)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  undefined4 uVar4;
  byte *pbVar5;
  undefined4 in_lr;
  
  uVar3 = DAT_0202dc38 * 0x343fd + 0x269ec3;
  DAT_0202dc38 = uVar3 & 0x7fffffff;
  cVar1 = sub_08128A9C(uVar3 * 2 >> 0x11,3);
  sub_0801CC9C(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801CEEC(param_1);
  if (cVar1 == '\0') {
    uVar4 = 0xb10b;
  }
  else {
    if (cVar1 != '\x01') {
      sub_0801CF00(param_1,0xb10d);
      goto LAB_080e40ec;
    }
    uVar4 = 0xb10c;
  }
  sub_0801CF00(param_1,uVar4);
LAB_080e40ec:
  sub_0801CFF0(param_1);
  uVar3 = DAT_0202dc38 * 0x343fd + 0x269ec3;
  DAT_0202dc38 = uVar3 & 0x7fffffff;
  uVar3 = uVar3 * 2 >> 0x11 & 1;
  if (uVar3 == 0) {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar2;
  *(char *)(param_1 + 0x4c) = (char)uVar3;
  pbVar5 = (byte *)(param_1 + 0x4a);
  *pbVar5 = *pbVar5 & 0xef | (byte)(uVar3 << 4);
  uVar3 = DAT_0202dc38 * 0x343fd + 0x269ec3;
  DAT_0202dc38 = uVar3 & 0x7fffffff;
  uVar3 = uVar3 * 2 >> 0x11 & 1;
  if (uVar3 == 0) {
    bVar2 = *(byte *)(param_1 + 10) & 0xdf;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 0x20;
  }
  *(byte *)(param_1 + 10) = bVar2;
  *(char *)(param_1 + 0x4d) = (char)uVar3;
  *pbVar5 = *pbVar5 & 0xdf | (byte)(uVar3 << 5);
  uVar3 = DAT_0202dc38 * 0x343fd + 0x269ec3;
  *(uint *)(param_1 + 0x5c) = (uVar3 * 0x80 >> 0x17) + 0x100;
  uVar3 = (uVar3 & 0x7fffffff) * 0x343fd + 0x269ec3;
  DAT_0202dc38 = uVar3 & 0x7fffffff;
  *(uint *)(param_1 + 0x60) = (8 - (uVar3 * 2 >> 0x11 & 0xf)) * 0x40;
  *(undefined *)(param_1 + 0x12) = 0xff;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 4);
  sub_080E3D88(param_1);
  return in_lr;
}

