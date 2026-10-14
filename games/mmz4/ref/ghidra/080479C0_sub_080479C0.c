// sub_080479C0 at 0x080479C0 (thumb)

undefined4 sub_080479C0(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_lr;
  int local_18;
  int local_14;
  
  iVar5 = *(int *)(param_1 + 0x28);
  if (*(char *)(iVar5 + 0x150) == -1) {
    *(byte *)(iVar5 + 0x153) = *(byte *)(iVar5 + 0x153) | 0x40;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    uVar2 = *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 0xc);
  }
  else {
    sub_0801CFF0(param_1);
    bVar1 = *(byte *)(iVar5 + 10) >> 4;
    uVar4 = bVar1 & 1;
    if ((bVar1 & 1) == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(char *)(param_1 + 0x4c) = (char)uVar4;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar4 << 4);
    uVar4 = (uint)(*(char *)(iVar5 + 0x71) == '\x03');
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      iVar3 = *(int *)(iVar5 + 0x54) +
              *(int *)(&DAT_08850010 + uVar4 * 8 + (uint)*(byte *)(iVar5 + 0x150) * 0x10);
    }
    else {
      iVar3 = *(int *)(iVar5 + 0x54) -
              *(int *)(&DAT_08850010 + uVar4 * 8 + (uint)*(byte *)(iVar5 + 0x150) * 0x10);
    }
    *(int *)(param_1 + 0x54) = iVar3;
    *(int *)(param_1 + 0x58) =
         *(int *)(iVar5 + 0x58) +
         *(int *)(&UNK_08850014 + uVar4 * 8 + (uint)*(byte *)(iVar5 + 0x150) * 0x10);
    uVar4 = (uint)(byte)(&DAT_088500b0)[*(byte *)(iVar5 + 0x150)];
    *(undefined *)(param_1 + 0x24) = (&DAT_088500b0)[*(byte *)(iVar5 + 0x150)];
    if (*(char *)(param_1 + 0xd) == '\0') {
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        local_18 = *(int *)(param_1 + 0x54) +
                   *(short *)((int)&DAT_08128c10 + ((uVar4 + 0x40) * 0x1000000 >> 0x17)) * -0xe;
      }
      else {
        local_18 = *(int *)(param_1 + 0x54) +
                   *(short *)((int)&DAT_08128c10 + ((uVar4 + 0x40) * 0x1000000 >> 0x17)) * 0xe;
      }
      local_14 = *(int *)(param_1 + 0x58) + (short)(&DAT_08128c10)[uVar4] * -0xe;
      sub_080477B8(iVar5,param_1,&local_18,0);
      sub_08002B10(0x3c);
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
    bVar1 = *(byte *)(param_1 + 0x12);
    *(byte *)(param_1 + 0x12) = bVar1 + 1;
    if (bVar1 < 0x11) {
      return in_lr;
    }
    *(byte *)(iVar5 + 0x153) = *(byte *)(iVar5 + 0x153) | 0x40;
    *(undefined4 *)(param_1 + 0xc) = 2;
    uVar2 = *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 8);
  }
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  return in_lr;
}

