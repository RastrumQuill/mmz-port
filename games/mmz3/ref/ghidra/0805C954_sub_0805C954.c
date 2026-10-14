// sub_0805C954 at 0x0805C954 (thumb)

undefined4 sub_0805C954(int param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08017528();
    sub_080176EC(param_1);
    sub_08017700(param_1,0xb50d);
    *(undefined *)(param_1 + 0x24) = 0x60;
    *(int *)(param_1 + 0x5c) = -*(int *)(param_1 + 0x5c);
    *(undefined4 *)(param_1 + 0x60) = 0xfffffc00;
    *(undefined *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080177F4(param_1);
  iVar3 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar3;
  sVar2 = sub_08009A3C(iVar3,*(undefined4 *)(param_1 + 0x58));
  if (sVar2 != 0) {
    sVar2 = sub_08010F08(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    if (sVar2 != 0) {
      sub_08010F70(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    }
    sub_0800471C(0x52);
    sub_0801ACF8(5,param_1 + 0x54);
    *(byte *)(param_1 + 0x4c) = (*(byte *)(param_1 + 10) >> 4 ^ 1) & 1;
    uVar4 = (*(byte *)(param_1 + 10) >> 4 ^ 1) & 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar4 << 4);
    if (uVar4 == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x5c) = -*(int *)(param_1 + 0x5c);
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  sVar2 = sub_08009A3C(*(undefined4 *)(param_1 + 0x54));
  if (sVar2 != 0) {
    sVar2 = sub_08010F08(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    if (sVar2 != 0) {
      sub_08010F70(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    }
    sub_0800471C(0x52);
    sub_0801ACF8(5,param_1 + 0x54);
    *(byte *)(param_1 + 0x4d) = (*(byte *)(param_1 + 10) >> 5 ^ 1) & 1;
    uVar4 = (*(byte *)(param_1 + 10) >> 5 ^ 1) & 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xdf | (byte)(uVar4 << 5);
    if (uVar4 == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xdf;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x20;
    }
    *(byte *)(param_1 + 10) = bVar1;
    iVar3 = *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) - iVar3;
    *(int *)(param_1 + 0x60) = -iVar3;
    if (0 < iVar3) {
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    }
  }
  if (1 < *(byte *)(param_1 + 0xf)) {
    *(undefined *)(param_1 + 0xd) = 0x12;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

