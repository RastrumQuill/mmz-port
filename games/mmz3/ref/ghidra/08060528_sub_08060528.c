// sub_08060528 at 0x08060528 (thumb)

undefined4 sub_08060528(int param_1)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) != '\0') {
    if (*(char *)(param_1 + 0xf) != '\x01') {
      return in_lr;
    }
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined2 *)(param_1 + 0xe) = 0;
    return in_lr;
  }
  sub_08007390(param_1 + 0x74,&DAT_08361a88);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x5000;
  iVar3 = *(int *)(param_1 + 0x54);
  if (iVar3 < *(int *)(param_1 + 0xe0)) {
    iVar4 = iVar3 + -0x4000;
    if (iVar4 < *(int *)(param_1 + 0xd4)) {
      iVar4 = 0x4000;
LAB_0806058e:
      *(int *)(param_1 + 0x54) = iVar3 + iVar4;
      goto LAB_0806059a;
    }
  }
  else {
    iVar4 = iVar3 + 0x4000;
    if (*(int *)(param_1 + 0xd8) < iVar4) {
      iVar4 = -0x4000;
      goto LAB_0806058e;
    }
  }
  *(int *)(param_1 + 0x54) = iVar4;
LAB_0806059a:
  iVar3 = DAT_0202f5c0;
  *(bool *)(param_1 + 0x4c) = *(int *)(param_1 + 0x54) < *(int *)(DAT_0202f5c0 + 0x54);
  bVar1 = *(int *)(param_1 + 0x54) < *(int *)(iVar3 + 0x54);
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
  if (bVar1) {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  *(byte *)(param_1 + 10) = bVar2;
  sub_08017700(param_1,0xbc19);
  *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  return in_lr;
}

