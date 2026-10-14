// sub_080EAFEC at 0x080EAFEC (thumb)

undefined4 sub_080EAFEC(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar1 = 0xee0;
  iVar3 = *(int *)(param_1 + 8);
  iVar2 = iVar3;
  if (iVar3 < 0) {
    iVar2 = iVar3 + 0x1ffff;
  }
  if (iVar3 != (iVar2 >> 0x11) * 0x20000) {
    iVar1 = 0x16e0;
  }
  iVar1 = *(int *)(param_1 + 0xc) + iVar1;
  sub_08002638(&DAT_08390ea0,(DAT_02000f96 & 0xc) << 0xc);
  sub_08002AEC(&DAT_08390eac,0);
  sub_080EEF68(&DAT_0836f600,iVar1,0x140);
  sub_08002D68(0x90,0);
  *(int *)(param_1 + 0x18) = iVar1;
  sub_080D5CCC(*(undefined4 *)(param_1 + 0x10),0,iVar1);
  return in_lr;
}

