// sub_08022590 at 0x08022590 (thumb)

undefined8
sub_08022590(int param_1,int param_2,int param_3,uint param_4,uint param_5,int param_6,int param_7,
            int param_8)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int unaff_r4;
  int unaff_r8;
  undefined4 in_lr;
  
  uVar3 = (uint)*(ushort *)(param_2 + 0x10 + param_6 * 2);
  if (param_4 == 0) {
    uVar3 = 0;
  }
  else {
    if ((param_4 & 0x80) != 0) {
      if (param_5 == 0) {
        uVar3 = 0;
      }
      iVar2 = -1;
      if (param_7 != 0) {
        iVar2 = 1;
      }
      if (param_6 == 0) {
        iVar2 = -iVar2;
      }
      uVar1 = (uint)(ushort)(&DAT_020011d8)[param_8 * 0xc];
      if (0 < iVar2) {
        uVar1 = uVar1 - 1;
      }
      unaff_r4 = (&DAT_020011dc)[param_8 * 6] + uVar1 * iVar2;
      unaff_r8 = (&DAT_020011e0)[param_8 * 6] + ((ushort)(&DAT_020011da)[param_8 * 0xc] - 1);
      iVar2 = *(int *)(param_1 + 4) + (uint)*(ushort *)(param_3 + 4);
      param_5 = param_4;
      if (iVar2 < unaff_r8) {
        unaff_r8 = iVar2;
      }
    }
    if (param_5 != 0) {
      if (((param_5 & 0xffffff7f) == 0xf) || ((param_5 & 0xffffff7f) == 0xe)) {
        if ((param_4 & 0x80) != 0) {
          param_2 = param_6 * 8 + param_2;
          *(int *)(param_2 + 0x50) = unaff_r4;
          *(int *)(param_2 + 0x54) = unaff_r8;
        }
        if ((param_5 & 0xffffff7f) == 0xf) {
          uVar3 = uVar3 | 4;
        }
        if ((param_5 & 0xffffff7f) == 0xe) {
          uVar3 = uVar3 | 8;
        }
      }
      else if ((param_5 & 0x800) == 0) {
        uVar3 = uVar3 | 3;
        if ((param_4 & 0x80) != 0) {
          param_2 = param_6 * 8 + param_2;
          *(int *)(param_2 + 0x40) = unaff_r4;
          *(int *)(param_2 + 0x44) = unaff_r8;
        }
      }
      else {
        uVar3 = uVar3 | 0x802;
      }
    }
  }
  return CONCAT44(in_lr,uVar3);
}

