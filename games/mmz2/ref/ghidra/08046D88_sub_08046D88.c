// sub_08046D88 at 0x08046D88 (thumb)

undefined4 sub_08046D88(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  int local_14;
  undefined4 local_10;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0xa50b);
    uVar2 = sub_08079798(param_1,0,0);
    *(undefined4 *)(param_1 + 0xc0) = uVar2;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  if ((*(uint *)(param_1 + 0x8c) & 0x800) != 0) {
    iVar4 = *(int *)(param_1 + 0xd8);
    if (iVar4 != 0) {
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        iVar3 = *(int *)(param_1 + 0x54) + *(int *)(&DAT_0833ac04 + *(char *)(param_1 + 0x71) * 4);
      }
      else {
        iVar3 = *(int *)(param_1 + 0x54) - *(int *)(&DAT_0833ac04 + *(char *)(param_1 + 0x71) * 4);
      }
      *(int *)(iVar4 + 0x54) = iVar3;
      *(int *)(*(int *)(param_1 + 0xd8) + 0x58) =
           *(int *)(param_1 + 0x58) + *(int *)(&DAT_0833ac18 + *(char *)(param_1 + 0x71) * 4);
    }
  }
  if (*(int *)(param_1 + 0x5c) != 0) {
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + -0x40;
  }
  bVar1 = *(byte *)(param_1 + 0x12);
  *(byte *)(param_1 + 0x12) = bVar1 + 1;
  if ((bVar1 & 3) == 0) {
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      local_14 = *(int *)(param_1 + 0x54);
      iVar4 = 0x1000;
    }
    else {
      local_14 = *(int *)(param_1 + 0x54);
      iVar4 = -0x1000;
    }
    local_14 = local_14 + iVar4;
    local_10 = *(undefined4 *)(param_1 + 0x58);
    sub_080AC60C(3,&local_14);
  }
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar4 = *(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x5c);
  }
  else {
    iVar4 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  }
  *(int *)(param_1 + 0x54) = iVar4;
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 0xb;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

