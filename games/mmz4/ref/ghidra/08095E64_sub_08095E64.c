// sub_08095E64 at 0x08095E64 (thumb)

undefined4 sub_08095E64(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08002B10(0xbc);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  if ((1 < *(byte *)(iVar3 + 0xc)) || ((*(uint *)(param_1 + 0x8c) & 0x200) != 0)) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_08095FD8(param_1);
    return in_lr;
  }
  sub_0801CFF0(param_1);
  uVar2 = *(uint *)(param_1 + 0xb8) - 1;
  *(uint *)(param_1 + 0xb8) = uVar2;
  if (uVar2 == 0) {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    return in_lr;
  }
  if ((int)uVar2 < 0x1e) {
    if ((uVar2 & 2) == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xfe;
      goto LAB_08095efc;
    }
  }
  else {
    if (0x3b < (int)uVar2) {
      return in_lr;
    }
    if ((uVar2 & 1) == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xfe;
      goto LAB_08095efc;
    }
  }
  bVar1 = *(byte *)(param_1 + 10) | 1;
LAB_08095efc:
  *(byte *)(param_1 + 10) = bVar1;
  return in_lr;
}

