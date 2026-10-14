// sub_080500E4 at 0x080500E4 (thumb)

undefined4 sub_080500E4(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  if (*(char *)(iVar4 + 0x150) == -1) {
    *(byte *)(iVar4 + 0x153) = *(byte *)(iVar4 + 0x153) | 0x40;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  else {
    bVar1 = *(byte *)(param_1 + 0x12);
    *(byte *)(param_1 + 0x12) = bVar1 + 1;
    if (bVar1 < 9) {
      if ((*(uint *)(param_1 + 0x8c) & 4) == 0) {
        sub_0801CFF0(param_1);
        bVar1 = *(byte *)(iVar4 + 10) >> 4;
        uVar3 = bVar1 & 1;
        if ((bVar1 & 1) == 0) {
          bVar1 = *(byte *)(param_1 + 10) & 0xef;
        }
        else {
          bVar1 = *(byte *)(param_1 + 10) | 0x10;
        }
        *(byte *)(param_1 + 10) = bVar1;
        *(char *)(param_1 + 0x4c) = (char)uVar3;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar3 << 4);
        uVar3 = (uint)(*(char *)(iVar4 + 0x71) == '\x03');
        if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
          iVar2 = *(int *)(iVar4 + 0x54) +
                  *(int *)(&DAT_08850010 + uVar3 * 8 + (uint)*(byte *)(iVar4 + 0x150) * 0x10);
        }
        else {
          iVar2 = *(int *)(iVar4 + 0x54) -
                  *(int *)(&DAT_08850010 + uVar3 * 8 + (uint)*(byte *)(iVar4 + 0x150) * 0x10);
        }
        *(int *)(param_1 + 0x54) = iVar2;
        *(int *)(param_1 + 0x58) =
             *(int *)(iVar4 + 0x58) +
             *(int *)(&UNK_08850014 + uVar3 * 8 + (uint)*(byte *)(iVar4 + 0x150) * 0x10);
      }
      else {
        *(uint *)(param_1 + 0x8c) = 0;
        *(undefined4 *)(param_1 + 0x90) = 0;
        *(undefined *)(param_1 + 0x94) = 0;
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
        *(byte *)(iVar4 + 0x153) = *(byte *)(iVar4 + 0x153) | 0x40;
        *(undefined4 *)(param_1 + 0xc) = 2;
        *(undefined4 *)(param_1 + 0x14) =
             *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 8);
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(byte *)(iVar4 + 0x153) = *(byte *)(iVar4 + 0x153) | 0x40;
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 8)
      ;
      *(undefined *)(param_1 + 0xe) = 1;
    }
  }
  return in_lr;
}

