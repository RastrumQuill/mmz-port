// sub_080C3950 at 0x080C3950 (thumb)

undefined4 sub_080C3950(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x28);
  sub_0801CFF0();
  if (*(char *)(param_1 + 0xd) == '\0') {
    if (*(byte *)(iVar2 + 0xc) < 2) {
      if (*(char *)(iVar2 + 0xd) == '\x02') {
        iVar2 = sub_081284E0((*(int *)(DAT_0202dbf0 + 0x54) - *(int *)(param_1 + 0x54)) * 0x100 >>
                             0x10,(*(int *)(DAT_0202dbf0 + 0x58) -
                                  (*(int *)(param_1 + 0x58) + 0x1400)) * 0x100 >> 0x10);
        uVar1 = (uint)(iVar2 << 0x10) >> 0x18;
        *(int *)(param_1 + 0x5c) =
             *(short *)((int)&DAT_08128c10 + ((uVar1 + 0x40) * 0x1000000 >> 0x17)) * 0xb >> 2;
        *(int *)(param_1 + 0x60) = (short)(&DAT_08128c10)[uVar1] * 0xb >> 2;
        *(undefined *)(param_1 + 0x12) = 0x40;
        *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      }
    }
    else {
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 8)
      ;
      *(undefined *)(param_1 + 0x12) = 0x40;
      sub_080C3A6C(param_1);
    }
  }
  else {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    if (*(char *)(param_1 + 0x12) == '\0') {
      uVar1 = sub_0801FB14(&DAT_0202e9f8,param_1 + 0x54);
      if (0x1000 < uVar1) {
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
        *(undefined4 *)(param_1 + 0x8c) = 0;
        *(undefined4 *)(param_1 + 0x90) = 0;
        *(undefined *)(param_1 + 0x94) = 0;
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
        *(undefined4 *)(param_1 + 0xc) = 3;
        *(undefined4 *)(param_1 + 0x14) =
             *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 0xc);
      }
    }
    else {
      *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
    }
  }
  return in_lr;
}

