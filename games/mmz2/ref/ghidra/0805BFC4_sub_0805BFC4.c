// sub_0805BFC4 at 0x0805BFC4 (thumb)

undefined4 sub_0805BFC4(int param_1)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080128AC(param_1,0xa911,3,0);
    sub_080128D4(param_1);
    sub_08006E08(param_1 + 0x74,&DAT_0833cd3c);
    *(undefined4 *)(param_1 + 0x60) = 0xfffff240;
    iVar3 = DAT_0202e130;
    *(bool *)(param_1 + 0x4c) = *(int *)(DAT_0202e130 + 0x54) < *(int *)(param_1 + 0xc0) + 0xe000;
    bVar1 = *(int *)(iVar3 + 0x54) < *(int *)(param_1 + 0xc0) + 0xe000;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
    if (bVar1) {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar2;
    *(undefined *)(param_1 + 0x12) = 0x28;
    sub_08002638(&DAT_084332c8,(DAT_0202e624 - 0x210) * 0x20 + 0x10000);
    sub_08002AEC(&DAT_084332d4,(DAT_0202e424 - 6) * 0x20 + 0x200);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  bVar2 = *(byte *)(param_1 + 0x12);
  if (bVar2 < 0x19) {
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      iVar3 = *(int *)(DAT_0202e130 + 0x54) + 0x1000;
    }
    else {
      iVar3 = *(int *)(DAT_0202e130 + 0x54) + -0x1000;
    }
    iVar5 = *(int *)(param_1 + 0x54);
    iVar3 = sub_080EF150(iVar3 - iVar5,*(undefined *)(param_1 + 0x12));
    *(int *)(param_1 + 0x5c) = iVar3;
    iVar4 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar4;
    *(int *)(param_1 + 0x54) = iVar5 + iVar3;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar4;
    *(byte *)(param_1 + 0x12) = bVar2 - 1;
    if (bVar2 == 0) {
      *(undefined *)(param_1 + 0xd) = 0x21;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  else {
    *(byte *)(param_1 + 0x12) = bVar2 - 1;
  }
  return in_lr;
}

