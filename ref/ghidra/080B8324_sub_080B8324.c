// sub_080B8324 at 0x080B8324 (thumb)

undefined4 sub_080B8324(int param_1)

{
  undefined uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 0xd8) == 0) {
    iVar2 = sub_080B8994(*(undefined4 *)(param_1 + 0x20));
    *(int *)(param_1 + 0xd8) = iVar2;
  }
  if ((*(uint *)(*(int *)(param_1 + 0x20) + 0xc) & 0xffff00) == 0x20600) {
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  else if (*(short *)(param_1 + 0x8c) != 0) {
    sub_08018FF8(*(int *)(param_1 + 0x20),(int *)(param_1 + 0xc4),0);
    if (*(byte *)(param_1 + 0xc) < 2) {
      if (*(byte *)(param_1 + 0xc) == 1) {
        sub_080C8A98(param_1,*(undefined4 *)(&DAT_082b842c + (uint)*(byte *)(param_1 + 0xd) * 4));
        iVar2 = *(int *)(param_1 + 0x58) + *(char *)(param_1 + 0xd0) * 0x300;
        if (0xc00 < iVar2 + 0x600U) {
          iVar3 = -1;
          if (0 < iVar2) {
            iVar3 = 1;
          }
          iVar2 = iVar3 * 0x600;
        }
        *(int *)(param_1 + 0x58) = iVar2;
        iVar2 = *(int *)(param_1 + 0xc0) + iVar2;
        *(int *)(param_1 + 0xc0) = iVar2;
        iVar3 = sub_080C8B68(*(byte *)(param_1 + 0x12) + 1,0x30);
        *(char *)(param_1 + 0x12) = (char)iVar3;
        iVar3 = sub_080C8AD0(iVar3 << 8,0x30);
        *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0xc4) + (short)(&DAT_080c8e24)[iVar3] * 0x10;
        *(int *)(param_1 + 0x50) = iVar2 + *(int *)(param_1 + 200);
        iVar4 = iVar3 + 0x40;
        iVar2 = iVar4;
        if (iVar4 < 0) {
          iVar2 = iVar3 + 0x13f;
        }
        iVar4 = iVar4 + (iVar2 >> 8) * -0x100;
        iVar5 = iVar4 + 0x100;
        iVar3 = iVar5;
        if (iVar5 < 0) {
          iVar3 = iVar4 + 0x1ff;
        }
        iVar2 = 2;
        if (0x7f < iVar5 + (iVar3 >> 8) * -0x100) {
          iVar2 = 3;
        }
        *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf3 | (byte)(iVar2 << 2);
      }
      else {
        iVar2 = 2;
      }
      uVar1 = sub_08099BF8(param_1,*(undefined *)(param_1 + 0x13),iVar2);
      *(undefined *)(param_1 + 0x13) = uVar1;
      sub_080B50EC(param_1);
      return in_lr;
    }
  }
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b6e70)[*(byte *)(param_1 + 9)] + 8);
  *(undefined *)(param_1 + 0xd) = 0;
  sub_08099D0C(param_1);
  return in_lr;
}

