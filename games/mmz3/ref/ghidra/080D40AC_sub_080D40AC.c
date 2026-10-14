// sub_080D40AC at 0x080D40AC (thumb)

undefined4 sub_080D40AC(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x54);
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x58);
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x58) + -0x5000;
    DAT_0202fab2 = 0x380;
    DAT_0202f8b2 = 7;
    sub_0800393C(&DAT_085d7f4c,0x10700);
    sub_08003E14(&DAT_085d7f58,(DAT_0202f8b2 - 6) * 0x20 + 0x200);
    *(undefined *)(param_1 + 0x22) = 1;
    sub_08017700(param_1,0x5100);
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  sub_080177F4(param_1);
  bVar1 = *(byte *)(param_1 + 0x12);
  uVar2 = bVar1 + 1;
  *(char *)(param_1 + 0x12) = (char)uVar2;
  iVar3 = *(int *)(param_1 + 0x5c) +
          *(short *)((int)&DAT_080fe64c + ((bVar1 + 0x41) * 0x1000000 >> 0x17)) * 2;
  *(int *)(param_1 + 0x54) = iVar3;
  *(int *)(param_1 + 0x58) =
       *(int *)(param_1 + 0x68) + *(short *)((int)&DAT_080fe64c + (uVar2 * 0x2000000 >> 0x17)) * 4;
  if ((uVar2 & 0xf) == 0) {
    sub_080C50F4(3,0,iVar3);
  }
  if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) == 0) {
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) * 0x7f + *(int *)(param_1 + 0x60) >> 7;
  }
  else {
    iVar3 = *(byte *)(param_1 + 0x13) + 1;
    *(char *)(param_1 + 0x13) = (char)iVar3;
    iVar3 = (int)*(short *)((int)&DAT_080fe64c +
                           ((0x40 - ((uint)(iVar3 * 0x1000000) >> 0x1a)) * 0x1000000 >> 0x17));
    *(int *)(param_1 + 0x5c) = (*(int *)(param_1 + 0x5c) + 0x100) - iVar3;
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + -0x100 + iVar3;
    uVar2 = sub_0801A9A8(&DAT_02030288,param_1 + 0x54);
    if (0x2000 < uVar2) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
  }
  return in_lr;
}

