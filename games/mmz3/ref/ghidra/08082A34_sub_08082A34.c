// sub_08082A34 at 0x08082A34 (thumb)

undefined4 sub_08082A34(int param_1)

{
  undefined *puVar1;
  undefined4 in_lr;
  
  if (*(byte *)(*(int *)(param_1 + 0x28) + 0xc) < 2) {
    if (*(char *)(param_1 + 0x11) == '\0') {
      sub_080FE2C0(param_1,*(undefined4 *)(&DAT_08364950 + (uint)*(byte *)(param_1 + 0xd) * 4));
    }
    else {
      sub_080FE2C0(param_1,*(undefined4 *)(&DAT_08364968 + (uint)*(byte *)(param_1 + 0xd) * 4));
    }
    if (*(char *)(param_1 + 0x10) == '\0') {
      if (*(char *)(param_1 + 0x11) == '\0') {
        puVar1 = &DAT_08364980;
      }
      else {
        puVar1 = &DAT_083649b0;
      }
    }
    else {
      if (*(char *)(param_1 + 0x11) != '\0') {
        sub_080FE2C0(param_1,*(undefined4 *)(&DAT_083649c8 + (uint)*(byte *)(param_1 + 0xd) * 4));
        return in_lr;
      }
      puVar1 = &DAT_08364998;
    }
    sub_080FE2C0(param_1,*(undefined4 *)(puVar1 + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_08082AE4(param_1);
  }
  return in_lr;
}

