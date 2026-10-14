// sub_0807D740 at 0x0807D740 (thumb)

undefined4 sub_0807D740(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  int local_1c;
  int local_18;
  
  uVar1 = *(byte *)(param_1 + 10) >> 4 & 1;
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08002B10(0x14a);
    sub_0807E7E0(param_1,0x11);
    *(undefined4 *)(param_1 + 100) = 0x5a;
    *(undefined *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  if (*(byte *)(param_1 + 0xbc) != 0) {
    sub_0801CFF0(param_1);
  }
  sub_08005784(param_1 + 0x74,
               *(undefined4 *)
                (*(char *)(param_1 + 0x71) * 4 +
                (&DAT_0885a29c)[*(ushort *)(&DAT_0885a2a8 + (uint)*(byte *)(param_1 + 0xbc) * 2)]));
  if (*(int *)(param_1 + 100) != 0) {
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + -1;
  }
  if ((*(char *)(param_1 + 0x13) == '\0') && ('\x03' < *(char *)(param_1 + 0x71))) {
    sub_08001D30(&DAT_08c44e24,(DAT_0202e1aa - 0x2c4) * 0x20 + 0x10000);
    sub_08002208(&DAT_08c44e30,(DAT_0202dfaa - 5) * 0x20 + 0x200);
    local_1c = *(int *)(param_1 + 0x54) + (uVar1 * 2 + -1) * 0x2c00;
    local_18 = *(int *)(param_1 + 0x58) + -0x1800;
    sub_080B66FC(param_1,&local_1c,uVar1);
    *(undefined *)(param_1 + 0x13) = 1;
  }
  if ((*(int *)(param_1 + 100) == 0) && (*(char *)(param_1 + 0x13) != '\0')) {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

