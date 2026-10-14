// sub_080D3594 at 0x080D3594 (thumb)

undefined4 sub_080D3594(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x28);
  if ((1 < *(byte *)(iVar5 + 0xc)) && (0xf < *(byte *)(param_1 + 0x12))) {
    *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) & 0xf;
  }
  uVar3 = *(byte *)(param_1 + 0x12) - 1;
  *(char *)(param_1 + 0x12) = (char)uVar3;
  uVar4 = (uint)*(byte *)(param_1 + 0x7c) << 0x18;
  if ((uVar4 >> 0x19 < (uVar3 & 0xff)) ||
     (((uVar4 >> 0x1a < (uVar3 & 0xff) && ((uVar3 & 1) == 0)) || ((uVar3 & 3) == 0)))) {
    bVar1 = *(byte *)(param_1 + 10) | 1;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) & 0xfe;
  }
  *(byte *)(param_1 + 10) = bVar1;
  if ((*(byte *)(iVar5 + 10) & 0x40) == 0) {
    if (((*(byte *)(iVar5 + 10) & 0x30) >> 4 & 1) == 0) {
      iVar2 = *(int *)(iVar5 + 0x54) + *(int *)(param_1 + 0x74);
    }
    else {
      iVar2 = *(int *)(iVar5 + 0x54) - *(int *)(param_1 + 0x74);
    }
    *(int *)(param_1 + 0x54) = iVar2;
    if (((*(byte *)(iVar5 + 10) & 0x30) >> 4 & 2) == 0) {
      iVar2 = *(int *)(iVar5 + 0x58) + *(int *)(param_1 + 0x78);
    }
    else {
      iVar2 = *(int *)(iVar5 + 0x58) - *(int *)(param_1 + 0x78);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar5 + 0x54);
    iVar2 = *(int *)(iVar5 + 0x58);
  }
  *(int *)(param_1 + 0x58) = iVar2;
  sub_0801CFF0(param_1);
  if ((*(char *)(param_1 + 0x12) == '\0') || (2 < *(byte *)(iVar5 + 0xc))) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

