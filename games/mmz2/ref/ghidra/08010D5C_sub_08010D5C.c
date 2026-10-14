// sub_08010D5C at 0x08010D5C (thumb)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 sub_08010D5C(int param_1)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined4 in_lr;
  
  uVar2 = *(uint *)(param_1 + 0x5c);
  if (DAT_0202e030 == 0) {
    sub_08008814(param_1);
  }
  else {
    if (DAT_0202e02c._2_2_ != 0) {
      DAT_0202e02c._2_2_ = 0;
      sub_080027AC(&DAT_087dcf9c,0x4000);
      sub_08002AEC(&DAT_087dcfa8,0);
    }
    if (DAT_0202d002 != 0) {
      DAT_0202e02c._2_2_ = 1;
    }
    if (_DAT_0202e020 != 0) {
      DAT_0202e024 = *(int *)(_DAT_0202e020 + 0x54);
      DAT_0202e028 = *(int *)(_DAT_0202e020 + 0x58);
      if ((*(uint *)(&DAT_0202e160 + (uint)(*(byte *)(_DAT_0202e020 + 0x1d) >> 5) * 4) &
          1 << (*(byte *)(_DAT_0202e020 + 0x1d) & 0x1f)) != 0) {
        DAT_03002ec4 = 0x40;
        DAT_03002ec6 = 0x20;
      }
    }
    uVar7 = (uVar2 & 0xffff) >> 4;
    uVar2 = (*(int *)(param_1 + 0x34) - (DAT_0202e024 >> 8)) + 0x100;
    *(short *)(&DAT_02000f9c + uVar7) = (short)uVar2;
    uVar5 = (*(int *)(param_1 + 0x38) - (DAT_0202e028 >> 8)) + 0x40;
    *(short *)((int)&DAT_02000f9c + uVar7 * 4 + 2) = (short)uVar5;
    uVar5 = uVar5 & 0xffff;
    uVar7 = (uint)(ushort)DAT_0202e02c;
    if (uVar7 != 0) {
      iVar3 = sub_080008C8(0x500);
      if (iVar3 != 0) {
        DAT_03001708 = &DAT_04000018;
        DAT_0300170c = 0xa6600002;
        uVar4 = 0;
        uVar10 = uVar5 << 0x10;
        DAT_03001704 = iVar3;
        do {
          iVar8 = (int)(uVar4 << 0x10) >> 0x10;
          sVar1 = sub_080EF150((int)(short)(&DAT_080ef450)
                                           [(int)(short)((int)(uVar7 * 0x10000) >> 0x12) *
                                            (((int)(uVar4 << 0x10) >> 0x11) + uVar5 + -0x40) & 0xff]
                               ,(int)((0x41 - uVar7) * 0x10000) >> 0x10);
          puVar6 = (uint *)(iVar8 * 4 + iVar3);
          uVar4 = (uVar2 & 0xffff) + (int)sVar1;
          *puVar6 = uVar4 & 0xffff | uVar10;
          puVar6[1] = uVar4 - 1 & 0xffff | uVar10;
          uVar9 = iVar8 + 2;
          uVar4 = uVar9 & 0xffff;
        } while ((int)(uVar9 * 0x10000) >> 0x10 < 0x140);
      }
    }
  }
  return in_lr;
}

