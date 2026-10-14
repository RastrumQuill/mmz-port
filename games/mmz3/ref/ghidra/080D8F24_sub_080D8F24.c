// sub_080D8F24 at 0x080D8F24 (thumb)

undefined4 sub_080D8F24(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  byte bVar3;
  uint uVar4;
  undefined4 in_lr;
  
  sVar1 = sub_08009A3C(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  if (sVar1 == 0) {
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0836c2ec + (uint)*(byte *)(param_1 + 9) * 4) + 4);
    sub_0801749C(param_1);
    bVar3 = *(byte *)(param_1 + 10);
    *(byte *)(param_1 + 10) = bVar3 | 3;
    if (*(byte *)(param_1 + 0x11) == 0) {
      bVar3 = bVar3 & 0xef | 3;
    }
    else {
      bVar3 = bVar3 | 0x13;
    }
    *(byte *)(param_1 + 10) = bVar3;
    uVar4 = *(byte *)(param_1 + 0x11) & 1;
    *(char *)(param_1 + 0x4c) = (char)uVar4;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar4 << 4);
    *(undefined *)(param_1 + 0x25) = 0x1c;
    uVar2 = sub_0800A104(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar2;
    *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x54);
    sub_080FE2C0(param_1,*(undefined4 *)(&DAT_0836d994 + (uint)*(byte *)(param_1 + 0x10) * 4));
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0836c2ec + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  return in_lr;
}

