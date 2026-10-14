// sub_080E1CE4 at 0x080E1CE4 (thumb)

undefined4 sub_080E1CE4(int param_1)

{
  char cVar1;
  undefined uVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar6 = *(int *)(param_1 + 0xb4);
  iVar4 = *(int *)(&DAT_0835b034 + (uint)*(byte *)(iVar6 + 0x147) * 8);
  sub_080177F4(param_1);
  *(int *)(param_1 + 100) = *(int *)(iVar6 + 0x54) + (int)(short)iVar4;
  *(int *)(param_1 + 0x68) = *(int *)(iVar6 + 0x58) + (iVar4 >> 0x10);
  sub_080FE2C0(param_1,*(undefined4 *)(&DAT_0836e468 + (uint)*(byte *)(param_1 + 0xd) * 4));
  uVar3 = (uint)*(byte *)(param_1 + 0xb8);
  if (*(byte *)(param_1 + 0xd) < 4) {
    uVar3 = uVar3 + 1 + ((int)(uVar3 + 1) >> 4) * -0x10;
    *(byte *)(param_1 + 0xb8) = (byte)uVar3;
  }
  *(int *)(param_1 + 0x54) =
       *(int *)(param_1 + 0xbc) + *(short *)((int)&DAT_080fe64c + ((uVar3 << 0x1c) >> 0x17)) * 0x14
       + *(int *)(param_1 + 100);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xc0) + *(int *)(param_1 + 0x68);
  uVar2 = 0x10;
  if (0x7f < (uVar3 * 0x10 + 0x40 & 0xff)) {
    uVar2 = 0x11;
  }
  *(undefined *)(param_1 + 0x25) = uVar2;
  if (*(byte *)(param_1 + 0xd) < 5) {
    pcVar5 = (char *)(param_1 + 0xb9);
    cVar1 = *pcVar5;
    *pcVar5 = cVar1 + -1;
    if ((char)(cVar1 + -1) == -1) {
      sub_080BF760(param_1 + 0x54,0);
      *pcVar5 = ' ';
    }
  }
  return in_lr;
}

