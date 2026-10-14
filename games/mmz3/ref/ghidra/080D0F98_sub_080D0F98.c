// sub_080D0F98 at 0x080D0F98 (thumb)

undefined4 sub_080D0F98(int param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  
  iVar7 = *(int *)(param_1 + 0x54);
  sVar1 = sub_080FE390(iVar7 >> 0xc,0xf);
  iVar6 = *(int *)(param_1 + 0x58);
  sVar2 = sub_080FE390(iVar6 >> 0xc,10);
  sVar3 = sub_08008FEC(iVar7,iVar6);
  if (sVar3 == 0) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0836c2ec + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
    return in_lr;
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe | 2;
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x58);
  DAT_0202fb84 = 0x2fc;
  DAT_0202f984 = 6;
  iVar6 = (int)sVar2;
  if (iVar6 == 1) {
    sub_0800393C(&DAT_085d8780,0x11f80);
    sub_08003E14(&DAT_085d878c,(DAT_0202f984 - 4) * 0x20 + 0x200);
  }
  if (iVar6 != 0) {
    sub_08017528(param_1);
    *(undefined *)(param_1 + 0x11) = 1;
    *(undefined4 *)(param_1 + 0x60) = 0xffffff00;
    *(byte *)(param_1 + 0x12) = ((byte)sVar2 & 3) - 1;
    if (iVar6 < 3) {
      sub_08017700(param_1,0xba06);
      *(undefined *)(param_1 + 0x11) = 2;
      iVar6 = sub_080FE390(iVar6 * 0x11,3);
      *(int *)(param_1 + 0x5c) = (-4 - iVar6) * 0x100;
    }
    else {
      iVar7 = sub_080FE390(iVar6 * 0x11,3);
      *(int *)(param_1 + 0x5c) = (-3 - iVar7) * 0x100;
      if (iVar6 < 8) {
        sub_08017700(param_1,0xba07);
      }
      else {
        sub_08017700(param_1,0xba08);
      }
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 0x800;
    iVar6 = *(int *)(param_1 + 0x58) + -0x800;
    goto LAB_080d11bc;
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_0800736C(param_1 + 0x74,&DAT_0836d280,param_1 + 0x54,0);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  sub_0801749C(param_1);
  *(undefined *)(param_1 + 0x11) = 0;
  iVar7 = (int)sVar1;
  *(int *)(param_1 + 0x60) = (iVar7 + -0xf) * 0x40;
  iVar6 = sub_080FE390(iVar7 * 0x11,7);
  *(int *)(param_1 + 0x5c) = (3 - iVar6) * 0x80;
  uVar4 = DAT_0202f608 * 0x343fd + 0x269ec3;
  DAT_0202f608 = uVar4 & 0x7fffffff;
  *(byte *)(param_1 + 0x12) = (byte)(uVar4 * 2 >> 0x11) & 0x7f;
  if (iVar7 < 0xe) {
    if (0xb < iVar7) {
      uVar5 = 0xba01;
      goto LAB_080d110e;
    }
    sub_08017700(param_1,0xba00);
  }
  else {
    uVar5 = 0xba02;
LAB_080d110e:
    sub_08017700(param_1,uVar5);
  }
  iVar6 = *(int *)(param_1 + 0x58) + -0xf00;
LAB_080d11bc:
  *(int *)(param_1 + 0x58) = iVar6;
  *(byte *)(param_1 + 0x25) = '\n' - (byte)sVar2;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0836c2ec + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_080D03B8(param_1);
  return in_lr;
}

