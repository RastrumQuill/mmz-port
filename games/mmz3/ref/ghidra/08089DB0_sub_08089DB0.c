// sub_08089DB0 at 0x08089DB0 (thumb)

undefined8 sub_08089DB0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 0xb4) == 0) {
    if (*(char *)(param_1 + 0xf) == '\0') {
      iVar1 = sub_08063614(param_1);
      if (iVar1 != 0) {
        sub_080FE2C0(param_1,*(undefined4 *)(&DAT_08365134 + (uint)*(byte *)(param_1 + 0xd) * 4));
        sub_080FE2C0(param_1,*(undefined4 *)(&DAT_0836513c + (uint)*(byte *)(param_1 + 0xd) * 4));
        *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
        sub_080177F4(param_1);
        uVar2 = 1;
        goto LAB_08089e26;
      }
    }
    else if (*(char *)(param_1 + 0xf) == '\x01') {
      *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x54);
      *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x58);
      iVar1 = sub_08063614(param_1);
      if (iVar1 != 0) {
        uVar2 = 1;
        goto LAB_08089e26;
      }
      *(undefined *)(param_1 + 0xf) = 0;
    }
  }
  uVar2 = 0;
LAB_08089e26:
  return CONCAT44(in_lr,uVar2);
}

