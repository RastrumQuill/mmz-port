// sub_080FB244 at 0x080FB244 (thumb)

undefined4 sub_080FB244(int param_1)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = param_1 + 0xdcc;
  sVar1 = *(short *)(param_1 + 0xde2) + -1;
  *(short *)(param_1 + 0xde2) = sVar1;
  if (sVar1 == 0) {
    *(undefined2 *)(param_1 + 0xde2) = *(undefined2 *)(param_1 + 0xde0);
    if (*(byte *)(param_1 + 0xdfe) < 9) {
      uVar2 = DAT_0202f608 * 0x343fd + 0x269ec3;
      uVar4 = uVar2 & 0x7fffffff;
      DAT_0202f608 = uVar4;
      iVar3 = sub_080FE4D8(uVar2 * 2 >> 0x11,0x5000);
      uVar4 = uVar4 * 0x343fd + 0x269ec3;
      uVar2 = (uVar4 & 0x7fffffff) * 0x343fd + 0x269ec3;
      DAT_0202f608 = uVar2 & 0x7fffffff;
      sub_08099A38(iVar5,iVar3 + 0x3f000,uVar4 * 2 >> 0x11 & 1,
                   (&DAT_0838c2c4)[uVar2 * 2 >> 0x11 & 0xf]);
    }
    else {
      *(byte *)(param_1 + 0xdfe) = 0;
      uVar2 = DAT_0202f608 * 0x343fd + 0x269ec3;
      uVar4 = uVar2 & 0x7fffffff;
      DAT_0202f608 = uVar4;
      iVar3 = sub_080FE4D8(uVar2 * 2 >> 0x11,0x2800);
      uVar2 = uVar4 * 0x343fd + 0x269ec3;
      DAT_0202f608 = uVar2 & 0x7fffffff;
      sub_08099A38(iVar5,iVar3 + 0x42400,uVar2 * 2 >> 0x11 & 1,1);
    }
  }
  sVar1 = *(short *)(param_1 + 0xde6) + -1;
  *(short *)(param_1 + 0xde6) = sVar1;
  if (sVar1 == 0) {
    *(undefined2 *)(param_1 + 0xde6) = *(undefined2 *)(param_1 + 0xde4);
    if (*(byte *)(param_1 + 0xdfe) < 9) {
      uVar2 = DAT_0202f608 * 0x343fd + 0x269ec3;
      uVar4 = uVar2 & 0x7fffffff;
      DAT_0202f608 = uVar4;
      iVar3 = sub_080FE4D8(uVar2 * 2 >> 0x11,0x5000);
      uVar2 = uVar4 * 0x343fd + 0x269ec3;
      DAT_0202f608 = uVar2 & 0x7fffffff;
      sub_08099A38(iVar5,iVar3 + 0x3f000,uVar2 * 2 >> 0x11 & 1,0);
    }
    else {
      *(byte *)(param_1 + 0xdfe) = 0;
      uVar2 = DAT_0202f608 * 0x343fd + 0x269ec3;
      uVar4 = uVar2 & 0x7fffffff;
      DAT_0202f608 = uVar4;
      iVar3 = sub_080FE4D8(uVar2 * 2 >> 0x11,0x2800);
      uVar2 = uVar4 * 0x343fd + 0x269ec3;
      DAT_0202f608 = uVar2 & 0x7fffffff;
      sub_08099A38(iVar5,iVar3 + 0x42400,uVar2 * 2 >> 0x11 & 1,1);
    }
  }
  return in_lr;
}

