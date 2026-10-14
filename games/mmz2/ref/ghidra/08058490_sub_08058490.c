// sub_08058490 at 0x08058490 (thumb)

undefined4 sub_08058490(int param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  uVar3 = 5;
  if ((4 < *(byte *)(DAT_0202ebf0 + 1)) && (*(short *)(param_1 + 0xa4) < 0x20)) {
    uVar3 = 6;
  }
  do {
    uVar2 = DAT_0202e188 * 0x343fd + 0x269ec3;
    DAT_0202e188 = uVar2 & 0x7fffffff;
    uVar2 = sub_080EF330(uVar2 * 2 >> 0x11,uVar3);
    uVar2 = uVar2 & 0xff;
    if (uVar2 == 3) {
      uVar2 = 4;
    }
    *(undefined *)(param_1 + 0xdb) = (&DAT_0833caf0)[uVar2];
    *(undefined *)(param_1 + 0xd) = (&DAT_0833cb4a)[uVar2];
    cVar1 = sub_08057B0C(param_1,*(undefined *)(param_1 + 0xdb));
  } while (cVar1 != '\0');
  *(undefined *)(param_1 + 0xe) = 0;
  return in_lr;
}

