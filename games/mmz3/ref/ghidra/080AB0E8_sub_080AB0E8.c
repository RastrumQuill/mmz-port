// sub_080AB0E8 at 0x080AB0E8 (thumb)

undefined4 sub_080AB0E8(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  int local_14;
  int local_10;
  
  iVar4 = *(int *)(param_1 + 0x28);
  *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + (char)*(undefined4 *)(param_1 + 0x5c);
  if ((*(byte *)(param_1 + 0x12) & 7) == 0) {
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      local_14 = *(int *)(param_1 + 0x54);
      iVar2 = -0x1000;
    }
    else {
      local_14 = *(int *)(param_1 + 0x54);
      iVar2 = 0x1000;
    }
    local_14 = local_14 + iVar2;
    uVar3 = DAT_0202f608 * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar3 & 0x7fffffff;
    local_10 = *(int *)(param_1 + 0x58) + (uVar3 * 2 >> 0x11 & 0x3f) * -0x100 + 0x1f00;
    sub_080AA78C(&local_14,((uint)*(byte *)(param_1 + 10) << 0x18) >> 0x1c & 1,param_1);
  }
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (((cVar1 == -1) || (1 < *(byte *)(iVar4 + 0xc))) || (*(char *)(iVar4 + 0xd) == '\x13')) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 8);
    sub_080AA934(param_1);
  }
  return in_lr;
}

