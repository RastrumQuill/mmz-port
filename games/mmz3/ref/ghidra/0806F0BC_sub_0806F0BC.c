// sub_0806F0BC at 0x0806F0BC (thumb)

undefined4 sub_0806F0BC(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  int local_18;
  undefined4 local_14;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    iVar3 = 0;
    if ((*(char *)(param_1 + 0x10) == '\x01') || (*(char *)(param_1 + 0x10) == '\x03')) {
      iVar3 = 1;
    }
    uVar4 = 0x1d12;
    if (iVar3 != 0) {
      uVar4 = 0x1d10;
    }
    sub_08017700(param_1,uVar4);
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    local_18 = *(int *)(param_1 + 0x5c);
    if (local_18 < 0) {
      local_18 = local_18 + 3;
    }
    local_18 = local_18 >> 2;
    local_14 = 0;
    iVar2 = sub_0800A104(*(undefined4 *)(param_1 + 0x54));
    if (iVar2 - *(int *)(param_1 + 0x58) < 0x400) {
      *(undefined4 *)(param_1 + 0x68) = 0;
      sub_080B7E18(param_1,param_1 + 0x54,&local_18,0,&UNK_083630fe + iVar3 * 2,0x18);
    }
    else {
      *(undefined4 *)(param_1 + 0x68) = 0x20;
      sub_080B7FC0(param_1,param_1 + 0x54,&local_18,0x15,&UNK_083630fe + iVar3 * 2,0x18);
    }
    uVar4 = FUN_080fe2f8(*(undefined4 *)(param_1 + 0x5c),10);
    *(undefined4 *)(param_1 + 0x5c) = uVar4;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined *)(param_1 + 0x12) = 0x18;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  sub_080177F4(param_1);
  if (*(int *)(param_1 + 0x68) != 0) {
    iVar3 = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x68);
    *(int *)(param_1 + 0x60) = iVar3;
    if (0x700 < iVar3) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    iVar3 = sub_08009B28(*(undefined4 *)(param_1 + 0x54));
    if (iVar3 < 0) {
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar3;
    }
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    sub_0806F024(param_1);
  }
  return in_lr;
}

