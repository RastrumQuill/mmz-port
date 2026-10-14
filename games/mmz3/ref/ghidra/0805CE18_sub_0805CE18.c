// sub_0805CE18 at 0x0805CE18 (thumb)

undefined4 sub_0805CE18(int param_1)

{
  bool bVar1;
  byte bVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08017700(param_1,0xb506);
    iVar4 = DAT_0202f5c0;
    *(bool *)(param_1 + 0x4c) = *(int *)(param_1 + 0x54) < *(int *)(DAT_0202f5c0 + 0x54);
    bVar1 = *(int *)(param_1 + 0x54) < *(int *)(iVar4 + 0x54);
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
    if (bVar1) {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar2;
    iVar6 = *(int *)(param_1 + 0xb4);
    iVar4 = FUN_080fe2f8(*(int *)(DAT_0202f5c0 + 0x54) - iVar6,0x3000);
    iVar4 = FUN_080fe2f8((iVar6 + iVar4 * 0x3000 + 0x1800) - *(int *)(param_1 + 0x54),0x18);
    *(int *)(param_1 + 0x5c) = iVar4;
    *(undefined4 *)(param_1 + 0x60) = 0xfffffa00;
    if (iVar4 < 1) {
      uVar5 = 0xfffff000;
    }
    else {
      uVar5 = 0x1000;
    }
    *(undefined4 *)(param_1 + 100) = uVar5;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080177F4(param_1);
  sVar3 = sub_0805D55C(param_1,*(undefined4 *)(param_1 + 100),0);
  if (sVar3 == 0) {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  }
  sVar3 = sub_0805D55C(param_1,0,*(undefined4 *)(param_1 + 0x60));
  if (sVar3 == 0) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  }
  iVar4 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar4;
  if (-1 < iVar4) {
    *(undefined *)(param_1 + 0xd) = 0x17;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

