// sub_080D85E0 at 0x080D85E0 (thumb)

undefined4 sub_080D85E0(int param_1)

{
  undefined uVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (DAT_0202e144 == '\0') {
    iVar2 = *(int *)(param_1 + 0x28);
    if (*(char *)(param_1 + 0xc) == '\x01') {
      sub_080EF118(param_1,*(undefined4 *)(&DAT_0834b54c + (uint)*(byte *)(param_1 + 0xd) * 4));
    }
    if (*(byte *)(param_1 + 0xc) < 2) {
      uVar1 = sub_080BED50(param_1,*(undefined *)(param_1 + 0x13),2);
      *(undefined *)(param_1 + 0x13) = uVar1;
      *(int *)(param_1 + 0xbc) = *(int *)(param_1 + 0xb4) - *(int *)(iVar2 + 0x54);
      *(int *)(param_1 + 0xc0) = *(int *)(param_1 + 0xb8) - *(int *)(iVar2 + 0x58);
    }
    sub_08012A14(param_1);
  }
  return in_lr;
}

