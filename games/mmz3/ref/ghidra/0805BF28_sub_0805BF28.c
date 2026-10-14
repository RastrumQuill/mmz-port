// sub_0805BF28 at 0x0805BF28 (thumb)

undefined4 sub_0805BF28(int param_1)

{
  bool bVar1;
  byte bVar2;
  undefined uVar3;
  short sVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08017700(param_1,0xb501);
    sub_08007390(param_1 + 0x74,&DAT_08361630);
    iVar6 = DAT_0202f5c0;
    *(bool *)(param_1 + 0x4c) = *(int *)(param_1 + 0x54) < *(int *)(DAT_0202f5c0 + 0x54);
    bVar1 = *(int *)(param_1 + 0x54) < *(int *)(iVar6 + 0x54);
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
    if (bVar1) {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar2;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      uVar5 = 0xfffffc80;
    }
    else {
      uVar5 = 0x380;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar5;
    sub_0800471C(0x4e);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080177F4(param_1);
  bVar2 = *(byte *)(param_1 + 10) & 0x10;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    sVar4 = sub_08009A3C(*(int *)(param_1 + 0x54) + -0x1000,*(int *)(param_1 + 0x58) + 0x1000);
    if (sVar4 == 0) {
      *(undefined *)(param_1 + 0xd) = 3;
      *(byte *)(param_1 + 0xe) = bVar2;
      *(undefined *)(param_1 + 0xbe) = 1;
    }
    iVar6 = *(int *)(param_1 + 0x54);
    if (iVar6 + -0x1000 < *(int *)(param_1 + 0xb4)) {
      uVar3 = 5;
    }
    else {
      if (*(int *)(DAT_0202f5c0 + 0x54) <= iVar6 + 0x2000) goto LAB_0805c08c;
      uVar3 = 3;
    }
    *(undefined *)(param_1 + 0xd) = uVar3;
    *(byte *)(param_1 + 0xe) = bVar2;
  }
  else {
    sVar4 = sub_08009A3C(*(int *)(param_1 + 0x54) + 0x1000,*(int *)(param_1 + 0x58) + 0x1000);
    if (sVar4 == 0) {
      *(undefined *)(param_1 + 0xd) = 3;
      *(undefined *)(param_1 + 0xe) = 0;
      *(undefined *)(param_1 + 0xbe) = 1;
    }
    iVar6 = *(int *)(param_1 + 0x54);
    if (*(int *)(param_1 + 0xb8) < iVar6 + 0x1000) {
      uVar3 = 5;
    }
    else {
      if (iVar6 + -0x2000 <= *(int *)(DAT_0202f5c0 + 0x54)) {
LAB_0805c08c:
        *(int *)(param_1 + 0x54) = iVar6 + *(int *)(param_1 + 0x5c);
        return in_lr;
      }
      uVar3 = 3;
    }
    *(undefined *)(param_1 + 0xd) = uVar3;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

