// sub_080CE5E0 at 0x080CE5E0 (thumb)

undefined4 sub_080CE5E0(int param_1)

{
  undefined uVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (*(char *)(param_1 + 0x12) == '\0') {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
      uVar1 = 0x78;
    }
    else {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
      sub_08017700(param_1,*(undefined2 *)(&DAT_0836cd16 + (uint)*(byte *)(param_1 + 0x12) * 2));
      uVar1 = 0x1e;
    }
    *(undefined *)(param_1 + 0x13) = uVar1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  sub_08007390(param_1 + 0x74,
               &DAT_0836cb08 + (uint)(byte)(&DAT_0836cd0c)[*(byte *)(param_1 + 0x12)] * 0x18);
  if (*(char *)(param_1 + 0x12) != '\0') {
    sub_080177F4(param_1);
  }
  if (*(char *)(param_1 + 0x10) == '\0') {
    if ((DAT_020301b2 & 1) == 0) {
      *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + -1;
    }
    if (*(char *)(param_1 + 0x12) == '\t') {
      if ((*(uint *)(iVar2 + 0xb4) & 2) != 0) {
        *(undefined *)(param_1 + 0xbd) = 1;
        *(undefined *)(param_1 + 0xd) = 1;
        *(undefined *)(param_1 + 0xe) = 0;
      }
      if ((*(int *)(DAT_0202f5c0 + 0x54) - *(int *)(param_1 + 0x54)) + 0x1800U < 0x3000) {
        *(undefined *)(param_1 + 0xbd) = 0;
        *(undefined *)(param_1 + 0xd) = 1;
        *(undefined *)(param_1 + 0xe) = 0;
      }
    }
  }
  else {
    *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + -1;
    if (((*(char *)(param_1 + 0x12) == '\t') &&
        ((*(int *)(DAT_0202f5c0 + 0x54) - *(int *)(param_1 + 0x54)) + 0x1800U < 0x3000)) &&
       ((uint)(*(int *)(DAT_0202f5c0 + 0x58) - *(int *)(param_1 + 0x58)) < 0x8000)) {
      *(undefined *)(param_1 + 0xbd) = 0;
      *(undefined *)(param_1 + 0xd) = 1;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  if (((*(char *)(param_1 + 0xd) == '\0') && (*(char *)(param_1 + 0x13) == '\0')) &&
     (*(char *)(param_1 + 0x12) != '\t')) {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

