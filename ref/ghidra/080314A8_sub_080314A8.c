// sub_080314A8 at 0x080314A8 (thumb)

undefined4 sub_080314A8(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  undefined4 local_14;
  uint local_10;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,6);
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined *)(param_1 + 0x12) = 0x30;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    sub_0803014C(param_1,*(undefined *)(param_1 + 0xca));
    *(undefined4 *)(param_1 + 0x58) = 0xffffffd0;
    *(undefined4 *)(param_1 + 0x54) = 1;
    *(undefined4 *)(param_1 + 0x24) = 0;
    sub_08001EAC(0xbe);
  }
  sub_080297C0(param_1);
  local_10 = (uint)*(byte *)(param_1 + 0xf);
  if (local_10 != 1) {
    if (1 < local_10) {
      if (local_10 != 2) {
        return in_lr;
      }
      cVar1 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar1;
      if (cVar1 != -1) {
        return in_lr;
      }
      if (*(char *)(param_1 + 0x10) == '\0') {
        sub_08015698(0x11,param_1 + 0x4c);
      }
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
      goto LAB_08031586;
    }
    if (local_10 != 0) {
      return in_lr;
    }
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x54);
    if (*(char *)(param_1 + 0x12) == '\x10') {
      local_14 = 0x800;
      uVar2 = sub_08099F90(param_1,&local_14);
      *(undefined4 *)(param_1 + 0x24) = uVar2;
    }
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == -1) {
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    }
    if (*(int *)(param_1 + 0x24) == 0) {
      return in_lr;
    }
  }
  if (*(byte *)(*(int *)(param_1 + 0x24) + 0xc) < 2) {
    return in_lr;
  }
  DAT_02022b6e = DAT_02022b6e | 2;
  *(undefined *)(param_1 + 0x12) = 0x30;
LAB_08031586:
  *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  return in_lr;
}

