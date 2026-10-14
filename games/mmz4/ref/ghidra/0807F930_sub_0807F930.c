// sub_0807F930 at 0x0807F930 (thumb)

undefined8 sub_0807F930(int *param_1,char param_2,char param_3,char param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 in_lr;
  
  iVar1 = DAT_0202ed90;
  iVar8 = 0;
  if (*(short *)(DAT_0202ed90 + 8) == *(short *)(DAT_0202ed90 + 10)) {
    iVar8 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(DAT_0202ed90 + 0xc);
    sub_080054C4(DAT_0202ed90);
    uVar7 = 0xffffffff;
    iVar3 = *(int *)(*(int *)(iVar1 + 0xc) + 4);
    *(int *)(iVar1 + 0xc) = iVar3;
    while (iVar3 != iVar1 + 0x14) {
      if (((((*(byte *)(iVar3 + 10) & 1) != 0) && (*(char *)(iVar3 + 9) == param_2)) &&
          (*(char *)(iVar3 + 0x10) == param_3)) &&
         ((*(char *)(iVar3 + 0x11) == param_4 &&
          (iVar6 = *(int *)(iVar3 + 0x54) - *param_1 >> 8,
          iVar4 = *(int *)(iVar3 + 0x58) - param_1[1] >> 8, uVar5 = iVar6 * iVar6 + iVar4 * iVar4,
          uVar5 < uVar7)))) {
        uVar7 = uVar5;
        iVar8 = iVar3;
      }
      iVar3 = *(int *)(*(int *)(iVar1 + 0xc) + 4);
      *(int *)(iVar1 + 0xc) = iVar3;
    }
    *(undefined4 *)(iVar1 + 0xc) = uVar2;
  }
  return CONCAT44(in_lr,iVar8);
}

