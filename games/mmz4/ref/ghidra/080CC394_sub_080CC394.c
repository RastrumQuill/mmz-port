// sub_080CC394 at 0x080CC394 (thumb)

undefined4 sub_080CC394(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  if (*(char *)(iVar3 + 0xd) == '\x14') {
    if (*(char *)(param_1 + 0x13) == *(char *)(param_1 + 0x12)) {
      sub_08005784(param_1 + 0x74,&DAT_088631e4 + (uint)*(byte *)(param_1 + 0x11) * 0x60);
    }
    else {
      sub_08005784(param_1 + 0x74,&DAT_088632a4);
    }
    *(byte *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + 1U & 1;
    if ((*(byte *)(iVar3 + 10) & 0x10) == 0) {
      uVar2 = (uint)*(byte *)(iVar3 + 0x24);
    }
    else {
      uVar2 = -(uint)*(byte *)(iVar3 + 0x24) & 0xff;
    }
    *(char *)(param_1 + 0x24) = (char)uVar2;
    uVar1 = *(undefined4 *)(iVar3 + 0x58);
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar3 + 0x54);
    *(undefined4 *)(param_1 + 0x58) = uVar1;
    *(int *)(param_1 + 0x54) =
         *(int *)(param_1 + 0x54) +
         ((int)(short)(&DAT_08128c10)[uVar2] * *(int *)(param_1 + 100) >> 8);
    *(int *)(param_1 + 0x58) =
         *(int *)(param_1 + 0x58) -
         ((int)*(short *)((int)&DAT_08128c10 + ((uVar2 + 0x40) * 0x1000000 >> 0x17)) *
          *(int *)(param_1 + 100) >> 8);
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 8);
    sub_080CBCD8(param_1);
  }
  return in_lr;
}

