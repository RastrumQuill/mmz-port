// sub_0801F4F0 at 0x0801F4F0 (thumb)

undefined8 sub_0801F4F0(int *param_1,ushort **param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 in_lr;
  
  uVar1 = sub_0801F3D0(param_2[0x20]);
  uVar1 = uVar1 & 0xff;
  if (uVar1 != 0xff) {
    iVar2 = -1;
    if (param_3 != 0) {
      iVar2 = 1;
    }
    *param_1 = (&DAT_020011dc)[uVar1 * 6] -
               iVar2 * ((uint)(ushort)(&DAT_020011d8)[uVar1 * 0xc] + (iVar2 >> 0x1f) + 1 +
                       (uint)**param_2);
    if (((&DAT_020011d6)[uVar1 * 0xc] & 0x6000) != 0) {
      iVar2 = (&DAT_020011e0)[uVar1 * 6] - *(int *)(&DAT_020011e8 + uVar1 * 0x18);
      goto LAB_0801f56e;
    }
  }
  iVar2 = 0;
LAB_0801f56e:
  return CONCAT44(in_lr,iVar2);
}

