// sub_0805ADBC at 0x0805ADBC (thumb)

undefined4 sub_0805ADBC(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  byte *pbVar4;
  undefined4 in_lr;
  undefined4 local_14;
  undefined4 local_10;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08017700(param_1,0xb40c);
    pbVar4 = (byte *)(param_1 + 0xc4);
    *(byte *)(param_1 + 0x4c) = *pbVar4 & 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)((*pbVar4 & 1) << 4);
    if ((*pbVar4 & 1) == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      *(undefined4 *)(param_1 + 0x5c) = 0xffffffe0;
      uVar3 = 1;
    }
    else {
      *(undefined4 *)(param_1 + 0x5c) = 0x20;
      uVar3 = 0xffffffff;
    }
    *(undefined4 *)(param_1 + 100) = uVar3;
    *(undefined *)(param_1 + 0x12) = 0x20;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    sub_08084A8C(param_1,2,((uint)*(byte *)(param_1 + 10) << 0x18) >> 0x1c & 1);
    *(undefined4 *)(param_1 + 0x2c) = 0;
    sub_0800471C(0x2f);
  }
  sub_080177F4(param_1);
  bVar1 = *(byte *)(param_1 + 0xf);
  if (bVar1 == 1) {
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 0x80) == 0) {
      return in_lr;
    }
    local_14 = 0xe00;
    local_10 = 0xffffe800;
    uVar3 = sub_080C73F8(param_1,&local_14);
    *(undefined4 *)(param_1 + 0x2c) = uVar3;
  }
  else if (bVar1 < 2) {
    if (bVar1 != 0) {
      return in_lr;
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != -1) {
      return in_lr;
    }
  }
  else if (bVar1 == 2) {
    if (*(byte *)(*(int *)(param_1 + 0x2c) + 0xc) < 2) {
      return in_lr;
    }
    DAT_020301b2 = DAT_020301b2 | 2;
    *(undefined *)(param_1 + 0x12) = 0x20;
  }
  else {
    if (bVar1 != 3) {
      return in_lr;
    }
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != -1) {
      return in_lr;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  }
  *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  return in_lr;
}

