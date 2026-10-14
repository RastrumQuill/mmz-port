// sub_0805C624 at 0x0805C624 (thumb)

undefined4 sub_0805C624(int param_1)

{
  undefined uVar1;
  char cVar2;
  int iVar3;
  undefined4 in_lr;
  undefined auStack_14 [8];
  
  sub_08128B5C(auStack_14,&DAT_08129030,6);
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_0805EE34(param_1,auStack_14[(uint)*(byte *)(param_1 + 0x10) * 2]);
    *(undefined4 *)(param_1 + 0x60) = 0x280;
    *(undefined4 *)(param_1 + 0x68) = 0x20;
    *(uint *)(param_1 + 0x5c) =
         (uint)(*(int *)(param_1 + 0xb4) + -0x5000 <= *(int *)(param_1 + 0x58));
    *(int *)(param_1 + 100) = *(int *)(param_1 + 0x58);
    uVar1 = sub_0805F054(param_1);
    *(undefined *)(param_1 + 0x12) = uVar1;
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
  iVar3 = *(int *)(param_1 + 0x60);
  *(uint *)(param_1 + 0x58) =
       *(int *)(param_1 + 0x58) +
       iVar3 * (((uint)*(byte *)(param_1 + 0x13) -
                 (*(int *)(param_1 + 100) - (*(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x5c)) >>
                 0x1f) & 1) * 2 + -1);
  if (*(byte *)(param_1 + 0x13) == 0) {
    iVar3 = iVar3 - *(int *)(param_1 + 0x68);
    *(int *)(param_1 + 0x60) = iVar3;
    if (iVar3 < 0x20) {
      *(undefined4 *)(param_1 + 0x60) = 0x20;
      *(undefined *)(param_1 + 0x13) = 1;
      *(uint *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1U & 1;
    }
  }
  else {
    iVar3 = iVar3 + *(int *)(param_1 + 0x68);
    *(int *)(param_1 + 0x60) = iVar3;
    if (0x280 < iVar3) {
      *(undefined4 *)(param_1 + 0x60) = 0x280;
      *(undefined *)(param_1 + 0x13) = 0;
    }
  }
  if (((DAT_0202e918 & 8) == 0) &&
     (cVar2 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar2, cVar2 == '\0')) {
    sub_0805EF38(param_1);
  }
  return in_lr;
}

