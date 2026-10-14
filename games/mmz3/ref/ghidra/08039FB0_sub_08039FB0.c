// sub_08039FB0 at 0x08039FB0 (thumb)

undefined4 sub_08039FB0(int param_1)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0xb4);
  cVar1 = *(char *)(iVar4 + 0x127);
  if (cVar1 == -1) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0835b5d0)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  else {
    if (*(char *)(param_1 + 0x10) != cVar1) {
      *(char *)(param_1 + 0x10) = cVar1;
      sub_080177CC(param_1,*(undefined2 *)
                            (&DAT_0835da34 +
                            (uint)*(byte *)(param_1 + 0x10) * 2 +
                            (uint)*(byte *)(param_1 + 0x11) * 8),(short)*(char *)(param_1 + 0x71),
                   (short)*(char *)(param_1 + 0x72));
    }
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar4 + 0x54);
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(iVar4 + 0x58);
    bVar2 = *(byte *)(iVar4 + 10) >> 4;
    uVar3 = bVar2 & 1;
    if ((bVar2 & 1) == 0) {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar2;
    *(char *)(param_1 + 0x4c) = (char)uVar3;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar3 << 4);
    if (*(char *)(param_1 + 0x73) == '\x03') {
      *(undefined *)(param_1 + 0xd) = (&DAT_0835dafc)[*(byte *)(param_1 + 0x11)];
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}

