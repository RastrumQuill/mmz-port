// sub_0801F674 at 0x0801F674 (thumb)

undefined4 sub_0801F674(int param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  undefined4 in_lr;
  
  if (((*(byte *)(param_1 + 0xbe) < 3) && (*(char *)(param_1 + 0x115) != '\x06')) &&
     (*(char *)(param_1 + 0x73) == '\x03')) {
    sub_08018C20(param_1,6,1,1);
  }
  sub_08016D78(param_1);
  puVar6 = (undefined4 *)(param_1 + 0x108);
  sub_0801A0A4(param_1 + 0x4c,param_1 + 0xc4,*puVar6,*(byte *)(param_1 + 10) >> 4 & 1,1,1);
  iVar7 = *(int *)(param_1 + 0x58);
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + iVar7;
  cVar1 = sub_080191B4(param_1 + 0x4c,param_1 + 0xc4,*puVar6,*(byte *)(param_1 + 10) >> 4 & 1,1,1);
  bVar2 = sub_0801C1E8(param_1,*puVar6);
  *(byte *)(param_1 + 0x11c) = bVar2;
  uVar5 = (uint)bVar2;
  if (uVar5 < 100) {
    iVar3 = sub_080C8AD0(uVar5 << 5,100);
    iVar3 = 0x40 - iVar3;
  }
  else {
    iVar3 = 0x20;
  }
  if (*(int *)(param_1 + 0x60) < 1) {
    iVar3 = -iVar3;
  }
  *(int *)(param_1 + 0x60) = iVar3;
  iVar7 = iVar7 + iVar3;
  if (uVar5 < 100) {
    iVar3 = sub_080C8AD0(uVar5 << 10,100);
    iVar3 = 0x800 - iVar3;
  }
  else {
    iVar3 = 0x400;
  }
  if ((iVar7 + iVar3 == 0) || (iVar8 = iVar7, (uint)(iVar3 << 1) <= (uint)(iVar7 + iVar3))) {
    if (0x7ff < iVar3) {
      iVar3 = 0x7ff;
    }
    iVar8 = iVar3;
    if (iVar7 < 1) {
      iVar8 = -iVar3;
    }
  }
  *(int *)(param_1 + 0x58) = iVar8;
  if (cVar1 != '\0') {
    bVar2 = *(byte *)((uint)*(byte *)(param_1 + 0x12e) + param_1 + 0x130);
    uVar5 = bVar2 & 0xc;
    if ((bVar2 & 0xc) == 0) {
      *(undefined *)(param_1 + 0xbc) = *(undefined *)(param_1 + 0xd);
      *(char *)(param_1 + 0xd) = (char)uVar5;
      *(undefined *)(param_1 + 0xbd) = *(undefined *)(param_1 + 0xe);
      *(short *)(param_1 + 0xe) = (short)uVar5;
      *(undefined *)(param_1 + 0xc1) = *(undefined *)(param_1 + 0xbe);
      *(undefined *)(param_1 + 0xbe) = 0;
      *(undefined *)(param_1 + 0xc2) = *(undefined *)(param_1 + 0xbf);
      *(undefined *)(param_1 + 0xbf) = 0;
      *(undefined *)(param_1 + 0xc3) = *(undefined *)(param_1 + 0xc0);
      *(undefined *)(param_1 + 0xc0) = 0;
      *(uint *)(param_1 + 0x54) = uVar5;
      sub_08016DC4(param_1);
    }
    else {
      *(undefined *)(param_1 + 0xbc) = *(undefined *)(param_1 + 0xd);
      *(undefined *)(param_1 + 0xd) = 0;
      *(undefined *)(param_1 + 0xbd) = *(undefined *)(param_1 + 0xe);
      *(undefined2 *)(param_1 + 0xe) = 1;
      *(undefined *)(param_1 + 0xc1) = *(undefined *)(param_1 + 0xbe);
      *(undefined *)(param_1 + 0xbe) = 0;
      *(undefined *)(param_1 + 0xc2) = *(undefined *)(param_1 + 0xbf);
      *(undefined *)(param_1 + 0xbf) = 0;
      *(undefined *)(param_1 + 0xc3) = *(undefined *)(param_1 + 0xc0);
      *(undefined *)(param_1 + 0xc0) = 0;
      uVar4 = 0x200;
      if (((*(byte *)(param_1 + 0x17a) & 1) != 0) && ((DAT_02022b62 & 0x8000) == 0)) {
        uVar4 = 0x280;
      }
      *(undefined4 *)(param_1 + 0x54) = uVar4;
    }
    sub_08001EAC(6);
  }
  return in_lr;
}

