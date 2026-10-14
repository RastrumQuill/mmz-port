// sub_0809FEC0 at 0x0809FEC0 (thumb)

undefined4 sub_0809FEC0(int param_1)

{
  byte bVar1;
  undefined uVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  
  uVar4 = *(byte *)(param_1 + 10) >> 4 & 1;
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(undefined *)(param_1 + 0x25) = 0x18;
    sub_08005784(param_1 + 0x74,&DAT_0885e418);
    iVar3 = sub_080A08BC(param_1);
    if (iVar3 != 0) {
      uVar4 = uVar4 + 1 & 1;
      if (uVar4 == 0) {
        bVar1 = *(byte *)(param_1 + 10) & 0xef;
      }
      else {
        bVar1 = *(byte *)(param_1 + 10) | 0x10;
      }
      *(byte *)(param_1 + 10) = bVar1;
      *(char *)(param_1 + 0x4c) = (char)uVar4;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar4 << 4);
    }
    sub_0801CF00(param_1,0x8202);
    *(uint *)(param_1 + 0x5c) = (uVar4 * 2 + -1) * 0x1c0;
    *(undefined4 *)(param_1 + 0x60) = 0xfffffc00;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  iVar3 = sub_080A0784(param_1,*(undefined4 *)(param_1 + 0x60));
  sub_080A06A0(param_1,*(undefined4 *)(param_1 + 0x5c));
  if (iVar3 == 0) {
    iVar3 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar3;
    if (0x700 < iVar3) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
  }
  else if (*(int *)(param_1 + 0x60) < 0) {
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  else {
    if (*(int *)(param_1 + 0xb4) == 0) {
      uVar2 = 5;
    }
    else {
      uVar2 = 3;
    }
    *(undefined *)(param_1 + 0xd) = uVar2;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

