// sub_080B8D44 at 0x080B8D44 (thumb)

undefined4 sub_080B8D44(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  
  cVar1 = *(char *)(param_1 + 0x10);
  if (cVar1 == '\0') {
    sub_0801749C();
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
    *(undefined *)(param_1 + 0x12) = 8;
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 4);
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  else if (cVar1 == '\x01') {
    sub_0801749C(param_1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
    *(undefined *)(param_1 + 0x12) = 8;
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 4);
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  else if (cVar1 == '\x02') {
    sub_0801749C(param_1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
    *(undefined4 *)(param_1 + 0x74) = 0;
    *(undefined4 *)(param_1 + 0x78) = 0;
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 4);
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    *(undefined *)(param_1 + 0x25) = 0x18;
  }
  else if (cVar1 == '\x03') {
    sub_0801749C(param_1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
    *(undefined4 *)(param_1 + 0x74) = 0;
    *(undefined4 *)(param_1 + 0x78) = 0;
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 4);
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    *(undefined *)(param_1 + 0x25) = 0x18;
    *(undefined *)(param_1 + 0x12) = 0xa0;
  }
  else if (cVar1 == '\x04') {
    *(undefined *)(param_1 + 0x12) = 0x3c;
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 4);
    *(undefined *)(param_1 + 0xd) = 4;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    iVar2 = sub_0800710C(DAT_0203062c);
    if (iVar2 != 0) {
      *(undefined *)(iVar2 + 0x25) = 1;
      *(undefined *)(iVar2 + 9) = 0x19;
      *(undefined4 *)(iVar2 + 0x14) = 0x80b8d45;
      *(undefined2 *)(iVar2 + 0x20) = 0;
      *(undefined *)(iVar2 + 0x22) = 0;
      *(undefined *)(iVar2 + 0x10) = 5;
      uVar4 = *(undefined4 *)(param_1 + 0x58);
      *(undefined4 *)(iVar2 + 0x54) = *(undefined4 *)(param_1 + 0x54);
      *(undefined4 *)(iVar2 + 0x58) = uVar4;
      *(undefined4 *)(iVar2 + 0x5c) = 0;
      *(undefined2 *)(iVar2 + 0x80) = 0xe000;
      *(undefined4 *)(iVar2 + 0x60) = 0xc0;
    }
  }
  else if (cVar1 == '\x05') {
    sub_080175BC(param_1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
    uVar3 = DAT_0202f608 * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar3 & 0x7fffffff;
    *(byte *)(param_1 + 0x12) = ((byte)(uVar3 * 2 >> 0x11) & 7) + 0x3c;
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 4);
    *(undefined *)(param_1 + 0xd) = 5;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  sub_080B8F28(param_1);
  return in_lr;
}

