// sub_08030588 at 0x08030588 (thumb)

undefined4 sub_08030588(int param_1)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x143) != '\0') {
    *(undefined *)(param_1 + 0xd) = 7;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    return in_lr;
  }
  if ((*(uint *)(param_1 + 600) & 1) != 0) {
    sub_0802B7D8(param_1,&DAT_0884fe30 + (uint)*(byte *)(param_1 + 0x174) * 8,0);
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 3;
    sub_080383FC(param_1);
    return in_lr;
  }
  cVar1 = sub_0802C658(param_1,&DAT_0884fe40,0);
  if ((cVar1 != '\0') && (cVar2 = sub_0802C614(param_1,&DAT_0884fe40,0), cVar2 != '\0')) {
    return in_lr;
  }
  if (cVar1 == '\x01') {
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      iVar4 = *(int *)(param_1 + 0x54) + -0x800;
    }
    else {
      iVar4 = *(int *)(param_1 + 0x54) + 0x800;
    }
    *(int *)(param_1 + 0x54) = iVar4;
    sub_0802B7D8(param_1,&DAT_0884fe30,0);
  }
  if (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) == 0x500) {
    if (*(char *)(param_1 + 0x71) < '\x03') goto LAB_080306de;
    *(byte *)(param_1 + 0x4c) = (*(byte *)(param_1 + 10) >> 4 ^ 1) & 1;
    uVar5 = (*(byte *)(param_1 + 10) >> 4 ^ 1) & 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar5 << 4);
    if (uVar5 == 0) goto LAB_080306d6;
    bVar3 = *(byte *)(param_1 + 10) | 0x10;
  }
  else {
    *(byte *)(param_1 + 0x4c) = (*(byte *)(param_1 + 10) >> 4 ^ 1) & 1;
    uVar5 = (*(byte *)(param_1 + 10) >> 4 ^ 1) & 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar5 << 4);
    if (uVar5 == 0) {
LAB_080306d6:
      bVar3 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar3 = *(byte *)(param_1 + 10) | 0x10;
    }
  }
  *(byte *)(param_1 + 10) = bVar3;
LAB_080306de:
  *(undefined *)(param_1 + 0xd) = 1;
  *(undefined *)(param_1 + 0xe) = 2;
  *(undefined *)(param_1 + 0xf) = 0;
  return in_lr;
}

