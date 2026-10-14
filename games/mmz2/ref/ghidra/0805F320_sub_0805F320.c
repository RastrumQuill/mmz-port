// sub_0805F320 at 0x0805F320 (thumb)

undefined4 sub_0805F320(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  undefined4 in_lr;
  
  if ((((*(uint *)(param_1 + 0x8c) & 0x200) == 0) && (*(short *)(param_1 + 0xa4) != 0)) ||
     ((DAT_0202ec38 & 0x10) != 0)) {
    iVar2 = *(int *)(param_1 + 0xcc);
    if ((iVar2 != 0) && (1 < *(byte *)(iVar2 + 0xc))) {
      *(int *)(param_1 + 0xcc) = 0;
    }
    iVar2 = *(int *)(param_1 + 0xd0);
    if ((iVar2 != 0) && (1 < *(byte *)(iVar2 + 0xc))) {
      *(int *)(param_1 + 0xd0) = 0;
    }
    pbVar5 = (byte *)(param_1 + 0xbf);
    if (((*(uint *)(param_1 + 0x8c) & 1) != 0) && ((*(byte *)(param_1 + 0x97) & 0xf0) == 0x20)) {
      *pbVar5 = 0x10;
      sub_080032EC(0x7a);
    }
    if (*pbVar5 != 0) {
      bVar1 = *pbVar5 - 1;
      *pbVar5 = bVar1;
      if ((bVar1 & 1) == 0) {
        uVar3 = DAT_0202e188 * 0x343fd + 0x269ec3;
        uVar4 = (uVar3 & 0x7fffffff) * 0x343fd + 0x269ec3;
        DAT_0202e188 = uVar4 & 0x7fffffff;
        sub_080AC8A4(*(int *)(param_1 + 0x54) + (0x10 - (uVar3 * 2 >> 0x11 & 0x1f)) * 0x100,
                     *(int *)(param_1 + 0x58) + (0x10 - (uVar4 * 2 >> 0x11 & 0x1f)) * 0x100,0);
      }
      else {
        uVar3 = DAT_0202e188 * 0x343fd + 0x269ec3;
        uVar4 = (uVar3 & 0x7fffffff) * 0x343fd + 0x269ec3;
        DAT_0202e188 = uVar4 & 0x7fffffff;
        sub_080AC8A4(*(int *)(param_1 + 0x54) + (0x10 - (uVar3 * 2 >> 0x11 & 0x1f)) * 0x100,
                     *(int *)(param_1 + 0x58) + (0x10 - (uVar4 * 2 >> 0x11 & 0x1f)) * 0x100,0);
      }
    }
    sub_080EF118(param_1,*(undefined4 *)(&DAT_0833d0e0 + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833a138 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_0805F498(param_1);
  }
  return in_lr;
}

