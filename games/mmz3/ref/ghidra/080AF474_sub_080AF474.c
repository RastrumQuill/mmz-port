// sub_080AF474 at 0x080AF474 (thumb)

undefined4 sub_080AF474(int param_1)

{
  char cVar1;
  short sVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_lr;
  int local_1c;
  int local_18;
  
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  cVar1 = sub_080FE4D8(*(undefined *)(param_1 + 0x13),10);
  if (cVar1 == '\0') {
    iVar5 = 0;
    do {
      uVar4 = (uint)*(byte *)(param_1 + 0x13) * 0x10 + iVar5 * 0x40;
      uVar3 = uVar4 & 0xff;
      local_1c = *(short *)((int)&DAT_080fe64c + (uVar4 * 0x1000000 + 0x40000000 >> 0x17)) * 8 +
                 *(int *)(param_1 + 0x54);
      local_18 = (short)(&DAT_080fe64c)[uVar3] * 8 + *(int *)(param_1 + 0x58);
      sub_080AF67C(&local_1c,0x3c0,uVar3,0);
      iVar5 = iVar5 + 1;
    } while (iVar5 < 4);
  }
  *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
  sVar2 = sub_08009A3C(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x800);
  if (sVar2 != 0) {
    sub_0800471C(0x100);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  uVar3 = sub_0801A9A8(&DAT_02030288,param_1 + 0x54);
  if (0x6000 < uVar3) {
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

