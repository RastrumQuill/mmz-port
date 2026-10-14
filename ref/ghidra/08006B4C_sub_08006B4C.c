// sub_08006B4C at 0x08006B4C (thumb)

undefined8 sub_08006B4C(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 in_lr;
  
  if ((((-1 < param_1) && (-1 < param_2)) && (param_1 < 0x771000)) && (param_2 < 0x4f6000)) {
    if ((byte)(&DAT_082921ec)
              [(uint)(byte)(&DAT_082915ec)[param_1 >> 0xc] +
               (uint)(byte)(&DAT_08290dec)[param_2 >> 0xc] * 0x80] >> 4 != 0xf) {
      uVar1 = (byte)(&DAT_082921ec)
                    [(uint)(byte)(&DAT_082915ec)[param_1 >> 0xc] +
                     (uint)(byte)(&DAT_08290dec)[param_2 >> 0xc] * 0x80] & 0xf;
      iVar2 = *(int *)((DAT_02005208 >> (uVar1 << 1) & 3) * 4 + (&DAT_08293bec)[uVar1]);
      uVar1 = (uint)((*(ushort **)(iVar2 + 0x7c))
                     [((uint)(byte)(&DAT_08290dec)[param_2 >> 0xc] - *(int *)(iVar2 + 0x70) <<
                      (**(ushort **)(iVar2 + 0x7c) & 0xff)) +
                      ((uint)(byte)(&DAT_082915ec)[param_1 >> 0xc] - *(int *)(iVar2 + 0x6c)) + 4] >>
                    0xc);
      goto LAB_08006be2;
    }
  }
  uVar1 = 0xf;
LAB_08006be2:
  return CONCAT44(in_lr,uVar1);
}

