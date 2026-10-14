// sub_0801F478 at 0x0801F478 (thumb)

undefined8 sub_0801F478(int *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 in_lr;
  
  uVar1 = sub_0801F3D0(param_2[0x1f]);
  uVar1 = uVar1 & 0xff;
  if (uVar1 != 0xff) {
    param_1[1] = ((&DAT_020011e0)[uVar1 * 6] - (uint)(ushort)(&DAT_020011da)[uVar1 * 0xc]) -
                 (uint)*(ushort *)(*param_2 + 4);
    if (((&DAT_020011d6)[uVar1 * 0xc] & 0x6000) != 0) {
      iVar2 = (&DAT_020011dc)[uVar1 * 6] - (&DAT_020011e4)[uVar1 * 6];
      *param_1 = *param_1 + iVar2;
      goto LAB_0801f4e6;
    }
  }
  iVar2 = 0;
LAB_0801f4e6:
  return CONCAT44(in_lr,iVar2);
}

