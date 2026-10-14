// sub_080AE268 at 0x080AE268 (thumb)

undefined4 sub_080AE268(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08007390(param_1 + 0x74,&DAT_08369188);
    sub_08017528(param_1);
    iVar2 = FUN_080fe2f8((uint)*(byte *)(param_1 + 0x12) << 7,6);
    uVar3 = 0x80U - iVar2 & 0xff;
    if (*(char *)(param_1 + 0x13) != '\0') {
      uVar3 = 0x80 - uVar3 & 0xff;
    }
    *(char *)(param_1 + 0x24) = (char)uVar3 + -0x80;
    iVar2 = *(short *)((int)&DAT_080fe64c + ((uVar3 + 0x40) * 0x1000000 >> 0x17)) * 0x280;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xff;
    }
    *(int *)(param_1 + 0x5c) = iVar2 >> 8;
    iVar2 = (short)(&DAT_080fe64c)[uVar3] * 0x280;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xff;
    }
    *(int *)(param_1 + 0x60) = iVar2 >> 8;
    sub_08017700(param_1,0x8009);
    *(undefined *)(param_1 + 0x13) = 0x80;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  sub_080177F4(param_1);
  if (((*(char *)(param_1 + 0x12) == '\0') ||
      (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 == '\0')) &&
     (uVar3 = sub_0801A9A8(&DAT_02030288,param_1 + 0x54), 0x4000 < uVar3)) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  return in_lr;
}

