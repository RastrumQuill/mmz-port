// sub_080EA0F8 at 0x080EA0F8 (thumb)

undefined4 sub_080EA0F8(int param_1)

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
  sub_08002638(&DAT_08390e78,(DAT_02000f96 & 0xc) << 0xc);
  sub_08002AEC(&DAT_08390e84,0);
  sub_080EEF68(&DAT_0836ebf0,iVar1,0x140);
  sub_08002638(&DAT_0843328c,(DAT_0202e61e - 0x210) * 0x20 + 0x10000);
  sub_08002AEC(&DAT_08433298,(DAT_0202e41e - 4) * 0x20 + 0x200);
  sub_08002638(&DAT_084332a0,(DAT_0202e620 - 0x270) * 0x20 + 0x10000);
  sub_08002AEC(&DAT_084332ac,(DAT_0202e420 - 7) * 0x20 + 0x200);
  *(int *)(param_1 + 0x14) = iVar1;
  return in_lr;
}

