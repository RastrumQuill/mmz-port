// sub_080D27C8 at 0x080D27C8 (thumb)

undefined4 sub_080D27C8(int param_1)

{
  undefined uVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x28);
  if ((*(uint *)(param_1 + 0x8c) & 0x200) != 0) goto LAB_080d27fa;
  if (*(char *)(iVar2 + 0xd) == '\x15') {
    if (*(char *)(param_1 + 0x11) == '\0') {
      if (*(int *)(param_1 + 0x54) <= *(int *)(iVar2 + 0x54)) goto LAB_080d2818;
    }
    else if (*(int *)(iVar2 + 0x54) <= *(int *)(param_1 + 0x54)) goto LAB_080d2818;
LAB_080d27fa:
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0834863c + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_080D2848(param_1);
  }
  else {
LAB_080d2818:
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

