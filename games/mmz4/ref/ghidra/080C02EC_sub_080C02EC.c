// sub_080C02EC at 0x080C02EC (thumb)

undefined4 sub_080C02EC(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  bVar1 = *(byte *)(iVar3 + 10) >> 4;
  uVar4 = bVar1 & 1;
  if (*(byte *)(iVar3 + 0xc) < 2) {
    if (*(char *)(param_1 + 0xd) != *(char *)(iVar3 + 0xd)) {
      *(char *)(param_1 + 0xd) = *(char *)(iVar3 + 0xd);
      *(undefined *)(param_1 + 0xe) = 0;
      *(undefined *)(param_1 + 0xf) = 0;
    }
    if (*(char *)(param_1 + 0x11) == '\0') {
      if ((*(byte *)(iVar3 + 10) & 0x10) == 0) {
        iVar2 = -0x1600;
      }
      else {
        iVar2 = 0x1600;
      }
      *(int *)(param_1 + 0x54) = *(int *)(iVar3 + 0x54) + iVar2;
      iVar3 = *(int *)(iVar3 + 0x58);
      iVar2 = -0x3200;
    }
    else {
      *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar3 + 0x54);
      iVar3 = *(int *)(iVar3 + 0x58);
      iVar2 = -0x2800;
    }
    *(int *)(param_1 + 0x58) = iVar3 + iVar2;
    if ((bVar1 & 1) == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(char *)(param_1 + 0x4c) = (char)uVar4;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar4 << 4);
    sub_08128884(param_1,*(undefined4 *)(&DAT_08861b98 + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 8);
    sub_080C0890(param_1);
  }
  return in_lr;
}

