// sub_080440EC at 0x080440EC (thumb)

undefined4 sub_080440EC(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char cVar5;
  undefined4 in_lr;
  
  iVar2 = sub_08044D54(param_1,*(undefined *)(param_1 + 0xb5));
  iVar3 = sub_08044D80(param_1,*(undefined *)(param_1 + 0xb5));
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | 4;
    uVar4 = sub_080EF150(iVar2 - *(int *)(param_1 + 0x54),10);
    *(undefined4 *)(param_1 + 0x5c) = uVar4;
    uVar4 = sub_080EF150(iVar3 - *(int *)(param_1 + 0x58),10);
    *(undefined4 *)(param_1 + 0x60) = uVar4;
    *(undefined *)(param_1 + 0x12) = 10;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_080128D4(param_1);
  cVar1 = *(char *)(param_1 + 0x12);
  cVar5 = cVar1 + -1;
  *(char *)(param_1 + 0x12) = cVar5;
  *(uint *)(param_1 + 0x54) = iVar2 - (uint)*(byte *)(param_1 + 0x12) * *(int *)(param_1 + 0x5c);
  *(uint *)(param_1 + 0x58) = iVar3 - (uint)*(byte *)(param_1 + 0x12) * *(int *)(param_1 + 0x60);
  if ((*(uint *)(param_1 + 0x8c) & 4) == 0) {
    if (cVar1 == '\x01') {
      *(char *)(param_1 + 0xb6) = cVar5;
      *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | 8;
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x06';
      *(char *)(param_1 + 0xf) = cVar5;
    }
  }
  else {
    sub_080032EC(0x51);
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      iVar2 = -0x1800;
    }
    else {
      iVar2 = 0x1800;
    }
    iVar3 = *(int *)(DAT_0202e130 + 0x54) - (*(int *)(param_1 + 0x54) + iVar2);
    iVar2 = sub_080EF150(iVar3 * 0x100,*(undefined4 *)(param_1 + 0x5c));
    iVar2 = *(int *)(param_1 + 0x60) * iVar2;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xff;
    }
    iVar2 = iVar2 >> 8;
    if (iVar2 < 0) {
      iVar2 = -iVar2;
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar3;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) - iVar2;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

