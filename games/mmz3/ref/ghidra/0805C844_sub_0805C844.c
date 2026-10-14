// sub_0805C844 at 0x0805C844 (thumb)

undefined4 sub_0805C844(int param_1)

{
  char cVar1;
  byte bVar2;
  undefined uVar3;
  short sVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') goto LAB_0805c8ee;
  sub_08017700(param_1,0xb50e);
  sub_08007390(param_1 + 0x74,&DAT_08361690);
  *(byte *)(param_1 + 0x4c) = (*(byte *)(param_1 + 10) >> 4 ^ 1) & 1;
  uVar7 = (*(byte *)(param_1 + 10) >> 4 ^ 1) & 1;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar7 << 4);
  if (uVar7 == 0) {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar2;
  *(undefined4 *)(param_1 + 0x60) = 0xfffffb80;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  iVar5 = sub_0800A4B4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  if (*(int *)(param_1 + 0xb4) == iVar5) {
    iVar5 = sub_0800A3C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    if (*(int *)(param_1 + 0xb8) != iVar5) goto LAB_0805c8e4;
    *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 0x58);
    uVar3 = 0xff;
  }
  else {
LAB_0805c8e4:
    uVar3 = 0x1b;
  }
  *(undefined *)(param_1 + 0x12) = uVar3;
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
LAB_0805c8ee:
  sub_080177F4(param_1);
  iVar5 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar5;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
  cVar1 = *(char *)(param_1 + 0x12);
  if (cVar1 == -1) {
    if ((*(int *)(param_1 + 0xc0) <= iVar5) &&
       (sVar4 = sub_08009A3C(*(undefined4 *)(param_1 + 0x54),iVar5), sVar4 != 0)) {
      uVar6 = sub_0800A104(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      *(undefined4 *)(param_1 + 0x58) = uVar6;
      *(undefined *)(param_1 + 0xd) = 7;
      *(undefined *)(param_1 + 0xe) = 0;
      *(undefined *)(param_1 + 0xbe) = 0;
    }
  }
  else {
    *(char *)(param_1 + 0x12) = cVar1 + -1;
    if (cVar1 == '\0') {
      *(undefined *)(param_1 + 0xd) = 0xe;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}

