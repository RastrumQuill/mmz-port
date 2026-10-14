// sub_080B616C at 0x080B616C (thumb)

undefined4 sub_080B616C(int param_1)

{
  undefined uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 in_lr;
  
  sub_08018FF8(*(undefined4 *)(param_1 + 0x20),param_1 + 0xc4,0);
  if (*(byte *)(param_1 + 0xc) < 2) {
    if (*(byte *)(param_1 + 0xc) == 1) {
      sub_080C8A98(param_1,*(undefined4 *)(&DAT_082b8234 + (uint)*(byte *)(param_1 + 0xd) * 4));
      uVar6 = (uint)*(byte *)(param_1 + 0x12);
      if (*(byte *)(param_1 + 0xd) < 5) {
        uVar6 = uVar6 + 1 + ((int)(uVar6 + 1) >> 4) * -0x10;
        *(char *)(param_1 + 0x12) = (char)uVar6;
      }
      iVar3 = *(int *)(param_1 + 0xbc) + (short)(&DAT_080c8e24)[uVar6 * 0x10] * 0x14;
      *(int *)(param_1 + 0x4c) = iVar3;
      *(int *)(param_1 + 0x4c) = iVar3 + *(int *)(param_1 + 0xc4);
      *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0xc0) + *(int *)(param_1 + 200);
      iVar4 = uVar6 * 0x10 + 0x40;
      iVar3 = iVar4;
      if (iVar4 < 0) {
        iVar3 = uVar6 * 0x10 + 0x13f;
      }
      iVar4 = iVar4 + (iVar3 >> 8) * -0x100;
      iVar5 = iVar4 + 0x100;
      iVar2 = iVar5;
      if (iVar5 < 0) {
        iVar2 = iVar4 + 0x1ff;
      }
      iVar3 = 2;
      if (0x7f < iVar5 + (iVar2 >> 8) * -0x100) {
        iVar3 = 3;
      }
      *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf3 | (byte)(iVar3 << 2);
    }
    else {
      iVar3 = 2;
    }
    if (*(byte *)(param_1 + 0xd) < 5) {
      uVar1 = sub_08099BF8(param_1,*(undefined *)(param_1 + 0x13),iVar3);
      *(undefined *)(param_1 + 0x13) = uVar1;
    }
    sub_080B50EC(param_1);
  }
  return in_lr;
}

