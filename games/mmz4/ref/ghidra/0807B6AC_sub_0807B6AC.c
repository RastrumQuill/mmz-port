// sub_0807B6AC at 0x0807B6AC (thumb)

undefined4 sub_0807B6AC(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    if (*(char *)(param_1 + 0x11) == '\x01') {
      sub_08002B10(0x141);
    }
    *(int *)(param_1 + 0xb4) = DAT_0202ea30 + -0x7800;
    *(int *)(param_1 + 0xb8) = DAT_0202ea34 + -0x5000;
    sub_0807E7E0(param_1,1);
    *(undefined4 *)(param_1 + 0x60) = 0xffffff00;
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0xb8) + 0x3800;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  if (*(byte *)(param_1 + 0xbc) != 0) {
    sub_0801CFF0(param_1);
  }
  sub_08005784(param_1 + 0x74,
               *(undefined4 *)
                (*(char *)(param_1 + 0x71) * 4 +
                (&DAT_0885a29c)[*(ushort *)(&DAT_0885a2a8 + (uint)*(byte *)(param_1 + 0xbc) * 2)]));
  iVar1 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar1;
  if (iVar1 <= *(int *)(param_1 + 0x68)) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x68);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

