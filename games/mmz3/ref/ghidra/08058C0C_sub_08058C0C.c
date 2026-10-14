// sub_08058C0C at 0x08058C0C (thumb)

undefined4 sub_08058C0C(int param_1)

{
  byte bVar1;
  short sVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 == 1) {
LAB_08058c5c:
    iVar4 = *(int *)(param_1 + 0x28);
    if (iVar4 != 0) {
      iVar8 = *(int *)(param_1 + 0x54);
      *(int *)(iVar4 + 0x54) = iVar8;
      iVar8 = iVar8 + *(short *)(&DAT_083612b8 + (uint)*(byte *)(param_1 + 0x12) * 2);
      *(int *)(iVar4 + 0x54) = iVar8;
      if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
        iVar8 = iVar8 + *(short *)(&DAT_083612b8 + (uint)*(byte *)(param_1 + 0x12) * 2) * -2;
      }
      *(int *)(iVar4 + 0x54) = iVar8;
      *(int *)(iVar4 + 0x58) = *(int *)(param_1 + 0x58) + -0x2d00;
    }
    *(undefined *)(param_1 + 0x13) = 0;
    sub_08017700(param_1,*(undefined2 *)(&DAT_083612a0 + (uint)*(byte *)(param_1 + 0x12) * 2));
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) goto LAB_08058d6e;
      if (*(int *)(param_1 + 0x2c) != 0) {
        uVar5 = 0x280;
        if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
          uVar5 = 0xfffffd80;
        }
        sub_080820F0(*(int *)(param_1 + 0x2c),uVar5,0);
      }
      *(undefined4 *)(param_1 + 100) = 0x20;
      *(undefined4 *)(param_1 + 0x68) = 0;
      *(undefined *)(param_1 + 0x12) = 0;
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      goto LAB_08058c5c;
    }
    if (bVar1 != 2) goto LAB_08058d6e;
  }
  uVar5 = *(undefined4 *)(param_1 + 0x28);
  uVar6 = (uint)*(byte *)(param_1 + 0x12);
  bVar1 = (&DAT_083612c8)[uVar6];
  iVar4 = FUN_080fe2f8((uint)*(byte *)(param_1 + 0x13) *
                       ((uint)(byte)(&DAT_083612c8)[uVar6 + 1 + ((int)(uVar6 + 1) >> 3) * -8] -
                       (uint)bVar1),(&DAT_083612b0)[uVar6]);
  uVar6 = (uint)bVar1 + iVar4;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    sub_08082550(uVar5,uVar6 & 0xff);
  }
  else {
    sub_08082550(uVar5,-uVar6 - 0x80 & 0xff);
  }
  sub_0808225C(*(undefined4 *)(param_1 + 0x2c),0);
  cVar3 = *(char *)(param_1 + 0x13) + '\x01';
  *(char *)(param_1 + 0x13) = cVar3;
  if (cVar3 == (&DAT_083612b0)[*(byte *)(param_1 + 0x12)]) {
    *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) + 1;
    *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) & 7;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  if (((*(int *)(param_1 + 0x68) == 3) && (*(char *)(param_1 + 0x12) == '\x04')) &&
     (*(char *)(param_1 + 0xe) == '\x01')) {
    *(undefined *)(param_1 + 0xd) = 0xe;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_080177F4(param_1);
LAB_08058d6e:
  iVar4 = *(int *)(param_1 + 100) + -1;
  *(int *)(param_1 + 100) = iVar4;
  if ((iVar4 == 0) && (*(int *)(param_1 + 0x68) < 3)) {
    sub_0800471C(0x2d);
    *(undefined4 *)(param_1 + 100) = 0x20;
    iVar8 = *(int *)(param_1 + 0x68) * 4;
    iVar4 = (int)*(short *)(&DAT_083612d0 + iVar8);
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      iVar4 = -iVar4;
    }
    sVar2 = *(short *)(&DAT_083612d2 + iVar8);
    iVar7 = *(int *)(param_1 + 0x54) + (int)*(short *)(&DAT_083612dc + iVar8);
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      iVar7 = iVar7 + *(short *)(&DAT_083612dc + iVar8) * -2;
    }
    sub_080AA068(iVar7,*(int *)(param_1 + 0x58) + (int)*(short *)(&DAT_083612de + iVar8),iVar4,
                 (int)sVar2);
    iVar4 = iVar4 * 0x1a0;
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0xff;
    }
    iVar8 = sVar2 * 0x160;
    if (iVar8 < 0) {
      iVar8 = iVar8 + 0xff;
    }
    iVar9 = *(int *)(param_1 + 0x68) * 4;
    iVar7 = *(int *)(param_1 + 0x54) + (int)*(short *)(&DAT_083612dc + iVar9);
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      iVar7 = iVar7 + *(short *)(&DAT_083612dc + iVar9) * -2;
    }
    sub_080AA068(iVar7,*(int *)(param_1 + 0x58) + (int)*(short *)(&DAT_083612de + iVar9),iVar4 >> 8,
                 iVar8 >> 8);
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
  }
  return in_lr;
}

