// sub_08069354 at 0x08069354 (thumb)

undefined4 sub_08069354(int param_1)

{
  byte bVar1;
  undefined uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  char cVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  undefined4 in_lr;
  byte local_24;
  
  iVar3 = *(int *)(param_1 + 0xb4);
  iVar4 = *(int *)(param_1 + 0xb8);
  iVar5 = *(int *)(param_1 + 0xbc);
  iVar6 = *(int *)(param_1 + 0xc0);
  bVar1 = *(byte *)(param_1 + 10);
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(byte *)(iVar6 + 10) = *(byte *)(iVar6 + 10) & 0xfe;
    sub_0801CF00(iVar3,0x5700);
    sub_0801CF00(iVar4,0x5702);
    sub_0801CF00(iVar5,0x5706);
    uVar15 = (bVar1 >> 4 & 1) + 1 & 1;
    *(char *)(param_1 + 0x4c) = (char)uVar15;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar15 << 4);
    if (uVar15 == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    iVar12 = *(int *)(iVar5 + 0x54);
    iVar13 = *(int *)(iVar5 + 0x58);
    iVar7 = *(int *)(iVar4 + 0x54);
    iVar10 = *(int *)(iVar4 + 0x58);
    *(int *)(iVar4 + 0x54) = iVar12;
    *(int *)(iVar4 + 0x58) = iVar13;
    *(int *)(iVar6 + 0x54) = iVar7;
    *(int *)(iVar6 + 0x58) = iVar10;
    *(int *)(iVar5 + 0x54) = iVar7;
    *(int *)(iVar5 + 0x58) = iVar10;
    uVar14 = *(byte *)(iVar5 + 0xb4) + 0x80;
    uVar8 = *(byte *)(iVar4 + 0xb4) + 0x80;
    uVar11 = uVar8 & 0xff;
    uVar2 = sub_0810CD50(iVar7 + *(short *)((int)&DAT_08128c10 +
                                           (uVar8 * 0x1000000 + 0x40000000 >> 0x17)) * 0xc,
                         iVar10 + (short)(&DAT_08128c10)[uVar11] * 0xc,
                         iVar12 + *(short *)((int)&DAT_08128c10 +
                                            (uVar14 * 0x1000000 + 0xc0000000 >> 0x17)) * 0xc,
                         iVar13 + *(short *)((int)&DAT_08128c10 +
                                            (uVar14 * 0x1000000 + 0x80000000 >> 0x17)) * 0xc);
    cVar9 = *(char *)(param_1 + 0xc4) + -0x80;
    *(undefined *)(iVar3 + 0xb4) = uVar2;
    local_24 = (byte)uVar14;
    *(byte *)(iVar4 + 0xb4) = local_24;
    *(byte *)(iVar6 + 0xb4) = (byte)uVar8;
    *(byte *)(iVar5 + 0xb4) = (byte)uVar8;
    *(char *)(param_1 + 0xc4) = cVar9;
    sub_0806A77C(param_1,cVar9,uVar15,1);
    sub_0806AA78(iVar3,uVar2,uVar15,1);
    sub_0806A844(iVar4,uVar14 & 0xff,uVar15,1);
    sub_0806A844(iVar5,uVar11,uVar15,1);
    sub_0806A844(iVar6,uVar11,uVar15,1);
    sub_0806ACAC(param_1);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(iVar3);
  sub_0801CFF0(iVar4);
  sub_0801CFF0(iVar5);
  if ((*(char *)(iVar4 + 0x73) == '\x03') && (*(char *)(iVar5 + 0x73) == '\x03')) {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

