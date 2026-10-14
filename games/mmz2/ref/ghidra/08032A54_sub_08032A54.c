// sub_08032A54 at 0x08032A54 (thumb)

undefined4 sub_08032A54(int param_1)

{
  byte bVar1;
  ushort uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0x198 + (uint)*(byte *)(param_1 + 0x195));
  uVar4 = bVar1 & 0xc;
  if ((bVar1 & 0xc) == 0) {
    *(undefined *)(param_1 + 0x174) = *(undefined *)(param_1 + 0xd);
    *(char *)(param_1 + 0xd) = (char)uVar4;
    *(undefined *)(param_1 + 0x175) = *(undefined *)(param_1 + 0xe);
    *(short *)(param_1 + 0xe) = (short)uVar4;
    *(undefined *)(param_1 + 0x17a) = *(undefined *)(param_1 + 0x176);
    *(undefined *)(param_1 + 0x176) = 0;
    *(undefined *)(param_1 + 0x17b) = *(undefined *)(param_1 + 0x177);
    *(undefined *)(param_1 + 0x177) = 0;
    *(undefined *)(param_1 + 0x17c) = *(undefined *)(param_1 + 0x178);
    *(undefined *)(param_1 + 0x178) = 0;
    *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
    *(undefined *)(param_1 + 0x179) = 0;
    *(uint *)(param_1 + 0xc4) = uVar4;
    sub_08032BB8(param_1);
    return in_lr;
  }
  *(undefined *)(param_1 + 0x174) = *(undefined *)(param_1 + 0xd);
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined *)(param_1 + 0x175) = *(undefined *)(param_1 + 0xe);
  *(undefined2 *)(param_1 + 0xe) = 1;
  *(undefined *)(param_1 + 0x17a) = *(undefined *)(param_1 + 0x176);
  *(undefined *)(param_1 + 0x176) = 0;
  *(undefined *)(param_1 + 0x17b) = *(undefined *)(param_1 + 0x177);
  *(undefined *)(param_1 + 0x177) = 0;
  *(undefined *)(param_1 + 0x17c) = *(undefined *)(param_1 + 0x178);
  *(undefined *)(param_1 + 0x178) = 0;
  *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
  *(undefined *)(param_1 + 0x179) = 0;
  if (((*(byte *)(param_1 + 0x202) & 4) != 0) || (*(char *)(param_1 + 0x1fc) == '\x05')) {
    uVar2 = DAT_0202ec34;
    if (*(char *)(param_1 + 0x10) != '\0') {
      uVar2 = DAT_0202ec36;
    }
    if ((uVar2 & 0x8000) == 0) {
      uVar3 = 0x280;
      goto LAB_08032b34;
    }
  }
  uVar3 = 0x200;
LAB_08032b34:
  *(undefined4 *)(param_1 + 0xc4) = uVar3;
  return in_lr;
}

