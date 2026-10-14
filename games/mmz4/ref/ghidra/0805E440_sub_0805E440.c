// sub_0805E440 at 0x0805E440 (thumb)

undefined4 sub_0805E440(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_0805EE34(param_1,0x11);
    *(undefined4 *)(param_1 + 0x60) = 0x280;
    *(undefined4 *)(param_1 + 0x68) = 0x20;
    *(uint *)(param_1 + 0x5c) =
         (uint)(*(int *)(param_1 + 0xb4) + -0x5000 <= *(int *)(param_1 + 0x58));
    *(int *)(param_1 + 100) = *(int *)(param_1 + 0x58);
    *(undefined *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  sub_08005784(param_1 + 0x74,
               *(int *)(*(char *)(param_1 + 0x71) * 4 +
                       (&DAT_0885726c)
                       [*(ushort *)(&DAT_088573d4 + (uint)*(byte *)(param_1 + 0xb8) * 2)]) +
               (uint)*(byte *)(*(int *)(&DAT_08857308 + (uint)*(byte *)(param_1 + 0xb8) * 4) +
                              (int)*(char *)(param_1 + 0x71)) * 0x18);
  piVar1 = (int *)(param_1 + 0xcc);
  if ((*piVar1 != 0) && (1 < *(byte *)(*piVar1 + 0xc))) {
    *piVar1 = 0;
  }
  uVar3 = (uint)*(byte *)(param_1 + 0x13) -
          (*(int *)(param_1 + 100) - (*(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x5c)) >> 0x1f)
          & 1;
  iVar2 = *(int *)(param_1 + 0x60);
  *(uint *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar2 * (uVar3 * 2 + -1);
  if (*(byte *)(param_1 + 0x13) == 0) {
    iVar2 = iVar2 - *(int *)(param_1 + 0x68);
    *(int *)(param_1 + 0x60) = iVar2;
    if (iVar2 < 0x20) {
      *(undefined4 *)(param_1 + 0x60) = 0x20;
      *(undefined *)(param_1 + 0x13) = 1;
      *(uint *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1U & 1;
    }
  }
  else {
    iVar2 = iVar2 + *(int *)(param_1 + 0x68);
    *(int *)(param_1 + 0x60) = iVar2;
    if (0x280 < iVar2) {
      if ((uVar3 == 0) || (*piVar1 != 0)) {
        *(undefined4 *)(param_1 + 0x60) = 0x280;
        *(undefined *)(param_1 + 0x13) = 0;
      }
      else {
        *(undefined *)(param_1 + 0xd) = 0;
        *(undefined *)(param_1 + 0xe) = 0;
        *(undefined *)(param_1 + 0xf) = 0;
      }
    }
  }
  return in_lr;
}

