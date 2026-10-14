// sub_0809F9F4 at 0x0809F9F4 (thumb)

undefined4 sub_0809F9F4(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_08007390(param_1 + 0x74,&DAT_08367848);
    uVar3 = *(byte *)(param_1 + 0x12) ^ 1;
    if (uVar3 == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    uVar3 = uVar3 & 1;
    *(char *)(param_1 + 0x4c) = (char)uVar3;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar3 << 4);
    *(undefined *)(param_1 + 0x22) = 1;
    *(undefined4 *)(param_1 + 0x60) = 0;
    sub_08017700(param_1,0x3101);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) == '\x03') {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    break;
  case 2:
    *(undefined *)(param_1 + 0x13) = 0;
    sub_08017700(param_1,0x3102);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    bVar1 = *(char *)(param_1 + 0x13) + 1;
    *(byte *)(param_1 + 0x13) = bVar1;
    if (0x2a < bVar1) {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    if (*(char *)(param_1 + 0x12) == '\0') {
      iVar2 = FUN_080fe2f8((uint)*(byte *)(param_1 + 0x13) * 0xf,10);
      iVar2 = *(int *)(param_1 + 0x54) +
              *(short *)((int)&DAT_080fe64c + ((uint)(iVar2 << 0x18) >> 0x17)) * 3;
    }
    else {
      iVar2 = FUN_080fe2f8((uint)*(byte *)(param_1 + 0x13) * 0xf,10);
      iVar2 = *(int *)(param_1 + 0x54) +
              *(short *)((int)&DAT_080fe64c + ((uint)(iVar2 << 0x18) >> 0x17)) * -3;
    }
    *(int *)(param_1 + 0x54) = iVar2;
    iVar2 = FUN_080fe2f8((uint)*(byte *)(param_1 + 0x13) * 0xf,10);
    iVar2 = *(int *)(param_1 + 0x58) +
            *(short *)((int)&DAT_080fe64c + ((uint)((iVar2 + 0x40) * 0x1000000) >> 0x17)) * 3;
    goto LAB_0809fbdc;
  case 4:
    *(undefined4 *)(param_1 + 100) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    iVar2 = *(int *)(param_1 + 100) + 3;
    *(int *)(param_1 + 100) = iVar2;
    if (0xaa < iVar2) {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    if (*(char *)(param_1 + 0x12) == '\0') {
      iVar4 = *(int *)(param_1 + 100);
      iVar2 = FUN_080fe2f8(iVar4 * 0xf,10);
      iVar2 = *(int *)(param_1 + 0x54) +
              *(short *)((int)&DAT_080fe64c + ((uint)((iVar2 + 0x40) * 0x1000000) >> 0x17)) * 3;
    }
    else {
      iVar4 = *(int *)(param_1 + 100);
      iVar2 = FUN_080fe2f8(iVar4 * 0xf,10);
      iVar2 = *(int *)(param_1 + 0x54) +
              *(short *)((int)&DAT_080fe64c + ((uint)((iVar2 + 0x40) * 0x1000000) >> 0x17)) * -3;
    }
    *(int *)(param_1 + 0x54) = iVar2;
    iVar2 = FUN_080fe2f8(iVar4 * 0xf,10);
    iVar2 = *(int *)(param_1 + 0x58) +
            *(short *)((int)&DAT_080fe64c + ((uint)(iVar2 << 0x18) >> 0x17)) * -3;
LAB_0809fbdc:
    *(int *)(param_1 + 0x58) = iVar2;
    sub_080177F4(param_1);
    break;
  case 6:
    *(uint *)(param_1 + 0x5c) = (uint)*(byte *)(param_1 + 0x12) * -0x600 + 0x300;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 7:
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    uVar3 = sub_0801A9A8(&DAT_02030288,param_1 + 0x54);
    if (0x2000 < uVar3) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 0xc);
    }
    sub_080177F4(param_1);
  }
  if (1 < *(byte *)(*(int *)(param_1 + 0x28) + 0xc)) {
    uVar3 = *(int *)(param_1 + 0x60) + 1;
    *(uint *)(param_1 + 0x60) = uVar3;
    if ((int)uVar3 < 0x10) {
      uVar3 = uVar3 & 1;
    }
    else {
      uVar3 = uVar3 & 2;
    }
    if (uVar3 == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xfe;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 1;
    }
    *(byte *)(param_1 + 10) = bVar1;
    if (0x1e < *(int *)(param_1 + 0x60)) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 0xc);
    }
    return in_lr;
  }
  return in_lr;
}

