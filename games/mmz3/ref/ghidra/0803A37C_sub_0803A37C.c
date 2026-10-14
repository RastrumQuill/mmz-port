// sub_0803A37C at 0x0803A37C (thumb)

undefined4 sub_0803A37C(int param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0xb4);
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_0800736C(param_1 + 0x74,&DAT_0835daa4,param_1 + 0x54,1);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    cVar1 = sub_08034748(iVar3);
    sub_080073A0(param_1 + 0x74,&DAT_0835daa4,cVar1 + '\f',
                 (&DAT_0835da4c)[*(byte *)(param_1 + 0xc1)],0xffffffff,0xffffffff);
    *(undefined4 *)(param_1 + 0x98) = 0x8039f89;
    sub_08017700(param_1,0x8e00);
    if (*(char *)(param_1 + 0x10) == '\x02') {
      bVar2 = *(byte *)(param_1 + 10);
      uVar4 = ~(uint)(bVar2 >> 4) & 1;
      if (uVar4 == 0) {
        bVar2 = bVar2 & 0xef;
      }
      else {
        bVar2 = bVar2 | 0x10;
      }
      *(byte *)(param_1 + 10) = bVar2;
      *(char *)(param_1 + 0x4c) = (char)uVar4;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar4 << 4);
    }
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      *(int *)(param_1 + 0x54) =
           *(int *)(param_1 + 0x54) -
           (int)*(short *)(&DAT_0835da64 + (uint)*(byte *)(param_1 + 0x10) * 4);
      uVar6 = 0xfffffd00;
    }
    else {
      *(int *)(param_1 + 0x54) =
           *(int *)(param_1 + 0x54) +
           (int)*(short *)(&DAT_0835da64 + (uint)*(byte *)(param_1 + 0x10) * 4);
      uVar6 = 0x300;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar6;
    *(undefined4 *)(param_1 + 100) = 0x40;
    *(int *)(param_1 + 0x58) =
         *(int *)(param_1 + 0x58) +
         (int)*(short *)(&DAT_0835da56 + (uint)*(byte *)(param_1 + 0x10) * 4);
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined *)(param_1 + 0x12) = 0x20;
    *(undefined *)(param_1 + 0x13) = 0;
    sub_0803C3E8(*(undefined4 *)(param_1 + 0xb4),param_1,0);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  iVar7 = *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar7;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  iVar5 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar5;
  if (0x700 < iVar5) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar7 = iVar7 - *(int *)(param_1 + 100);
    *(int *)(param_1 + 0x5c) = iVar7;
    uVar6 = 0xfffffb00;
    if (-0x501 < iVar7) goto LAB_0803a4fe;
  }
  else {
    iVar7 = iVar7 + *(int *)(param_1 + 100);
    *(int *)(param_1 + 0x5c) = iVar7;
    uVar6 = 0x500;
    if (iVar7 < 0x501) goto LAB_0803a4fe;
  }
  *(undefined4 *)(param_1 + 0x5c) = uVar6;
LAB_0803a4fe:
  iVar7 = sub_0800A104(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0xd00);
  iVar8 = iVar7 + -0xd00;
  iVar5 = *(int *)(param_1 + 0x58);
  if (iVar8 < iVar5) {
    *(undefined4 *)(param_1 + 0x60) = 0;
    if (iVar5 - iVar8 < 0xf01) {
      *(int *)(param_1 + 0x58) = iVar8;
    }
    else {
      *(undefined *)(param_1 + 0x13) = 1;
    }
    if ((*(char *)(iVar3 + 0xc2) == '\x01') && ((*(byte *)(param_1 + 0x12) & 3) == 0)) {
      iVar5 = *(int *)(param_1 + 0x58) - iVar8;
      if (iVar5 < 0) {
        iVar5 = iVar8 - *(int *)(param_1 + 0x58);
      }
      if (iVar5 < 0x1000) {
        sub_0803CE68(iVar3,*(undefined4 *)(param_1 + 0x54),iVar7);
      }
    }
  }
  else if (iVar8 - iVar5 < 0x800) {
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(int *)(param_1 + 0x58) = iVar8;
    if ((*(char *)(iVar3 + 0xc2) == '\x01') && ((*(byte *)(param_1 + 0x12) & 3) == 0)) {
      sub_0803CE68(iVar3,*(undefined4 *)(param_1 + 0x54),iVar7);
    }
  }
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar3 = sub_08009F80(*(int *)(param_1 + 0x54) + -0xd00,*(undefined4 *)(param_1 + 0x58));
  }
  else {
    iVar3 = sub_08009E14(*(int *)(param_1 + 0x54) + 0xd00,*(undefined4 *)(param_1 + 0x58));
  }
  if (iVar3 != 0) {
    *(undefined *)(param_1 + 0x13) = 1;
  }
  if ((*(uint *)(param_1 + 0x8c) & 0x100) != 0) {
    *(undefined *)(param_1 + 0x13) = 1;
  }
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if ((cVar1 == -1) || (*(char *)(param_1 + 0x13) != '\0')) {
    *(undefined *)(param_1 + 0xc0) = 0xc0;
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

