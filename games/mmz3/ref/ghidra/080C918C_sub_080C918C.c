// sub_080C918C at 0x080C918C (thumb)

undefined4 sub_080C918C(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 in_lr;
  
  sub_0801749C();
  bVar1 = *(byte *)(param_1 + 10);
  *(byte *)(param_1 + 10) = bVar1 | 3;
  if (*(char *)(param_1 + 0x10) == '\0') {
    *(byte *)(param_1 + 10) = bVar1 & 0xef | 3;
    *(undefined *)(param_1 + 0x4c) = 0;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  }
  else {
    *(byte *)(param_1 + 10) = bVar1 | 0x13;
    *(undefined *)(param_1 + 0x4c) = 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
  }
  cVar2 = *(char *)(param_1 + 0x10);
  if (cVar2 == '\0') {
    uVar3 = 0xffffff80;
  }
  else {
    uVar3 = 0x80;
  }
  *(undefined4 *)(param_1 + 0x5c) = uVar3;
  *(undefined4 *)(param_1 + 0x60) = 0;
  if (*(char *)(param_1 + 0x11) == '\0') {
    *(undefined *)(param_1 + 0x12) = 0xff;
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 4);
    *(undefined *)(param_1 + 0xd) = 1;
    goto LAB_080c927c;
  }
  if (cVar2 == '\x02') {
    *(undefined *)(param_1 + 0x11) = 1;
LAB_080c9238:
    *(char *)(param_1 + 0x22) = cVar2;
  }
  else {
    if (cVar2 == '\x01') {
      *(undefined *)(param_1 + 0x11) = 1;
      goto LAB_080c9238;
    }
    *(undefined *)(param_1 + 0x11) = 0;
    *(undefined *)(param_1 + 0x22) = 0;
  }
  uVar4 = DAT_0202f608 * 0x343fd + 0x269ec3;
  DAT_0202f608 = uVar4 & 0x7fffffff;
  *(byte *)(param_1 + 0x12) = ((byte)(uVar4 * 2 >> 0x11) & 7) + 0x7f;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 4);
  *(undefined *)(param_1 + 0xd) = 2;
LAB_080c927c:
  *(undefined *)(param_1 + 0xe) = 0;
  *(undefined *)(param_1 + 0xf) = 0;
  sub_080C929C(param_1);
  return in_lr;
}

