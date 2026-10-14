// sub_080ECDB0 at 0x080ECDB0 (thumb)

undefined4 sub_080ECDB0(int param_1)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  undefined4 in_lr;
  
  uVar7 = 0;
  piVar6 = &DAT_0838b660;
  do {
    iVar3 = (int)*(short *)(param_1 + 0x240);
    uVar4 = iVar3 + uVar7 * -0xc;
    if (iVar3 < 0x96) {
      sVar2 = sub_080FE390(iVar3,6);
      uVar1 = *(short *)((int)&DAT_080fe64c + ((uint)(sVar2 * 0xc000000) >> 0x17)) >> 4;
      DAT_02002402 = uVar1 & 0x1f | (0x10 - uVar1) * 0x100;
    }
    else {
      DAT_02002402 = 0x1010;
    }
    if (uVar4 == 0xc) {
      sub_0800471C(0x14f);
    }
    if (0xc < (int)uVar4) {
      uVar4 = 0xc;
    }
    if ((int)uVar7 < 0xc) {
      if (uVar4 < 6) {
        sub_080ED08C((uVar7 | 0xffff9500) & 0xffff,
                     (&DAT_0838b6c8)[uVar7] +
                     ((0x7800 - (&DAT_0838b6c8)[uVar7]) *
                      (0x100 - *(short *)((int)&DAT_080fe64c + (uVar4 * 0xa000000 >> 0x17))) >> 8),
                     piVar6[1] + 0x3000,(6 - uVar4) * 0x2a + 0x100 & 0xffff,1);
      }
      else {
        if (uVar4 < 0xc) {
          iVar3 = (int)*(short *)((int)&DAT_080fe64c + ((uVar4 - 6) * 0xa000000 >> 0x17));
          iVar5 = 0x100 - iVar3;
          iVar3 = (iVar3 * *piVar6 >> 8) + (iVar5 * (&DAT_0838b6c8)[uVar7] >> 8);
          iVar5 = piVar6[1] + iVar5 * 0x30;
        }
        else {
          if ((int)uVar4 < 0) goto LAB_080ecf6a;
          iVar3 = *piVar6;
          iVar5 = piVar6[1];
        }
        sub_080ED08C((uVar7 | 0xffff9500) & 0xffff,iVar3,iVar5,0x100,0);
      }
    }
    else if (uVar4 < 0xc) {
      sub_080ED08C(0x9600,*piVar6 + (0x100 - *(short *)((int)&DAT_080fe64c +
                                                       (uVar4 * 0x5000000 >> 0x17))) * 0x78,
                   piVar6[1],0x100,(int)uVar4 < 6);
    }
    else if (-1 < (int)uVar4) {
      sub_080ED08C(0x9600,*piVar6,piVar6[1],0x100,0);
    }
LAB_080ecf6a:
    piVar6 = piVar6 + 2;
    uVar7 = uVar7 + 1;
    if (0xc < (int)uVar7) {
      *(short *)(param_1 + 0x240) = *(short *)(param_1 + 0x240) + 1;
      return in_lr;
    }
  } while( true );
}

