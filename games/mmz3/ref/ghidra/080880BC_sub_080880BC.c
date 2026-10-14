// sub_080880BC at 0x080880BC (thumb)

undefined4 sub_080880BC(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08017700(param_1,0x6b00);
    iVar4 = *(int *)(param_1 + 0xb8) - *(int *)(param_1 + 0x54);
    *(int *)(param_1 + 0x5c) = iVar4;
    iVar3 = *(int *)(param_1 + 0xbc) - *(int *)(param_1 + 0x58);
    *(int *)(param_1 + 0x60) = iVar3;
    iVar4 = iVar4 >> 2;
    iVar3 = iVar3 >> 2;
    iVar4 = sub_080FE124(iVar4 * iVar4 + iVar3 * iVar3);
    uVar5 = (uint)(iVar4 << 0x10) >> 0xe;
    if (uVar5 != 0) {
      uVar2 = FUN_080fe2f8(*(int *)(param_1 + 0x5c) << 8,uVar5);
      *(undefined4 *)(param_1 + 0x5c) = uVar2;
      uVar2 = FUN_080fe2f8(*(int *)(param_1 + 0x60) << 8,uVar5);
      *(undefined4 *)(param_1 + 0x60) = uVar2;
    }
    iVar4 = (*(int *)(param_1 + 0x5c) << 9) >> 8;
    *(int *)(param_1 + 0x5c) = iVar4;
    *(int *)(param_1 + 0x60) = (*(int *)(param_1 + 0x60) << 9) >> 8;
    if (iVar4 < 1) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
      *(undefined *)(param_1 + 0x4c) = 0;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
    }
    else {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
      *(undefined *)(param_1 + 0x4c) = 1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  sub_080177F4(param_1);
  cVar1 = *(char *)(param_1 + 0xf) + '\x01';
  *(char *)(param_1 + 0xf) = cVar1;
  cVar1 = sub_080FE4D8(cVar1,0xc);
  if (cVar1 == '\0') {
    sub_080C2A08(param_1 + 0x54,*(byte *)(param_1 + 10) >> 4 & 1);
  }
  iVar4 = *(int *)(param_1 + 0xb8) - *(int *)(param_1 + 0x54);
  if (iVar4 < 1) {
    iVar4 = *(int *)(param_1 + 0x54) - *(int *)(param_1 + 0xb8);
  }
  if (iVar4 < 0x5000) {
    iVar4 = *(int *)(param_1 + 0xbc) - *(int *)(param_1 + 0x58);
    if (iVar4 < 1) {
      iVar4 = *(int *)(param_1 + 0x58) - *(int *)(param_1 + 0xbc);
    }
    if (iVar4 < 0x1800) {
      *(undefined *)(param_1 + 0xd) = 2;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  iVar4 = sub_080886F8(param_1);
  if (iVar4 == 0) {
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

