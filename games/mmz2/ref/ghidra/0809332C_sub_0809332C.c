// sub_0809332C at 0x0809332C (thumb)

undefined4 sub_0809332C(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0x9000);
    *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | 8;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  iVar5 = *(int *)(DAT_0202e130 + 0x54) - *(int *)(param_1 + 0x54);
  if (iVar5 < 1) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(bool *)(param_1 + 0x4c) = 0 < iVar5;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (0 < iVar5) << 4;
  iVar4 = (*(int *)(DAT_0202e130 + 0x58) - *(int *)(param_1 + 0x58)) + -0x1800;
  iVar2 = iVar4 >> 8;
  iVar2 = sub_080EEF7C((iVar5 >> 8) * (iVar5 >> 8) + iVar2 * iVar2);
  uVar3 = (uint)(iVar2 << 0x10) >> 8;
  iVar5 = sub_080EF150(iVar5 * 0x100,uVar3);
  iVar2 = sub_080EF150(iVar4 * 0x100,uVar3);
  iVar5 = iVar5 * 0x180;
  if (iVar5 < 0) {
    iVar5 = iVar5 + 0xff;
  }
  iVar2 = iVar2 * 0x180;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  iVar4 = *(int *)(param_1 + 0x5c) * 0xf0;
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xff;
  }
  *(int *)(param_1 + 0x5c) = iVar4 >> 8;
  iVar5 = (iVar5 >> 8) * 0xf;
  if (iVar5 < 0) {
    iVar5 = iVar5 + 0xff;
  }
  iVar4 = (iVar4 >> 8) + (iVar5 >> 8);
  *(int *)(param_1 + 0x5c) = iVar4;
  iVar5 = *(int *)(param_1 + 0x60) * 0xf0;
  if (iVar5 < 0) {
    iVar5 = iVar5 + 0xff;
  }
  *(int *)(param_1 + 0x60) = iVar5 >> 8;
  iVar2 = (iVar2 >> 8) * 0xf;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  iVar5 = (iVar5 >> 8) + (iVar2 >> 8);
  *(int *)(param_1 + 0x60) = iVar5;
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar4;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar5;
  *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + -1;
  iVar5 = *(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0x54);
  if (iVar5 < 0) {
    iVar5 = *(int *)(param_1 + 0x54) - *(int *)(param_1 + 0xc0);
  }
  if (0x18000 < iVar5) {
    *(undefined *)(param_1 + 0x13) = 1;
    *(undefined *)(param_1 + 0xd) = 5;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  if ((*(uint *)(param_1 + 0x8c) & 4) != 0) {
    *(undefined *)(param_1 + 0xd) = 6;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_080128D4(param_1);
  return in_lr;
}

