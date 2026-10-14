// sub_080CCA80 at 0x080CCA80 (thumb)

undefined4 sub_080CCA80(int param_1)

{
  undefined4 in_lr;
  
  sub_0801CFF0();
  if (*(char *)(param_1 + 0xd) == '\0') {
    if ((*(uint *)(param_1 + 0x8c) & 1) != 0) {
      (&DAT_0202e8b4)[*(uint *)(&DAT_08863360 + (uint)*(byte *)(param_1 + 0x10) * 4) >> 3] =
           (byte)(1 << (*(uint *)(&DAT_08863360 + (uint)*(byte *)(param_1 + 0x10) * 4) & 7)) |
           (&DAT_0202e8b4)[*(uint *)(&DAT_08863360 + (uint)*(byte *)(param_1 + 0x10) * 4) >> 3];
      (&DAT_02035880)[*(uint *)(&DAT_08863360 + (uint)*(byte *)(param_1 + 0x10) * 4) >> 3] =
           (byte)(1 << (*(uint *)(&DAT_08863360 + (uint)*(byte *)(param_1 + 0x10) * 4) & 7)) |
           (&DAT_02035880)[*(uint *)(&DAT_08863360 + (uint)*(byte *)(param_1 + 0x10) * 4) >> 3];
      sub_0801CF00(param_1,0xbd01);
      *(uint *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfa;
      *(undefined4 *)(param_1 + 100) = 300;
      sub_08002B10(0x131);
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
  }
  else {
    if ((*(uint *)(param_1 + 100) & 7) == 0) {
      sub_080D4898(param_1 + 0x54,&DAT_08863344,0,0);
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + -1;
  }
  return in_lr;
}

