// sub_080C1828 at 0x080C1828 (thumb)

undefined4 sub_080C1828(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined2 *puVar8;
  int iVar9;
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
    sub_0800393C(&DAT_085d79e8,(DAT_0202fa28 - 0x326) * 0x20 + 0x10000);
    sub_08003E14(&DAT_085d79f4,(DAT_0202f828 - 7) * 0x20 + 0x200);
    *(undefined *)(param_1 + 0x12) = 0x3c;
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 4);
    *(undefined *)(param_1 + 0xd) = 4;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    uVar6 = DAT_0202f608 * 0x343fd + 0x269ec3;
    uVar2 = (uVar6 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar2 & 0x7fffffff;
    iVar9 = 0;
    do {
      iVar3 = sub_0800710C(DAT_0203062c);
      if (iVar3 != 0) {
        *(undefined *)(iVar3 + 0x25) = 1;
        *(undefined *)(iVar3 + 9) = 0x3a;
        *(undefined4 *)(iVar3 + 0x14) = 0x80c1829;
        *(undefined2 *)(iVar3 + 0x20) = 0;
        *(undefined *)(iVar3 + 0x22) = 0;
        *(undefined *)(iVar3 + 0x10) = 5;
        uVar7 = *(undefined4 *)(param_1 + 0x58);
        *(undefined4 *)(iVar3 + 0x54) = *(undefined4 *)(param_1 + 0x54);
        *(undefined4 *)(iVar3 + 0x58) = uVar7;
        if ((uVar6 * 2 >> 0x11 & 1) == 0) {
          puVar4 = &DAT_080fed14;
        }
        else {
          puVar4 = &DAT_080fecfc;
        }
        *(int *)(iVar3 + 0x5c) = (int)puVar4[iVar9] >> 1;
        uVar5 = DAT_0202f608 * 0x343fd + 0x269ec3;
        DAT_0202f608 = uVar5 & 0x7fffffff;
        *(uint *)(iVar3 + 0x5c) = *(int *)(iVar3 + 0x5c) + -0x20 + (uVar5 * 2 >> 0x11 & 0x3f);
        if ((uVar2 * 2 >> 0x11 & 1) == 0) {
          puVar8 = &DAT_080fece4;
        }
        else {
          puVar8 = &DAT_080fecf0;
        }
        *(undefined2 *)(iVar3 + 0x80) = puVar8[iVar9];
        uVar5 = DAT_0202f608 * 0x343fd + 0x269ec3;
        DAT_0202f608 = uVar5 & 0x7fffffff;
        *(uint *)(iVar3 + 0x60) = (uVar5 * 0x80 >> 0x17) + 0x80;
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < 6);
  }
  else if (cVar1 == '\x05') {
    sub_080175BC(param_1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
    uVar6 = DAT_0202f608 * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar6 & 0x7fffffff;
    *(byte *)(param_1 + 0x12) = ((byte)(uVar6 * 2 >> 0x11) & 7) + 0x3c;
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 4);
    *(undefined *)(param_1 + 0xd) = 5;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  else if (cVar1 == '\x06') {
    sub_0801749C(param_1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 4);
    *(undefined *)(param_1 + 0xd) = 7;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | 8;
  }
  else if (cVar1 == '\a') {
    sub_0801749C(param_1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 4);
    *(undefined *)(param_1 + 0xd) = 8;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    if (*(short *)(param_1 + 0x82) == 1) {
      *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | 8;
    }
  }
  sub_080C1BB8(param_1);
  return in_lr;
}

