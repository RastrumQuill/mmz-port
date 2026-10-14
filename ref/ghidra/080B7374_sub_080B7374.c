// sub_080B7374 at 0x080B7374 (thumb)

undefined4 sub_080B7374(int param_1)

{
  undefined uVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (DAT_02022878 == '\0') {
    iVar2 = *(int *)(param_1 + 0x20);
    if (*(char *)(param_1 + 0xc) == '\x01') {
      sub_080C8A98(param_1,*(undefined4 *)(&DAT_082b8360 + (uint)*(byte *)(param_1 + 0xd) * 4));
    }
    if (*(byte *)(param_1 + 0xc) < 2) {
      uVar1 = sub_08099BF8(param_1,*(undefined *)(param_1 + 0x13),2);
      *(undefined *)(param_1 + 0x13) = uVar1;
      *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xbc) - *(int *)(iVar2 + 0x4c);
      *(int *)(param_1 + 200) = *(int *)(param_1 + 0xc0) - *(int *)(iVar2 + 0x50);
    }
    sub_080B50EC(param_1);
  }
  return in_lr;
}

