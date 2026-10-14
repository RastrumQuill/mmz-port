// sub_0808BC04 at 0x0808BC04 (thumb)

undefined8 sub_0808BC04(int param_1)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 0xd) == '\x03') || (*(char *)(param_1 + 0xd) == '\x06')) {
    if (-1 < *(int *)(param_1 + 0x60)) {
      iVar2 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      uVar3 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      if ((uVar3 & 0x8000) == 0) goto LAB_0808bcd4;
      iVar4 = iVar2 - *(int *)(param_1 + 0x58);
      if (iVar4 < 0) {
        iVar4 = *(int *)(param_1 + 0x58) - iVar2;
      }
      if (0x3ff < iVar4) {
        iVar4 = *(int *)(param_1 + 0x60);
        goto joined_r0x0808bc80;
      }
      goto LAB_0808bcde;
    }
    iVar2 = sub_0800958C(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + -0x1400);
    if (*(int *)(param_1 + 0x58) + -0x1400 < iVar2) {
      *(int *)(param_1 + 0x58) = iVar2 + 0x1400;
    }
  }
  else {
    iVar2 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    uVar3 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    if ((uVar3 & 0x8000) == 0) {
LAB_0808bcd4:
      if (0x43f < iVar2 - *(int *)(param_1 + 0x58)) goto LAB_0808bce0;
    }
    else {
      iVar4 = iVar2 - *(int *)(param_1 + 0x58);
      if (iVar4 < 0) {
        iVar4 = *(int *)(param_1 + 0x58) - iVar2;
      }
      if (0x3ff < iVar4) {
        iVar4 = *(int *)(param_1 + 0x60);
joined_r0x0808bc80:
        if (iVar4 < 0x401) goto LAB_0808bce0;
      }
    }
LAB_0808bcde:
    *(int *)(param_1 + 0x58) = iVar2;
  }
LAB_0808bce0:
  uVar1 = sub_08008354(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x100);
  if (((uVar1 & 1) == 0) && (uVar1 != 0)) {
    iVar2 = *(int *)(param_1 + 0x58) + -0x1000;
    iVar4 = sub_080090D4(*(int *)(param_1 + 0x54) + 0xa00,iVar2);
    if (-1 < iVar4) {
      iVar4 = *(int *)(param_1 + 0x54);
LAB_0808bd74:
      iVar4 = sub_08009240(iVar4 + -0xa00,iVar2);
      if (iVar4 < 1) goto LAB_0808bd94;
    }
  }
  else {
    iVar2 = *(int *)(param_1 + 0x58) + -0x400;
    uVar3 = sub_08008CFC(*(int *)(param_1 + 0x54) + 0xa00,iVar2);
    if (((uVar3 & 1) == 0) ||
       (iVar4 = sub_080090D4(*(int *)(param_1 + 0x54) + 0xa00,iVar2), -1 < iVar4)) {
      uVar3 = sub_08008CFC(*(int *)(param_1 + 0x54) + -0xa00,iVar2);
      if ((uVar3 & 1) != 0) {
        iVar4 = *(int *)(param_1 + 0x54);
        goto LAB_0808bd74;
      }
LAB_0808bd94:
      uVar5 = 0;
      goto LAB_0808bd96;
    }
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar4;
  uVar5 = 1;
LAB_0808bd96:
  return CONCAT44(in_lr,uVar5);
}

