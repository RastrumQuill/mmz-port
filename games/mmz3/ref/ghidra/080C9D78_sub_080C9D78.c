// sub_080C9D78 at 0x080C9D78 (thumb)

undefined4 sub_080C9D78(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  undefined4 local_28;
  int local_24;
  
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xf7;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfa;
  if (DAT_0202e48c < *(int *)(param_1 + 0x58) + -0xf00) {
    iVar6 = 4;
    do {
      uVar1 = DAT_0202f608 * 0x343fd + 0x269ec3;
      uVar4 = uVar1 & 0x7fffffff;
      if ((uVar1 * 2 >> 0x11 & 1) == 0) {
        uVar1 = uVar4 * 0x343fd + 0x269ec3;
        uVar4 = uVar1 & 0x7fffffff;
        DAT_0202f608 = uVar4;
        iVar2 = sub_080FE4D8(uVar1 * 2 >> 0x11,0x1c00);
        iVar5 = *(int *)(param_1 + 0x54);
        uVar1 = uVar4 * 0x343fd + 0x269ec3;
        DAT_0202f608 = uVar1 & 0x7fffffff;
        iVar3 = sub_080FE4D8(uVar1 * 2 >> 0x11,0x1e00);
        sub_080B27F0(iVar5 + iVar2 + -0xe00,*(int *)(param_1 + 0x58) + iVar3 + -0x1e00,0);
      }
      else {
        uVar1 = uVar4 * 0x343fd + 0x269ec3;
        uVar4 = uVar1 & 0x7fffffff;
        DAT_0202f608 = uVar4;
        iVar2 = sub_080FE4D8(uVar1 * 2 >> 0x11,0x1c00);
        iVar5 = *(int *)(param_1 + 0x54);
        uVar1 = uVar4 * 0x343fd + 0x269ec3;
        DAT_0202f608 = uVar1 & 0x7fffffff;
        iVar3 = sub_080FE4D8(uVar1 * 2 >> 0x11,0x1e00);
        sub_080B27F0(iVar5 + iVar2 + -0xe00,*(int *)(param_1 + 0x58) + iVar3 + -0x1e00,1);
      }
      iVar6 = iVar6 + -1;
    } while (-1 < iVar6);
    local_28 = *(undefined4 *)(param_1 + 0x54);
    local_24 = *(int *)(param_1 + 0x58) + -0x1000;
    sub_080B2484(1,&local_28);
    sub_0800471C(0x31);
  }
  else {
    local_28 = *(undefined4 *)(param_1 + 0x54);
    local_24 = *(int *)(param_1 + 0x58) + -0x1000;
    sub_080B2484(1,&local_28);
    sub_0800471C(0x2a);
  }
  sub_080B7C6C(param_1,&local_28,&DAT_0836c45a,3);
  sub_08024FE4(3,param_1 + 0x54);
  if (DAT_0203016c < 9999) {
    DAT_0203016c = DAT_0203016c + 1;
  }
  sub_080250C4(param_1,param_1 + 0x54);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0836c2ec + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

