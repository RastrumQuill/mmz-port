// sub_08087B38 at 0x08087B38 (thumb)

undefined4 sub_08087B38(int param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_08006DE4(param_1 + 0x74,&DAT_08341688,param_1 + 0x54,0);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 0x10;
    *(undefined *)(param_1 + 0x1d) = *(undefined *)(iVar3 + 0x1c);
    *(undefined4 *)(param_1 + 100) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0xb5) << 7;
    bVar1 = *(byte *)(param_1 + 0xb4);
    if (bVar1 == 0) {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar2;
    *(byte *)(param_1 + 0x4c) = bVar1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)((bVar1 & 1) << 4);
    sub_080127E4(param_1,0x6b06);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x04';
  *(int *)(param_1 + 100) = (int)(short)(&DAT_080ef450)[*(byte *)(param_1 + 0x12) + 0x40 & 0xff];
  iVar4 = (short)(&DAT_080ef450)[*(byte *)(param_1 + 0x12)] * 0x280;
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xff;
  }
  *(int *)(param_1 + 0x68) = iVar4 >> 8;
  sub_08087930(param_1);
  sub_080879C8(param_1);
  sub_080128D4(param_1);
  puVar5 = (uint *)(iVar3 + 0xb4);
  if ((*puVar5 & 4) != 0) {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  if ((*puVar5 & 0x200) != 0) {
    *(undefined *)(param_1 + 0xd) = 5;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

