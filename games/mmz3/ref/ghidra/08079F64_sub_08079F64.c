// sub_08079F64 at 0x08079F64 (thumb)

undefined8 sub_08079F64(int param_1)

{
  undefined uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  int iVar6;
  undefined4 in_lr;
  
  if ((*(int *)(param_1 + 0xbc) == 0) && ((*(uint *)(param_1 + 0x8c) & 1) != 0)) {
    if ((*(byte *)(param_1 + 0x97) & 0xf0) == 0x20) {
      iVar6 = *(int *)(param_1 + 0x58);
      iVar3 = *(int *)(param_1 + 0x54);
      sub_080B27F0(iVar3,iVar6,1);
      uVar2 = DAT_0202f608 * 0x343fd + 0x269ec3;
      iVar3 = ((uVar2 * 2 >> 0x11 & 0xf) - 8) * 0x100 + iVar3;
      uVar2 = (uVar2 & 0x7fffffff) * 0x343fd + 0x269ec3;
      DAT_0202f608 = uVar2 & 0x7fffffff;
      iVar6 = ((uVar2 * 2 >> 0x11 & 0xf) - 8) * 0x100 + iVar6;
      sub_080B27F0(iVar3,iVar6,1);
      uVar2 = DAT_0202f608 * 0x343fd + 0x269ec3;
      iVar3 = ((uVar2 * 2 >> 0x11 & 0xf) - 8) * 0x100 + iVar3;
      uVar2 = (uVar2 & 0x7fffffff) * 0x343fd + 0x269ec3;
      DAT_0202f608 = uVar2 & 0x7fffffff;
      iVar6 = ((uVar2 * 2 >> 0x11 & 0xf) - 8) * 0x100 + iVar6;
      sub_080B27F0(iVar3,iVar6,1);
      uVar2 = DAT_0202f608 * 0x343fd + 0x269ec3;
      iVar3 = ((uVar2 * 2 >> 0x11 & 0xf) - 8) * 0x100 + iVar3;
      uVar2 = (uVar2 & 0x7fffffff) * 0x343fd + 0x269ec3;
      DAT_0202f608 = uVar2 & 0x7fffffff;
      iVar6 = ((uVar2 * 2 >> 0x11 & 0xf) - 8) * 0x100 + iVar6;
      sub_080B27F0(iVar3,iVar6,0);
      uVar2 = DAT_0202f608 * 0x343fd + 0x269ec3;
      uVar4 = (uVar2 & 0x7fffffff) * 0x343fd + 0x269ec3;
      DAT_0202f608 = uVar4 & 0x7fffffff;
      sub_080B27F0(((uVar2 * 2 >> 0x11 & 0xf) - 8) * 0x100 + iVar3,
                   ((uVar4 * 2 >> 0x11 & 0xf) - 8) * 0x100 + iVar6,0);
    }
    else {
      iVar3 = sub_080253D8(0,param_1,&DAT_08363df4);
      *(int *)(param_1 + 0xbc) = iVar3;
      if (iVar3 != 0) {
        bVar5 = *(byte *)(param_1 + 0x97) & 0xf0;
        if (bVar5 == 0x10) {
          uVar1 = 2;
        }
        else {
          if (bVar5 != 0x30) goto LAB_0807a0f6;
          uVar1 = 4;
        }
        *(undefined *)(param_1 + 0xd) = uVar1;
        *(undefined *)(param_1 + 0xe) = 0;
      }
    }
  }
LAB_0807a0f6:
  return CONCAT44(in_lr,1);
}

