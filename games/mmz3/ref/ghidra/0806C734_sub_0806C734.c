// sub_0806C734 at 0x0806C734 (thumb)

undefined4 sub_0806C734(int param_1)

{
  byte bVar1;
  undefined uVar2;
  uint uVar3;
  uint *puVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08017700(param_1,0x1904);
    sub_08007390(param_1 + 0x74,&DAT_08362d58);
    puVar4 = (uint *)(*(int *)(param_1 + 0x2c) + 0xb4);
    *puVar4 = *puVar4 | 1;
    *(undefined *)(param_1 + 0x12) = 0;
    sub_0800471C(0x11f);
    uVar3 = sub_0801A9A8(&DAT_02030288,param_1 + 0x54);
    if (uVar3 < 0x4001) {
      *(undefined *)(param_1 + 0x13) = 1;
    }
    else {
      *(undefined *)(param_1 + 0x13) = 0;
    }
    if (*(byte *)(param_1 + 0xbc) == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    uVar3 = *(byte *)(param_1 + 0xbc) & 1;
    *(char *)(param_1 + 0x4c) = (char)uVar3;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar3 << 4);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  if (*(char *)(param_1 + 0x13) == '\0') {
    uVar3 = sub_0801A9A8(&DAT_02030288,param_1 + 0x54);
    if (0x4000 < uVar3) goto LAB_0806c806;
    uVar2 = 1;
  }
  else {
    uVar3 = sub_0801A9A8(&DAT_02030288,param_1 + 0x54);
    if (uVar3 < 0x4001) goto LAB_0806c806;
    uVar2 = 0;
  }
  *(undefined *)(param_1 + 0x13) = uVar2;
LAB_0806c806:
  sub_080177F4(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

