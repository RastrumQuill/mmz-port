// sub_080D951C at 0x080D951C (thumb)

undefined4 sub_080D951C(int param_1)

{
  byte bVar1;
  undefined uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 0xd0) == 0) {
    iVar3 = sub_080D9B78(*(undefined4 *)(param_1 + 0x28));
    *(int *)(param_1 + 0xd0) = iVar3;
  }
  if ((*(uint *)(*(int *)(param_1 + 0x28) + 0xc) & 0xffff00) == 0x20700) {
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  else if (*(short *)(param_1 + 0xa4) != 0) {
    sub_080378B4(*(int *)(param_1 + 0x28),(int *)(param_1 + 0xbc),0);
    if (*(byte *)(param_1 + 0xc) < 2) {
      if (*(byte *)(param_1 + 0xc) == 1) {
        sub_080EF118(param_1,*(undefined4 *)(&DAT_0834b640 + (uint)*(byte *)(param_1 + 0xd) * 4));
        iVar3 = *(int *)(param_1 + 0x60) + *(char *)(param_1 + 200) * 0x300;
        if (0xc00 < iVar3 + 0x600U) {
          iVar4 = -1;
          if (0 < iVar3) {
            iVar4 = 1;
          }
          iVar3 = iVar4 * 0x600;
        }
        *(int *)(param_1 + 0x60) = iVar3;
        iVar3 = *(int *)(param_1 + 0xb8) + iVar3;
        *(int *)(param_1 + 0xb8) = iVar3;
        iVar4 = sub_080EF1E8(*(byte *)(param_1 + 0x12) + 1,0x30);
        *(char *)(param_1 + 0x12) = (char)iVar4;
        bVar1 = sub_080EF150(iVar4 << 8,0x30);
        *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0xbc) + (short)(&DAT_080ef450)[bVar1] * 0x10;
        *(int *)(param_1 + 0x58) = iVar3 + *(int *)(param_1 + 0xc0);
        iVar3 = 2;
        if (0x7f < (byte)(bVar1 + 0x40)) {
          iVar3 = 3;
        }
        *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | (byte)(iVar3 << 2);
      }
      else {
        iVar3 = 2;
      }
      uVar2 = sub_080BED50(param_1,*(undefined *)(param_1 + 0x13),iVar3);
      *(undefined *)(param_1 + 0x13) = uVar2;
      sub_08012A14(param_1);
      return in_lr;
    }
  }
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0834a1a0)[*(byte *)(param_1 + 9)] + 8);
  *(undefined *)(param_1 + 0xd) = 0;
  sub_080BEE58(param_1);
  return in_lr;
}

