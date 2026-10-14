// sub_0805A754 at 0x0805A754 (thumb)

undefined4 sub_0805A754(int param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08017700(param_1,0xb40f);
    *(undefined *)(*(int *)(param_1 + 0x2c) + 0xe) = 1;
    *(undefined2 *)(*(int *)(param_1 + 0x2c) + 0xbc) = 0x640e;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0x12) = 0;
  }
  sub_080177F4(param_1);
  iVar4 = DAT_0202f5c0;
  *(bool *)(param_1 + 0x4c) = *(int *)(param_1 + 0x54) < *(int *)(DAT_0202f5c0 + 0x54);
  iVar4 = *(int *)(iVar4 + 0x54);
  *(byte *)(param_1 + 0x4a) =
       *(byte *)(param_1 + 0x4a) & 0xef | (*(int *)(param_1 + 0x54) < iVar4) << 4;
  if (*(int *)(param_1 + 0x54) < iVar4) {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  iVar4 = *(int *)(param_1 + 0x60) + 0x60;
  *(int *)(param_1 + 0x60) = iVar4;
  if (0x700 < iVar4) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  cVar2 = *(char *)(param_1 + 0x12) + '\x01';
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == '\x0e') {
    if (*(char *)(param_1 + 0x13) == '\x01') {
      iVar4 = *(int *)(DAT_0202f5c0 + 0x54) - *(int *)(param_1 + 0x54);
      iVar6 = *(int *)(param_1 + 0x58);
      iVar5 = -0x2000;
    }
    else {
      iVar4 = *(int *)(DAT_0202f5c0 + 0x54) - *(int *)(param_1 + 0x54);
      iVar6 = *(int *)(param_1 + 0x58);
      iVar5 = 0x3000;
    }
    uVar3 = sub_080FE10C(iVar4 * 0x1000 >> 0x10,
                         (*(int *)(DAT_0202f5c0 + 0x58) - (iVar6 + iVar5)) * 0x1000 >> 0x10);
    uVar3 = (int)((uVar3 & 0xffff) + 0x4000) >> 8 & 0xff;
    sub_0800471C(0x43);
    sub_080AA560(param_1,uVar3 + 6 & 0xff);
    sub_080AA560(param_1,uVar3 - 6 & 0xff);
  }
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 0xf;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

