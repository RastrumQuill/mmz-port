// sub_080E4BE8 at 0x080E4BE8 (thumb)

undefined4 sub_080E4BE8(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  undefined4 in_lr;
  
  sub_08014C64();
  piVar3 = (int *)(param_1 + 0x7254);
  iVar4 = *piVar3;
  if (iVar4 == 0) {
    if (*(short *)(param_1 + 0xc) == 0) {
      uVar1 = 0xa04;
    }
    else if (*(short *)(param_1 + 0xc) == 1) {
      uVar1 = 0xb04;
    }
    else {
      uVar1 = 0xc04;
    }
LAB_080e4d3c:
    sub_080E0E64(param_1,uVar1);
    return in_lr;
  }
  if ((DAT_0202ec38 & 0x10) != 0) {
    if (*DAT_0202ebf0 == '\0') {
      uVar1 = 0x800;
    }
    else {
      if (DAT_0202ec04 < 99) {
        DAT_0202ec04 = DAT_0202ec04 + 1;
      }
      *DAT_0202ebf0 = *DAT_0202ebf0 + -1;
      uVar1 = 0x300;
    }
    goto LAB_080e4d3c;
  }
  if ((DAT_0202ebb4 & 0x10) != 0) {
    *piVar3 = 0x11;
    sub_080148B4(0x11,9);
    goto LAB_080e4d52;
  }
  if (iVar4 == 1) {
    iVar4 = 0x11;
LAB_080e4ca4:
    *piVar3 = iVar4;
    sub_080148A4();
  }
  else {
    uVar2 = *(uint *)(DAT_0202ebf0 + 0x14);
    if ((uVar2 & 0x106c) == 0x106c) {
      if (iVar4 == 0xc) {
        *piVar3 = 0x11;
        sub_080148B4(0x11,5);
        goto LAB_080e4d52;
      }
      if ((uVar2 & 0x10) == 0) {
        *piVar3 = 4;
        sub_080148A4();
        uVar1 = 0xb00;
        goto LAB_080e4d3c;
      }
      if (iVar4 == 4) {
        *piVar3 = 0x11;
        sub_080148B4(0x11,6);
        goto LAB_080e4d52;
      }
      if ((DAT_0202ebb5 & 0x80) != 0) {
        if ((uVar2 & 0x800) == 0) {
          if (iVar4 != 0x11) {
            *piVar3 = 0x11;
            sub_080148B4(0x11,7);
            goto LAB_080e4d52;
          }
          *(undefined4 *)(param_1 + 0x7254) = 0xb;
          sub_080148A4(0xb);
          uVar1 = 0xb00;
        }
        else {
          if ((uVar2 & 0x1e000) != 0x1e000) {
            *(undefined4 *)(param_1 + 0x7254) = 0x11;
            sub_080148B4(0x11,8);
            goto LAB_080e4d52;
          }
          uVar1 = 0xa00;
        }
        goto LAB_080e4d3c;
      }
    }
    else if ((DAT_0202ebb5 & 0x20) != 0) {
      iVar4 = 0xc;
      goto LAB_080e4ca4;
    }
    *piVar3 = 0x11;
    sub_080148B4(0x11,3);
  }
LAB_080e4d52:
  sub_080E0E64(param_1,0x300);
  return in_lr;
}

