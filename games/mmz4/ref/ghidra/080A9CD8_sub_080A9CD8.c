// sub_080A9CD8 at 0x080A9CD8 (thumb)

undefined4 sub_080A9CD8(int param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined4 in_lr;
  
  if ((*(int *)(param_1 + 0xc0) == 0) && ((*(uint *)(param_1 + 0x8c) & 1) != 0)) {
    if ((*(byte *)(param_1 + 0x97) & 0xf0) == 0x20) {
      puVar2 = &DAT_0885f55c;
    }
    else {
      puVar2 = &DAT_0885f564;
    }
    iVar1 = sub_0802AD94(0,param_1,puVar2);
    *(int *)(param_1 + 0xc0) = iVar1;
    if (*(int *)(param_1 + 0xc0) != 0) {
      sub_08005784(param_1 + 0x74,&DAT_0885f498);
      sub_0801CF00(param_1,*(byte *)(param_1 + 0xbc) + 0x9a05);
      sub_080A9818(param_1);
      *(undefined4 *)(param_1 + 0x60) = 0;
    }
  }
  return in_lr;
}

