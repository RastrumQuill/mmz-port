// sub_080EA524 at 0x080EA524 (thumb)

undefined4 sub_080EA524(int param_1)

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
  if ((DAT_0202ebb4 & 2) == 0) {
    sub_08002638(&DAT_08390e8c,(DAT_02000f96 & 0xc) << 0xc);
    sub_08002AEC(&DAT_08390e98,0);
    sub_080EEF68(&DAT_0836f0f8,iVar1,0x140);
  }
  else {
    sub_080EEF68(&DAT_0836e1e0,iVar1,0x140);
  }
  *(int *)(param_1 + 0x14) = iVar1;
  sub_080EA5D0(param_1);
  sub_080EAA40(param_1);
  return in_lr;
}

