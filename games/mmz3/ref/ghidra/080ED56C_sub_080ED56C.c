// sub_080ED56C at 0x080ED56C (thumb)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 sub_080ED56C(int param_1)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  uint uVar4;
  ushort uVar5;
  int iVar6;
  char *pcVar7;
  uint uVar8;
  uint uVar9;
  undefined4 in_lr;
  char cVar10;
  
  uVar9 = 0;
  uVar8 = 0;
  bVar1 = *(byte *)(param_1 + 6);
  if (bVar1 == 1) {
LAB_080ed682:
    pcVar7 = (char *)(param_1 + 0x240);
    cVar10 = *pcVar7;
    if ((DAT_02002136 & 0x80) != 0) {
      *pcVar7 = cVar10 + '\x01';
    }
    if ((DAT_02002136 & 0x40) != 0) {
      *pcVar7 = *pcVar7 + -1 + *(char *)(param_1 + 0x241);
    }
    cVar2 = sub_080FE4D8(*pcVar7,*(undefined *)(param_1 + 0x241));
    *pcVar7 = cVar2;
    if (cVar10 != cVar2) {
      sub_0800471C(1);
    }
    if (*(short *)(param_1 + 8) < 0x10) {
      uVar5 = *(short *)(param_1 + 8) + 1;
      *(ushort *)(param_1 + 8) = uVar5;
      DAT_02002402 = uVar5 & 0x1f | (0x10 - uVar5) * 0x100;
    }
    if (0x1f < *(short *)(param_1 + 10)) {
      if ((DAT_02002134 & 9) == 0) {
        if ((DAT_02002134 & 2) != 0) {
          sub_0800471C(3);
          sub_08004230(0x40);
          *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
        }
      }
      else {
        sub_0800471C(2);
        *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x02';
      }
      goto LAB_080ed7d4;
    }
    sVar3 = *(short *)(param_1 + 10) + 1;
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) goto LAB_080ed7d4;
      DAT_020023c0 = DAT_020023c0 & 0xf0f8 | 0x3900;
      DAT_020023ca = 0x606;
      _DAT_020023d8 = 0;
      sub_0800393C(&DAT_08547438,(DAT_020023c8 & 0xc) << 0xc);
      sub_08003E14(&DAT_08547444,0);
      sub_08004340(0x38,&DAT_085222a0,6,0,0);
      sub_080040A8(0x40,0);
      DAT_02002400 = 0x3e41;
      DAT_02002402 = 0x10;
      sub_080E9250();
      sub_080E9360();
      cVar10 = DAT_0200244a == '>';
      if (DAT_0200244b == 'D') {
        cVar10 = cVar10 + '\x01';
      }
      if (DAT_0200244c == 'J') {
        cVar10 = cVar10 + '\x01';
      }
      if (DAT_0200244d == 'P') {
        cVar10 = cVar10 + '\x01';
      }
      if (DAT_0200244e == 'V') {
        cVar10 = cVar10 + '\x01';
      }
      if (DAT_0200244f == '\\') {
        cVar10 = cVar10 + '\x01';
      }
      if (DAT_02002450 == 'a') {
        cVar10 = cVar10 + '\x01';
      }
      *(char *)(param_1 + 0x241) = cVar10;
      *(undefined2 *)(param_1 + 8) = 0x10;
      *(undefined2 *)(param_1 + 10) = 0;
      *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
      goto LAB_080ed682;
    }
    if (bVar1 != 2) {
      if (bVar1 == 3) {
        if (*(short *)(param_1 + 8) == 0) {
          *(undefined *)(param_1 + 6) = 0;
          *(undefined *)(param_1 + 5) = 2;
        }
        else {
          uVar5 = *(short *)(param_1 + 8) - 1;
          *(ushort *)(param_1 + 8) = uVar5;
          DAT_02002402 = uVar5 & 0x1f | (0x10 - uVar5) * 0x100;
        }
      }
      goto LAB_080ed7d4;
    }
    if (*(short *)(param_1 + 10) == 0) {
      sub_08004230(0x40);
      sub_080EB400(param_1,4);
      goto LAB_080ed7d4;
    }
    sVar3 = *(short *)(param_1 + 10) + -1;
  }
  *(short *)(param_1 + 10) = sVar3;
  DAT_03002ec0 = (undefined)sVar3;
  DAT_03002ec1 = DAT_03002ec0;
  DAT_03002ec2 = DAT_03002ec0;
LAB_080ed7d4:
  sub_080041E4(0x40);
  iVar6 = 0;
  if (*(char *)(param_1 + 0x241) != '\0') {
    uVar4 = 0;
    do {
      if ((&DAT_02002358)[(byte)(&DAT_0838b780)[(int)uVar4 >> 0x10]] ==
          *(char *)((int)&DAT_080fe64c +
                   (((byte)(&DAT_0838b780)[(int)uVar4 >> 0x10] + 0x18) * 0x1000000 >> 0x17))) {
        if ((uint)*(byte *)(param_1 + 0x240) == iVar6 >> 0x10) {
          *(char *)(param_1 + 0x242) = (char)uVar8;
        }
        if ((uint)*(byte *)(param_1 + 0x240) == iVar6 >> 0x10) {
          iVar6 = (uint)(ushort)(&DAT_0838b788)[(int)uVar4 >> 0x10] << 1;
        }
        else {
          iVar6 = ((ushort)(&DAT_0838b788)[(int)uVar4 >> 0x10] + 1) * 2;
        }
        sub_080E9604(&DAT_0836f268 + *(ushort *)((int)&DAT_0836e9d8 + iVar6),6,
                     ((short)uVar9 * 2 + 10) - (uint)*(byte *)(param_1 + 0x241));
        uVar9 = (int)(short)uVar9 + 1U & 0xffff;
      }
      uVar4 = uVar4 + 0x10000;
      uVar8 = uVar4 >> 0x10;
      iVar6 = uVar9 << 0x10;
    } while ((iVar6 >> 0x10 < (int)(uint)*(byte *)(param_1 + 0x241)) && ((int)uVar4 >> 0x10 < 7));
  }
  return in_lr;
}

