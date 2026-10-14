// sub_08097400 at 0x08097400 (thumb)

undefined4 sub_08097400(int param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    if (*(char *)(param_1 + 0xe) != '\x01') {
      return in_lr;
    }
    goto LAB_080974c4;
  }
  *(undefined *)(param_1 + 0xbe) = 0;
  sub_08096A8C(param_1);
  sub_08017700(param_1,0xdc00);
  sub_08007390(param_1 + 0x74,&DAT_08366a50);
  *(undefined *)(param_1 + 0x12) = 0x18;
  if (*(char *)(param_1 + 0x10) == '\x01') {
    iVar4 = *(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x54);
    if (iVar4 < 0) {
      iVar4 = *(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x28);
    }
    if (0x10000 < iVar4) {
      bVar1 = *(byte *)(param_1 + 10);
      uVar3 = ~(uint)(bVar1 >> 4) & 1;
      if (uVar3 == 0) {
LAB_080974a0:
        bVar1 = bVar1 & 0xef;
      }
      else {
        bVar1 = bVar1 | 0x10;
      }
LAB_080974a4:
      *(byte *)(param_1 + 10) = bVar1;
      *(char *)(param_1 + 0x4c) = (char)uVar3;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar3 << 4);
    }
  }
  else {
    iVar4 = *(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x54);
    if (iVar4 < 0) {
      iVar4 = *(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x28);
    }
    if (0x4000 < iVar4) {
      bVar1 = *(byte *)(param_1 + 10);
      uVar3 = ~(uint)(bVar1 >> 4) & 1;
      if (uVar3 == 0) goto LAB_080974a0;
      bVar1 = bVar1 | 0x10;
      goto LAB_080974a4;
    }
  }
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
LAB_080974c4:
  sub_08096AD8(param_1,*(undefined4 *)(param_1 + 0x5c),*(undefined4 *)(param_1 + 0x60));
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == '\0') {
    *(undefined *)(param_1 + 0xd) = 4;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_080177F4(param_1);
  return in_lr;
}

