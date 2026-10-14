// sub_080A35F8 at 0x080A35F8 (thumb)

undefined4 sub_080A35F8(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 8);
  if (*(byte *)(iVar3 + 0xc) < 2) {
    if (*(char *)(iVar3 + 0xf) == '\0') {
      DAT_02004f3a = 0x6644;
      sub_08005214(&DAT_06003000);
      sub_08005214(&DAT_06000800 + (DAT_02004f3a & 0x1f00) * 4);
      uVar2 = 0;
      do {
        iVar1 = (DAT_02004f3a & 0x1f00) * 8 + uVar2 * 0x40 + 0x6000000;
        FUN_080c88ec(&DAT_082b5b84 + uVar2 * 0x14,iVar1,0);
        FUN_080c88f0(&DAT_082b5b84 + uVar2 * 0x14,iVar1,0x4000005);
        uVar2 = uVar2 + 1 & 0xffff;
      } while (uVar2 < 0xe);
      DAT_02004f30 = DAT_02004f30 | 0x3800;
      *(char *)(iVar3 + 0xf) = *(char *)(iVar3 + 0xf) + '\x01';
    }
    DAT_02004f48._0_2_ =
         -(short)((uint)((*(int *)(iVar3 + 0x4c) - *(int *)(param_2 + 8)) + -0x800) >> 8);
    DAT_02004f48._2_2_ = 0xfff0;
    if ((1 < *(byte *)(*(int *)(iVar3 + 0x20) + 0xc)) &&
       (*(char *)(*(int *)(iVar3 + 0x20) + 0x11) != '\0')) {
      DAT_02004f3a = 0x6647;
      DAT_02004f48._0_2_ = 0;
      DAT_02004f48._2_2_ = 0;
      *(undefined4 *)(iVar3 + 0xc) = 4;
      *(undefined4 *)(iVar3 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(iVar3 + 9) * 4) + 0x10);
    }
  }
  return in_lr;
}

