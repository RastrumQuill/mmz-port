// sub_08036470 at 0x08036470 (thumb)

undefined4 sub_08036470(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  bool bVar6;
  int iVar7;
  undefined4 in_lr;
  
  iVar7 = *(int *)(param_1 + 0x28);
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 == 1) {
LAB_080364a4:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x71) == '\x02') {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      *(undefined *)(iVar7 + 0x35) = 0;
      sub_08017700(param_1,0xbd17);
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      goto LAB_080364a4;
    }
  }
  else {
    if (bVar1 == 2) {
      sub_0800471C(0xf7);
      sub_08007390(param_1 + 0x74,&DAT_0835b3f8);
      *(undefined4 *)(param_1 + 0x60) = 0x200;
      sub_08017700(param_1,0xbd19);
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    else if (bVar1 != 3) goto LAB_08036572;
    if ((*(uint *)(param_1 + 0x8c) & 4) != 0) {
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) / 2;
    }
    iVar3 = *(int *)(param_1 + 0x60) + 0x10;
    *(int *)(param_1 + 0x60) = iVar3;
    if (0x300 < iVar3) {
      *(undefined4 *)(param_1 + 0x60) = 0x300;
    }
    iVar3 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = iVar3;
    iVar3 = sub_08009BE4(*(undefined4 *)(param_1 + 0x54),iVar3 + 0x2300);
    bVar1 = (byte)*(ushort *)(iVar7 + 0x10) & 2;
    if ((*(ushort *)(iVar7 + 0x10) & 2) == 0) {
      *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x58);
      *(byte *)(param_1 + 0xd) = bVar1;
      *(byte *)(param_1 + 0xe) = bVar1;
      return in_lr;
    }
    if (iVar3 < 0) {
      iVar4 = *(int *)(param_1 + 0x5c) * 0x60;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 0xff;
      }
      *(int *)(param_1 + 0x5c) = iVar4 >> 8;
      iVar3 = *(int *)(param_1 + 0x58) + iVar3;
      *(int *)(param_1 + 0x58) = iVar3;
      *(int *)(param_1 + 100) = iVar3;
      *(undefined *)(param_1 + 0xd) = 0;
      *(undefined *)(param_1 + 0xe) = 0;
    }
    sub_080177F4(param_1);
  }
LAB_08036572:
  bVar6 = false;
  if ((*(ushort *)(iVar7 + 0x10) & 0x20) == 0) {
    if ((*(ushort *)(iVar7 + 0x10) & 0x10) == 0) goto LAB_080365aa;
    iVar7 = *(int *)(param_1 + 0x5c) + 0x10;
    *(int *)(param_1 + 0x5c) = iVar7;
    uVar5 = 0x300;
    if (0x300 < iVar7) goto LAB_080365a6;
  }
  else {
    iVar7 = *(int *)(param_1 + 0x5c) + -0x10;
    *(int *)(param_1 + 0x5c) = iVar7;
    uVar5 = 0xfffffd00;
    if (iVar7 < -0x300) {
LAB_080365a6:
      *(undefined4 *)(param_1 + 0x5c) = uVar5;
    }
  }
  bVar6 = true;
LAB_080365aa:
  cVar2 = sub_080360BC(param_1);
  if ((cVar2 != '\0') && (!bVar6)) {
    *(undefined4 *)(param_1 + 0x5c) = 0;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  return in_lr;
}

