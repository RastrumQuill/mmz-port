// sub_080CEB44 at 0x080CEB44 (thumb)

undefined4 sub_080CEB44(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  sub_08012580();
  if (*(char *)(param_1 + 0x11) == '\0') {
    uVar2 = sub_08009774(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x54) = uVar2;
    iVar3 = *(int *)(param_1 + 0x58);
    *(int *)(param_1 + 0x58) = iVar3 + 0x800;
    bVar1 = *(byte *)(param_1 + 0x10);
    if ((bVar1 & 2) == 0) {
      iVar3 = sub_08006B84(DAT_0202f088);
      if (iVar3 == 0) {
        return in_lr;
      }
      *(undefined *)(iVar3 + 0x25) = 0x1e;
      *(undefined *)(iVar3 + 9) = 0x16;
      *(undefined4 *)(iVar3 + 0x14) = 0x80ceb45;
      *(ushort *)(iVar3 + 0x20) = bVar1 & 2;
      *(undefined *)(iVar3 + 0x22) = 0;
      *(byte *)(iVar3 + 0xb) = *(byte *)(iVar3 + 0xb) | 0x10;
      *(undefined *)(iVar3 + 0x1d) = *(undefined *)(iVar3 + 0x1c);
      *(undefined *)(iVar3 + 0x11) = 1;
      *(int *)(iVar3 + 0x28) = param_1;
      *(int *)(iVar3 + 0x54) = *(int *)(param_1 + 0x54) + -0x100;
      *(undefined4 *)(iVar3 + 0x58) = *(undefined4 *)(param_1 + 0x58);
    }
    else {
      *(int *)(param_1 + 0x58) = iVar3 + 0x900;
    }
  }
  else {
    sub_080127E4(param_1,0x8300);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x20;
    *(undefined *)(param_1 + 0x4d) = 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xdf | 0x20;
  }
  *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | 4;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0834863c + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined *)(param_1 + 0xe) = 0;
  sub_080CEC44(param_1);
  return in_lr;
}

