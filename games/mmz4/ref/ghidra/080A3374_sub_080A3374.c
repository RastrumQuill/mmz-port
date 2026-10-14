// sub_080A3374 at 0x080A3374 (thumb)

undefined4 sub_080A3374(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  iVar4 = *(int *)(param_1 + 0x2c);
  if (*(char *)(param_1 + 0xd) == '\0') {
    if (*(char *)(iVar3 + 0xd4 + (uint)*(byte *)(param_1 + 0x11)) == '\0') {
      iVar1 = 0x8709;
    }
    else {
      iVar1 = 0x870d;
    }
    uVar2 = (uint)*(byte *)(param_1 + 0x11) + iVar1 & 0xffff;
    if (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) != uVar2) {
      sub_0801CF00(param_1,uVar2);
    }
    if (1 < *(byte *)(iVar4 + 0xc)) {
      sub_0801CF00(param_1,*(byte *)(param_1 + 0x11) + 0x8711);
      *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 0x10;
      *(undefined *)(param_1 + 0x1d) = *(undefined *)(iVar3 + 0x1c);
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
  }
  else if ((*(char *)(param_1 + 0xd) == '\x01') && ((*(byte *)(iVar3 + 10) & 1) == 0)) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_080A2FD8(param_1);
  }
  sub_0801CFF0(param_1);
  return in_lr;
}

