// sub_08076EA4 at 0x08076EA4 (thumb)

undefined4 sub_08076EA4(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0xc) + 0x2c);
  iVar1 = *(int *)(param_1 + 0x2c);
  if (((((*(uint *)(param_1 + 0x14) & 4) != 0) && (*(char *)(iVar1 + 0xd9) != '\0')) &&
      (*(char *)(iVar2 + 8) == '\0')) && (*(char *)(iVar2 + 9) == '\0')) {
    uVar3 = 0xfffffa00;
    if ((*(byte *)(iVar1 + 10) & 0x10) != 0) {
      uVar3 = 0x600;
    }
    if (*(char *)(iVar1 + 0xd9) == '\x01') {
      *(byte *)(iVar2 + 0x142) = *(byte *)(iVar2 + 0x142) | 0x40;
      *(undefined *)(iVar2 + 0xd) = 4;
      *(undefined *)(iVar2 + 0xe) = 0;
      *(undefined4 *)(iVar2 + 0x128) = uVar3;
      uVar3 = 0xfffffa00;
    }
    else {
      *(byte *)(iVar2 + 0x142) = *(byte *)(iVar2 + 0x142) | 0x40;
      *(undefined *)(iVar2 + 0xd) = 4;
      *(undefined *)(iVar2 + 0xe) = 0;
      *(undefined4 *)(iVar2 + 0x128) = uVar3;
      uVar3 = 0xfffff840;
    }
    *(undefined4 *)(iVar2 + 300) = uVar3;
    *(undefined4 *)(iVar2 + 0x130) = 0;
    *(undefined4 *)(iVar2 + 0x134) = 0x40;
    *(undefined2 *)(iVar2 + 0x138) = 0;
  }
  if ((*(uint *)(param_1 + 0x14) & 1) != 0) {
    sub_08006984(0x40);
    *(bool *)(iVar1 + 0xd8) = *(int *)(iVar1 + 0x54) < *(int *)(iVar2 + 0x54);
  }
  return in_lr;
}

