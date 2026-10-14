// sub_08096EA0 at 0x08096EA0 (thumb)

undefined4 sub_08096EA0(int param_1)

{
  undefined uVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x28);
  if ((*(uint *)(param_1 + 0x8c) & 0x200) != 0) goto LAB_08096ed2;
  if (*(char *)(iVar2 + 0xd) == '\x15') {
    if (*(char *)(param_1 + 0x11) == '\0') {
      if (*(int *)(param_1 + 0x54) <= *(int *)(iVar2 + 0x54)) goto LAB_08096ef0;
    }
    else if (*(int *)(iVar2 + 0x54) <= *(int *)(param_1 + 0x54)) goto LAB_08096ef0;
LAB_08096ed2:
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_08096F28(param_1);
  }
  else {
LAB_08096ef0:
    sub_080128D4(param_1);
    if (*(char *)(param_1 + 0xd) == '\0') {
      if ((*(uint *)(param_1 + 0x8c) & 1) == 0) {
        return in_lr;
      }
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    }
    *(undefined *)(param_1 + 0xd) = uVar1;
  }
  return in_lr;
}

