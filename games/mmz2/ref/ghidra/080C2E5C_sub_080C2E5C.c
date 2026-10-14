// sub_080C2E5C at 0x080C2E5C (thumb)

undefined4 sub_080C2E5C(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 in_lr;
  
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_08012580(param_1);
  uVar1 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0x58) = uVar1;
  if (*(char *)(param_1 + 0x11) == '\0') {
    DAT_0202e5ee = 0x350;
    DAT_0202e3ee = 8;
    sub_08002638(&DAT_084330ac,0x10000);
    sub_08002AEC(&DAT_084330b8,(DAT_0202e3ee - 7) * 0x20 + 0x200);
    sub_08002638(&DAT_08433098,(DAT_0202e5ec - 0x2d0) * 0x20 + 0x10000);
    sub_08002AEC(&DAT_084330a4,(DAT_0202e3ec - 7) * 0x20 + 0x200);
  }
  if (*(byte *)(param_1 + 0x11) < 2) {
    *(int *)(param_1 + 0x28) = param_1;
    uVar6 = 0;
    do {
      iVar2 = sub_08006B84(DAT_0202f088);
      if (iVar2 != 0) {
        *(undefined *)(iVar2 + 0x25) = 0x1e;
        *(undefined *)(iVar2 + 9) = 5;
        *(undefined4 *)(iVar2 + 0x14) = 0x80c22d1;
        *(undefined2 *)(iVar2 + 0x20) = 0;
        *(undefined *)(iVar2 + 0x22) = 0;
        *(byte *)(iVar2 + 0xb) = *(byte *)(iVar2 + 0xb) | 0x10;
        *(undefined *)(iVar2 + 0x1d) = *(undefined *)(iVar2 + 0x1c);
        *(undefined *)(iVar2 + 0x10) = *(undefined *)(param_1 + 0x10);
        *(char *)(iVar2 + 0x11) = (char)uVar6 + '\x02';
        iVar3 = (int)(uVar6 * 0x10000) >> 0x10;
        if (*(char *)(param_1 + 0x11) == '\0') {
          if (iVar3 < 3) {
            iVar3 = *(int *)(param_1 + 0x54) - (iVar3 * 0x800 + 0x1000);
          }
          else {
            iVar3 = *(int *)(param_1 + 0x54) - (iVar3 * 0x400 + -0x1c00);
          }
        }
        else {
          if (iVar3 < 3) {
            iVar3 = iVar3 << 2;
            iVar4 = 0x10;
          }
          else {
            iVar3 = (iVar3 + -3) * 8;
            iVar4 = -0x10;
          }
          iVar3 = *(int *)(param_1 + 0x54) + (iVar4 - iVar3) * -0x100;
        }
        *(int *)(iVar2 + 0x54) = iVar3;
        *(undefined4 *)(iVar2 + 0x58) = *(undefined4 *)(param_1 + 0x58);
        *(int *)(iVar2 + 0x28) = param_1;
      }
      uVar5 = uVar6 * 0x10000 + 0x10000;
      uVar6 = uVar5 >> 0x10;
    } while ((int)uVar5 >> 0x10 < 6);
  }
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0834863c + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_080C22E8(param_1);
  return in_lr;
}

