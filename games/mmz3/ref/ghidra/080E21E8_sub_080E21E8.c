// sub_080E21E8 at 0x080E21E8 (thumb)

undefined4 sub_080E21E8(int param_1)

{
  char cVar1;
  undefined uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0xb4);
  iVar5 = *(int *)(&DAT_0835b034 + (uint)*(byte *)(iVar3 + 0x147) * 8);
  sub_080177F4(param_1);
  if (DAT_0202f5d0 == '\0') {
    if (*(char *)(iVar3 + 0x232) == '\0') {
      if (((*(uint *)(iVar3 + 0x8c) & 0x200) == 0) && (*(short *)(iVar3 + 0xa4) != 0)) {
        *(int *)(param_1 + 100) = *(int *)(iVar3 + 0x54) + (int)(short)iVar5;
        *(int *)(param_1 + 0x68) = *(int *)(iVar3 + 0x58) + (iVar5 >> 0x10);
        sub_080FE2C0(param_1,*(undefined4 *)(&DAT_0836e494 + (uint)*(byte *)(param_1 + 0xd) * 4));
        iVar3 = *(byte *)(param_1 + 0xb8) + 1;
        iVar5 = iVar3 + (iVar3 >> 4) * -0x10;
        *(byte *)(param_1 + 0xb8) = (byte)iVar5;
        *(int *)(param_1 + 0x54) =
             *(int *)(param_1 + 0xbc) +
             *(short *)((int)&DAT_080fe64c + ((uint)(iVar3 * 0x10000000) >> 0x17)) * 0x10 +
             *(int *)(param_1 + 100);
        *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xc0) + *(int *)(param_1 + 0x68);
        uVar2 = 0x10;
        if (0x7f < (iVar5 * 0x10 + 0x40U & 0xff)) {
          uVar2 = 0x11;
        }
        *(undefined *)(param_1 + 0x25) = uVar2;
        pcVar4 = (char *)(param_1 + 0xb9);
        cVar1 = *pcVar4;
        *pcVar4 = cVar1 + -1;
        if ((char)(cVar1 + -1) == -1) {
          sub_080BF760(param_1 + 0x54,2);
          *pcVar4 = ' ';
        }
      }
      else {
        *(undefined4 *)(param_1 + 0xc) = 2;
        *(undefined4 *)(param_1 + 0x14) =
             *(undefined4 *)((&DAT_0836e24c)[*(byte *)(param_1 + 9)] + 8);
      }
    }
    else {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)((&DAT_0836e24c)[*(byte *)(param_1 + 9)] + 0xc);
    }
  }
  return in_lr;
}

