// sub_0807E1E0 at 0x0807E1E0 (thumb)

undefined4 sub_0807E1E0(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  undefined auStack_14 [4];
  undefined auStack_10 [4];
  
  sub_08128B5C(auStack_14,&DAT_081292f9,2);
  sub_08128B5C(auStack_10,&DAT_0812934e,2);
  if (*(char *)(param_1 + 0xf) == '\0') {
    DAT_02000a40 = 0;
    *(byte *)(param_1 + 0x45) = *(byte *)(param_1 + 0x45) & 0xf3;
    if (*(int *)(param_1 + 0xd8) == 0) {
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xb8) + 0x3800;
      iVar1 = *(int *)(param_1 + 0xb4) + 0x7800;
      *(int *)(param_1 + 200) = iVar1;
      *(bool *)(param_1 + 0xbe) = iVar1 < *(int *)(DAT_0202dbf0 + 0x54);
      *(undefined *)(param_1 + 0xd) = 0xc;
      *(undefined *)(param_1 + 0xe) = 0;
      *(undefined *)(param_1 + 0xf) = 0;
      sub_08128884(param_1,0x807e5fd);
      return in_lr;
    }
    *(byte *)(param_1 + 0xbf) = *(byte *)(param_1 + 0xbf) | 4;
    sub_0807E7E0(param_1,0);
    iVar1 = 0;
    if ((4 < *(byte *)(DAT_0202e8e0 + 1)) && ((DAT_0202e8b4 & 4) == 0)) {
      iVar1 = 1;
    }
    *(undefined *)(param_1 + 0x12) = auStack_14[iVar1];
    iVar1 = 0;
    if ((4 < *(byte *)(DAT_0202e8e0 + 1)) && ((DAT_0202e8b4 & 4) == 0)) {
      iVar1 = 1;
    }
    *(undefined *)(param_1 + 0x13) = auStack_10[iVar1];
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  if (*(byte *)(param_1 + 0xbc) != 0) {
    sub_0801CFF0(param_1);
  }
  sub_08005784(param_1 + 0x74,
               *(undefined4 *)
                (*(char *)(param_1 + 0x71) * 4 +
                (&DAT_0885a29c)[*(ushort *)(&DAT_0885a2a8 + (uint)*(byte *)(param_1 + 0xbc) * 2)]));
  if ((*(char *)(*(int *)(param_1 + 0xd8) + 0xb5) != '\0') &&
     ((*(byte *)(param_1 + 0xbf) >> 2 & 1) != 0)) {
    if (*(byte *)(param_1 + 0x12) < *(byte *)(param_1 + 0x13)) {
      sub_08128888(param_1,*(int *)(param_1 + 0xd8) + 0x54,
                   *(undefined4 *)(&DAT_0885a338 + (uint)*(byte *)(param_1 + 0x12) * 4));
      *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
    }
    else {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      *(undefined *)(param_1 + 0xf) = 0;
    }
  }
  return in_lr;
}

