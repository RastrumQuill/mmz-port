// sub_08064DFC at 0x08064DFC (thumb)

undefined4 sub_08064DFC(int param_1)

{
  byte bVar1;
  undefined uVar2;
  short sVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\x01') {
    *(undefined *)(param_1 + 0xd) = 0xb;
    sub_08065198(param_1);
  }
  else {
    if (*(char *)(param_1 + 0xe) == '\0') {
      sub_08017700(param_1,0x1309);
      if (*(byte *)(param_1 + 0xbd) == 0) {
        uVar4 = 0xffffff80;
      }
      else {
        uVar4 = 0x80;
      }
      *(undefined4 *)(param_1 + 0x5c) = uVar4;
      uVar6 = (uint)*(byte *)(param_1 + 0xbd);
      if (uVar6 == 0) {
        bVar1 = *(byte *)(param_1 + 10) & 0xef;
      }
      else {
        bVar1 = *(byte *)(param_1 + 10) | 0x10;
      }
      *(byte *)(param_1 + 10) = bVar1;
      uVar6 = uVar6 & 1;
      *(char *)(param_1 + 0x4c) = (char)uVar6;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar6 << 4);
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    else {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    }
    sub_080177F4(param_1);
    sVar3 = sub_08009A3C(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x800);
    if (sVar3 == 0) {
      *(undefined *)(param_1 + 0xd) = 0;
      *(undefined *)(param_1 + 0xe) = 0;
    }
    else {
      iVar5 = sub_0800A104(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      *(int *)(param_1 + 0x58) = iVar5;
      iVar7 = *(int *)(param_1 + 0x54) +
              *(int *)(&DAT_08362454 + (uint)*(byte *)(param_1 + 0xbd) * 4);
      sVar3 = sub_08009A3C(iVar7,iVar5 + -0x800);
      if ((sVar3 == 0) && (sVar3 = sub_08009A3C(iVar7,iVar5 + 0xa00), sVar3 != 0)) {
        bVar1 = *(byte *)(param_1 + 10);
        if ((bVar1 & 0x10) == 0) {
          iVar5 = *(int *)(param_1 + 0x54);
          if (iVar5 < *(int *)(param_1 + 0xb4) + -0x2800) {
            *(undefined *)(param_1 + 0xd) = 9;
            *(byte *)(param_1 + 0xe) = bVar1 & 0x10;
            return in_lr;
          }
        }
        else {
          iVar5 = *(int *)(param_1 + 0x54);
          if (*(int *)(param_1 + 0xb4) + 0x2800 < iVar5) {
            *(undefined *)(param_1 + 0xd) = 9;
            *(undefined *)(param_1 + 0xe) = 0;
            return in_lr;
          }
        }
        if (*(short *)(DAT_020305f8 + 10) < 7) {
          return in_lr;
        }
        if ((uint)(*(int *)(DAT_0202f5c0 + 0x54) <= iVar5) == (((uint)bVar1 << 0x18) >> 0x1c & 1)) {
          return in_lr;
        }
        if (0xdc00 < (*(int *)(DAT_0202f5c0 + 0x54) - iVar5) + 0x6e00U) {
          return in_lr;
        }
        if (0xa000 < (*(int *)(DAT_0202f5c0 + 0x58) - *(int *)(param_1 + 0x58)) + 0x5000U) {
          return in_lr;
        }
        *(undefined *)(param_1 + 0xf) = *(undefined *)(param_1 + 0xd);
        uVar2 = 7;
      }
      else {
        uVar2 = 9;
      }
      *(undefined *)(param_1 + 0xd) = uVar2;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}

