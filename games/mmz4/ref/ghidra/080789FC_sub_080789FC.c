// sub_080789FC at 0x080789FC (thumb)

undefined4 sub_080789FC(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08002624(0x84);
    sub_0800249C(0x85,0x2c0);
    *(undefined *)(*(int *)(param_1 + 200) + 0xb5) = 1;
    *(undefined *)(*(int *)(param_1 + 200) + 0xb6) = 1;
    *(undefined *)(*(int *)(param_1 + 0xcc) + 0xb6) = 0;
    *(undefined *)(*(int *)(param_1 + 0xcc) + 0xb9) = 1;
    sub_08078ED4(param_1,0);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  sub_08005784(param_1 + 0x74,
               *(undefined4 *)
                (*(char *)(param_1 + 0x71) * 4 +
                (&DAT_08859dac)[*(ushort *)(&DAT_08859db4 + (uint)*(byte *)(param_1 + 0xc4) * 2)]));
  sub_08078E20(param_1);
  uVar1 = sub_080025D8(0x85);
  if ((uVar1 & 0xff) - 3 < 2) {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

