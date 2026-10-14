// sub_08076188 at 0x08076188 (thumb)

undefined4 sub_08076188(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08007390(param_1 + 0x74,&DAT_08363918);
    sub_08017700(param_1,0x2a02);
    *(undefined4 *)(param_1 + 0x5c) = 0xfffffec0;
    uVar3 = 0xfffffec0;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      uVar3 = 0x140;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar3;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 100) = 0;
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x58);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  if ((*(int *)(param_1 + 0x54) - *(int *)(param_1 + 0xc0)) + 0x16800U < 0x2d001) {
    iVar2 = *(int *)(param_1 + 100) + 1;
    *(int *)(param_1 + 100) = iVar2;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    iVar4 = *(int *)(param_1 + 0x68);
    *(int *)(param_1 + 0x58) = iVar4;
    iVar2 = FUN_080fe2f8(iVar2 * 0x100,0x4c);
    *(int *)(param_1 + 0x58) =
         iVar4 + *(short *)((int)&DAT_080fe64c + ((uint)(iVar2 << 0x18) >> 0x17)) * 0x18;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x60) + -0x40;
    *(int *)(param_1 + 0x60) = iVar2;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar2;
  }
  sub_080177F4(param_1);
  if ((*(char *)(param_1 + 0xb9) != '\0') &&
     (uVar1 = sub_0801A9A8(&DAT_02030288,param_1 + 0x54), 0x4000 < uVar1)) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  return in_lr;
}

