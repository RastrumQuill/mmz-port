// sub_080786F0 at 0x080786F0 (thumb)

undefined4 sub_080786F0(int param_1)

{
  short sVar1;
  byte bVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined uVar9;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined *)(param_1 + 0xe) = 0;
  sub_08012580(param_1);
  sub_080127D0(param_1);
  *(undefined *)(param_1 + 0x25) = 0x16;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined *)(param_1 + 0x12) = 0;
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x58);
  uVar6 = sub_08038EC0(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58),
                       *(undefined4 *)(iVar5 + 100),*(undefined4 *)(iVar5 + 0x68));
  uVar6 = uVar6 & 0xff;
  if (*(char *)(param_1 + 0x11) == '\0') {
    sub_080127E4(param_1,0xa60c);
    *(int *)(param_1 + 0x5c) = (int)(short)(&DAT_080ef450)[uVar6 + 0x40 & 0xff] << 3;
    sVar1 = (&DAT_080ef450)[uVar6];
    *(int *)(param_1 + 0x60) = sVar1 * 8;
    *(undefined *)(param_1 + 0x12) = 0;
    iVar7 = sub_080EF150(*(int *)(param_1 + 0x54) - *(int *)(iVar5 + 100));
    if (iVar7 < 0) {
      iVar7 = -iVar7;
    }
    iVar8 = sub_080EF150(*(int *)(param_1 + 0x58) - *(int *)(iVar5 + 0x68),sVar1 * 8);
    if (iVar8 < 0) {
      iVar8 = -iVar8;
    }
    uVar9 = (undefined)(iVar7 + 1U);
    if ((iVar7 + 1U & 0xff) < (iVar8 + 1U & 0xff)) {
      uVar9 = (undefined)(iVar8 + 1U);
    }
    *(undefined *)(param_1 + 0x13) = uVar9;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_08006DE4(param_1 + 0x74,&DAT_0833fef0,param_1 + 0x54,4);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0x8079749;
    cVar3 = '\x06';
    do {
      sub_08078018(param_1,param_1 + 0x54,4,cVar3);
      cVar3 = cVar3 + -1;
    } while (cVar3 != '\0');
  }
  else if (*(char *)(param_1 + 0x11) == '\x01') {
    sub_080127E4(param_1,0xa61d);
    *(int *)(param_1 + 0x5c) = (int)(short)(&DAT_080ef450)[uVar6 + 0x40 & 0xff] << 3;
    sVar1 = (&DAT_080ef450)[uVar6];
    *(int *)(param_1 + 0x60) = sVar1 * 8;
    iVar7 = sub_080EF150(*(int *)(param_1 + 0x54) - *(int *)(iVar5 + 100));
    if (iVar7 < 0) {
      iVar7 = -iVar7;
    }
    iVar8 = sub_080EF150(*(int *)(param_1 + 0x58) - *(int *)(iVar5 + 0x68),sVar1 * 8);
    if (iVar8 < 0) {
      iVar8 = -iVar8;
    }
    uVar9 = (undefined)(iVar7 + 2U);
    if ((iVar7 + 2U & 0xff) < (iVar8 + 2U & 0xff)) {
      uVar9 = (undefined)(iVar8 + 2U);
    }
    *(undefined *)(param_1 + 0x13) = uVar9;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_08006DE4(param_1 + 0x74,&DAT_0833ff08,param_1 + 0x54,4);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0x8079749;
    cVar3 = '\x06';
    do {
      sub_08078018(param_1,param_1 + 0x54,5,cVar3);
      cVar3 = cVar3 + -1;
    } while (cVar3 != '\0');
  }
  bVar2 = ~(byte)((uint)*(int *)(param_1 + 0x5c) >> 0x18);
  if (*(int *)(param_1 + 0x5c) < 0) {
    bVar4 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar4 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar4;
  *(byte *)(param_1 + 0x4c) = bVar2 >> 7;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | ((char)bVar2 >> 7) * -0x10;
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 0x10;
  *(undefined *)(param_1 + 0x1d) = *(undefined *)(iVar5 + 0x1c);
  return in_lr;
}

