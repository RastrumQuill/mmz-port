// sub_080BEF08 at 0x080BEF08 (thumb)

undefined4 sub_080BEF08(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined uVar3;
  int iVar4;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xb4);
  if (bVar1 == 1) {
    iVar2 = sub_08007DB4(*(undefined4 *)(param_1 + 0x54),
                         *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x68));
    iVar4 = *(int *)(param_1 + 100);
    if (iVar4 < 0) {
      iVar4 = sub_0800816C(*(int *)(param_1 + 0x54) + iVar4,*(int *)(param_1 + 0x58) + 0x800);
    }
    else {
      iVar4 = sub_0800834C(*(int *)(param_1 + 0x54) + iVar4,*(int *)(param_1 + 0x58) + 0x800);
    }
    if (iVar2 == 0) {
LAB_080befbe:
      uVar3 = 2;
      if (*(int *)(param_1 + 100) < 0) {
        uVar3 = 3;
      }
      *(undefined *)(param_1 + 0xb4) = uVar3;
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
      *(int *)(param_1 + 100) = -*(int *)(param_1 + 100);
      goto LAB_080bf0a0;
    }
    if (iVar4 == 0) goto LAB_080bf0a0;
    uVar3 = 3;
    if (*(int *)(param_1 + 100) < 0) {
      uVar3 = 2;
    }
    *(undefined *)(param_1 + 0xb4) = uVar3;
  }
  else if (bVar1 < 2) {
    if (bVar1 != 0) goto LAB_080bf0a0;
    iVar2 = sub_08007F8C(*(undefined4 *)(param_1 + 0x54),
                         *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x68));
    iVar4 = *(int *)(param_1 + 100);
    if (iVar4 < 0) {
      iVar4 = sub_0800816C(*(int *)(param_1 + 0x54) + iVar4,*(int *)(param_1 + 0x58) + -0x800);
    }
    else {
      iVar4 = sub_0800834C(*(int *)(param_1 + 0x54) + iVar4,*(int *)(param_1 + 0x58) + -0x800);
    }
    if (iVar2 == 0) goto LAB_080befbe;
    if (iVar4 == 0) goto LAB_080bf0a0;
    uVar3 = 3;
    if (*(int *)(param_1 + 100) < 0) {
      uVar3 = 2;
    }
    *(undefined *)(param_1 + 0xb4) = uVar3;
  }
  else {
    if (bVar1 == 2) {
      iVar2 = sub_0800816C(*(int *)(param_1 + 0x54) + *(int *)(param_1 + 100),
                           *(undefined4 *)(param_1 + 0x58));
      iVar4 = *(int *)(param_1 + 0x68);
      if (iVar4 < 0) {
        iVar4 = sub_08007DB4(*(int *)(param_1 + 0x54) + 0x800,*(int *)(param_1 + 0x58) + iVar4);
      }
      else {
        iVar4 = sub_08007F8C(*(int *)(param_1 + 0x54) + 0x800,*(int *)(param_1 + 0x58) + iVar4);
      }
    }
    else {
      if (bVar1 != 3) goto LAB_080bf0a0;
      iVar2 = sub_0800834C(*(int *)(param_1 + 0x54) + *(int *)(param_1 + 100),
                           *(undefined4 *)(param_1 + 0x58));
      iVar4 = *(int *)(param_1 + 0x68);
      if (iVar4 < 0) {
        iVar4 = sub_08007DB4(*(int *)(param_1 + 0x54) + -0x800,*(int *)(param_1 + 0x58) + iVar4);
      }
      else {
        iVar4 = sub_08007F8C(*(int *)(param_1 + 0x54) + -0x800,*(int *)(param_1 + 0x58) + iVar4);
      }
    }
    if (iVar2 != 0) {
      if (iVar4 != 0) {
        *(int *)(param_1 + 100) = -*(int *)(param_1 + 100);
        *(byte *)(param_1 + 0xb4) = (byte)((uint)*(undefined4 *)(param_1 + 0x68) >> 0x1f);
      }
      goto LAB_080bf0a0;
    }
    *(byte *)(param_1 + 0xb4) = (byte)~(byte)((uint)*(undefined4 *)(param_1 + 0x68) >> 0x18) >> 7;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  }
  *(int *)(param_1 + 0x68) = -*(int *)(param_1 + 0x68);
LAB_080bf0a0:
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x68);
  return in_lr;
}

