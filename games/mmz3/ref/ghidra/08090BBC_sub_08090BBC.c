// sub_08090BBC at 0x08090BBC (thumb)

undefined4 sub_08090BBC(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    iVar1 = *(int *)(param_1 + 100) - *(int *)(param_1 + 0x54);
    *(int *)(param_1 + 0x5c) = iVar1;
    iVar3 = *(int *)(param_1 + 0x68) - *(int *)(param_1 + 0x58);
    *(int *)(param_1 + 0x60) = iVar3;
    iVar1 = iVar1 >> 2;
    iVar3 = iVar3 >> 2;
    iVar1 = sub_080FE124(iVar1 * iVar1 + iVar3 * iVar3);
    uVar4 = (uint)(iVar1 << 0x10) >> 0xe;
    if (uVar4 != 0) {
      uVar2 = FUN_080fe2f8(*(int *)(param_1 + 0x5c) << 8,uVar4);
      *(undefined4 *)(param_1 + 0x5c) = uVar2;
      uVar2 = FUN_080fe2f8(*(int *)(param_1 + 0x60) << 8,uVar4);
      *(undefined4 *)(param_1 + 0x60) = uVar2;
    }
    *(int *)(param_1 + 0x5c) = (*(int *)(param_1 + 0x5c) << 9) >> 8;
    *(int *)(param_1 + 0x60) = (*(int *)(param_1 + 0x60) << 9) >> 8;
    *(uint *)(param_1 + 0xb4) = uVar4;
    if (*(int *)(param_1 + 0x5c) < 1) {
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
  *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xb4) + -0x200;
  return in_lr;
}

