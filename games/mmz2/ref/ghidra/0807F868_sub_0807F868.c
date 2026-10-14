// sub_0807F868 at 0x0807F868 (thumb)

undefined4 sub_0807F868(int param_1)

{
  bool bVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  ushort *puVar5;
  undefined4 in_lr;
  int local_14;
  int local_10;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08080050(param_1,&local_14);
    if (local_10 < *(int *)(param_1 + 0x58)) {
      *(undefined *)(param_1 + 0xd) = 2;
      *(undefined *)(param_1 + 0xe) = 0;
      return in_lr;
    }
    bVar1 = *(int *)(param_1 + 0x54) < *(int *)(DAT_0202e130 + 0x54);
    if (bVar1) {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar2;
    *(bool *)(param_1 + 0x4c) = bVar1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
    sub_080127E4(param_1,0x5f04);
    sub_080801DC(param_1,2);
    sub_080032EC(0x37);
    *(short *)(param_1 + 0xb6) = (short)local_10 - (short)*(undefined4 *)(param_1 + 0x58);
    *(undefined *)(short *)(param_1 + 0xb6) = 0;
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x58);
    *(undefined *)(param_1 + 0x12) = 0x40;
    uVar3 = sub_080EF150((local_14 - *(int *)(param_1 + 0x54)) * 2,0x40);
    *(undefined4 *)(param_1 + 0x5c) = uVar3;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  puVar5 = (ushort *)(param_1 + 0xb6);
  *(byte *)puVar5 = *(byte *)puVar5 + 2;
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  iVar4 = (uint)*puVar5 * (int)(short)(&DAT_080ef450)[*(byte *)puVar5];
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xff;
  }
  iVar4 = iVar4 >> 8;
  if (iVar4 < 0) {
    iVar4 = -iVar4;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x68) + iVar4;
  if (*(char *)(param_1 + 0x12) == '8') {
    sub_080127E4(param_1,0x5f05);
  }
  if (*(char *)(param_1 + 0x12) == '\0') {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

