// sub_08057820 at 0x08057820 (thumb)

undefined4 sub_08057820(int param_1)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  undefined uVar4;
  undefined4 in_lr;
  
  cVar1 = *(char *)(param_1 + 0xb4);
  if (cVar1 == *(char *)(param_1 + 0xd)) {
    if (cVar1 != '\x15') {
      uVar4 = 0x16;
      if (cVar1 == '\x16') {
        uVar4 = 0x17;
      }
      goto LAB_0805788e;
    }
    uVar3 = DAT_0202e188 * 0x343fd + 0x269ec3;
    DAT_0202e188 = uVar3 & 0x7fffffff;
    bVar2 = sub_080EF330(uVar3 * 2 >> 0x11,0xe);
    uVar4 = 0x17;
    if (6 < bVar2) goto LAB_0805788e;
  }
  else {
    uVar3 = DAT_0202e188 * 0x343fd + 0x269ec3;
    DAT_0202e188 = uVar3 & 0x7fffffff;
    uVar4 = 0x17;
    if (7 < (uVar3 * 2 >> 0x11 & 0xf)) goto LAB_0805788e;
  }
  uVar4 = 0x16;
LAB_0805788e:
  *(undefined *)(param_1 + 0xb4) = *(undefined *)(param_1 + 0xd);
  *(undefined *)(param_1 + 0xd) = uVar4;
  *(undefined *)(param_1 + 0xe) = 0;
  *(undefined *)(param_1 + 0xf) = 0;
  return in_lr;
}

