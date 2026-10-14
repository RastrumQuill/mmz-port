// sub_08100F68 at 0x08100F68 (thumb)

undefined4 sub_08100F68(int param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  sub_0801CFF0();
  if (*(char *)(param_1 + 0xf) == '\0') {
    if (1 < *(byte *)(*(int *)(param_1 + 0x28) + 0xc)) {
      *(undefined *)(param_1 + 0xf) = 1;
      return in_lr;
    }
    uVar2 = (uint)*(byte *)(param_1 + 0x10);
    if (*(char *)(*(int *)(param_1 + 0x28) + 0xd8 + uVar2) == '\0') {
      bVar1 = true;
    }
    else {
      if ((uVar2 == 1) || (uVar2 == 3)) {
        if (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) != -0x3ffd) {
          sub_0801CF00(param_1);
          sub_0801CFF0(param_1);
        }
      }
      else if (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) != -0x3ffe) {
        sub_0801CF00(param_1);
        sub_0801CFF0(param_1);
      }
      bVar1 = false;
      iVar3 = *(int *)(param_1 + 0x58) + -0xc0;
      *(int *)(param_1 + 0x58) = iVar3;
      iVar4 = *(int *)(param_1 + 0xb8) + -0x2800;
      if (iVar3 < iVar4) {
        *(int *)(param_1 + 0x58) = iVar4;
      }
    }
  }
  else {
    bVar1 = true;
    if ((*(char *)(param_1 + 0x10) == '\x01') || (*(char *)(param_1 + 0x10) == '\x03')) {
      sub_0801CF00(param_1,0xc001);
    }
    else {
      sub_0801CF00(param_1,0xc000);
    }
    uVar2 = sub_0801FB14(&DAT_0202e9f8,param_1 + 0x54);
    if (0x8000 < uVar2) {
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
      sub_081010E0(param_1);
      return in_lr;
    }
  }
  if (bVar1) {
    if ((*(char *)(param_1 + 0x10) == '\x01') || (*(char *)(param_1 + 0x10) == '\x03')) {
      if (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) != -0x3fff) {
        sub_0801CF00(param_1);
        sub_0801CFF0(param_1);
      }
    }
    else if (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) != -0x4000) {
      sub_0801CF00(param_1);
      sub_0801CFF0(param_1);
    }
    if ((*(char *)(param_1 + 0xf) == '\0') && (*(int *)(param_1 + 0x2c) == 0)) {
      *(undefined *)(param_1 + 0x12) = 0x30;
    }
    else {
      iVar3 = *(int *)(param_1 + 0x58) + 0x80;
      *(int *)(param_1 + 0x58) = iVar3;
      if (*(int *)(param_1 + 0xb8) < iVar3) {
        *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xb8);
      }
    }
  }
  *(undefined4 *)(param_1 + 0x2c) = 0;
  return in_lr;
}

