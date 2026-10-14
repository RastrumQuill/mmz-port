// sub_080B14C8 at 0x080B14C8 (thumb)

undefined4 sub_080B14C8(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 in_lr;
  
  sub_0801749C();
  bVar1 = *(byte *)(param_1 + 10);
  *(byte *)(param_1 + 10) = bVar1 | 3;
  cVar2 = *(char *)(param_1 + 0x10);
  if (cVar2 == '\0') {
    *(byte *)(param_1 + 10) = bVar1 & 0xef | 3;
    *(undefined *)(param_1 + 0x4c) = 0;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 4);
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  else {
    if (cVar2 == '\x01') {
      *(byte *)(param_1 + 10) = bVar1 & 0xef | 3;
      *(undefined *)(param_1 + 0x4c) = 0;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
      bVar1 = *(byte *)(param_1 + 9);
      *(undefined4 *)(param_1 + 0xc) = 1;
    }
    else {
      if ((cVar2 != '\x02') && (cVar2 != '\x03')) goto LAB_080b158c;
      *(byte *)(param_1 + 10) = bVar1 & 0xef | 3;
      *(undefined *)(param_1 + 0x4c) = 0;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
      bVar1 = *(byte *)(param_1 + 9);
      *(undefined4 *)(param_1 + 0xc) = 1;
    }
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_083670d4)[bVar1] + 4);
    *(char *)(param_1 + 0xd) = cVar2;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
LAB_080b158c:
  *(undefined *)(param_1 + 0x12) = 0xff;
  *(undefined *)(param_1 + 0xbc) = 0;
  sub_080B15A8(param_1);
  return in_lr;
}

