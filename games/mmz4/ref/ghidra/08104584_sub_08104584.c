// sub_08104584 at 0x08104584 (thumb)

undefined4 sub_08104584(int param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x28);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xb8) + *(int *)(iVar2 + 0xdf0);
  if (*(char *)(param_1 + 0x10) != '\x01') {
    puVar1 = (undefined *)(param_1 + 0x70);
    if ((CONCAT11(*(undefined *)(param_1 + 0x1e),*puVar1) == -0x11fe) &&
       (*(char *)(iVar2 + 0xdf8) != '\0')) {
      sub_08002B10(0x1a0);
      sub_0801CF00(param_1,0xee04);
      *(char *)(iVar2 + 0xdf8) = '\0';
    }
    if ((CONCAT11(*(undefined *)(param_1 + 0x1e),*puVar1) != -0x11fd) &&
       (*(char *)(iVar2 + 0xdf9) != '\0')) {
      sub_0801CF00(param_1);
      *(char *)(iVar2 + 0xdf9) = '\0';
      *(undefined *)(iVar2 + 0xdf8) = 0;
    }
    if ((CONCAT11(*(undefined *)(param_1 + 0x1e),*puVar1) != -0x11fe) &&
       (*(char *)(param_1 + 0x73) == '\x03')) {
      sub_0801CF00(param_1);
    }
    sub_0801CFF0(param_1);
  }
  return in_lr;
}

