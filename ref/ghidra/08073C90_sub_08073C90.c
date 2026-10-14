// sub_08073C90 at 0x08073C90 (thumb)

undefined4 sub_08073C90(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
LAB_08073cf8:
    if ((*(ushort *)(param_1 + 0x90) & 0x40) == 0) {
      if ((*(int *)(param_1 + 0x50) - *(int *)(DAT_0202286c + 0x50)) + 0x3000U < 0x6000) {
        if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
          iVar3 = *(int *)(param_1 + 0x4c);
          iVar4 = *(int *)(DAT_0202286c + 0x4c);
        }
        else {
          iVar3 = *(int *)(DAT_0202286c + 0x4c);
          iVar4 = *(int *)(param_1 + 0x4c);
        }
        *(int *)(param_1 + 0xc0) = iVar3 - iVar4;
      }
      else {
        *(undefined4 *)(param_1 + 0xc0) = 0xffffffff;
      }
      sub_080C8A98(param_1,*(undefined4 *)(&DAT_082b15a4 + (uint)*(byte *)(param_1 + 0xd) * 4));
      sub_080C8A98(param_1,*(undefined4 *)(&DAT_082b15c4 + (uint)*(byte *)(param_1 + 0xd) * 4));
    }
    else {
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 8);
      sub_08073DA0(param_1);
    }
  }
  else {
    uVar2 = DAT_02022ae0 & 0x10;
    if ((DAT_02022ae0 & 0x10) == 0) {
      if (*(byte *)(*(int *)(param_1 + 0x20) + 0xc) < 2) goto LAB_08073cf8;
      bVar1 = *(byte *)(param_1 + 10);
    }
    else {
      bVar1 = *(byte *)(param_1 + 10);
      uVar2 = 0;
    }
    *(byte *)(param_1 + 10) = bVar1 & 0xfc;
    *(uint *)(param_1 + 0x90) = uVar2;
    *(char *)(param_1 + 0x94) = (char)uVar2;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  return in_lr;
}

