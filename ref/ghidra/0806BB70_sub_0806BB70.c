// sub_0806BB70 at 0x0806BB70 (thumb)

undefined4 sub_0806BB70(int param_1)

{
  byte *pbVar1;
  int iVar2;
  undefined4 in_lr;
  undefined auStack_18 [4];
  
  sub_080C8D70(auStack_18,&DAT_080c930c,4);
  iVar2 = *(int *)(param_1 + 0x20);
  sub_08048A54(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_080033F0(param_1 + 0x6c,auStack_18[*(byte *)(param_1 + 0x10)]);
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  if (1 < *(byte *)(param_1 + 0x10)) {
    *(byte *)(param_1 + 0x41) =
         *(byte *)(param_1 + 0x41) & 0xf |
         ((&DAT_02022f30)[*(byte *)(param_1 + 9)] + '\x01') * '\x10';
    *(char *)(param_1 + 0x1e) = (&DAT_02022f30)[*(byte *)(param_1 + 9)] + '\x01';
  }
  *(undefined *)(param_1 + 0x44) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) | 0xc;
  if (*(char *)(param_1 + 0xc0) == '\0') {
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(iVar2 + 0x4c);
    *(int *)(param_1 + 0x50) = *(int *)(iVar2 + 0x50) + -0x5000;
    *(undefined *)(param_1 + 0x1f) = 0;
  }
  else {
    pbVar1 = (byte *)(iVar2 + 0xda);
    *(int *)(param_1 + 0x4c) =
         *(int *)(iVar2 + 0x4c) +
         (short)(&DAT_080c8e24)
                [((uint)*pbVar1 + (uint)*(byte *)(param_1 + 0x11) * 0x20 + 0xc0 & 0xff) + 0x40] *
         0x28;
    *(int *)(param_1 + 0x50) =
         *(int *)(iVar2 + 0x50) +
         (short)(&DAT_080c8e24)
                [(uint)*pbVar1 + (uint)*(byte *)(param_1 + 0x11) * 0x20 + 0xc0 & 0xff] * 0x28;
    *(byte *)(param_1 + 0x1f) = *pbVar1 + *(char *)(param_1 + 0x11) * ' ';
  }
  *(undefined *)(param_1 + 0xc1) = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xc0);
  *(undefined *)(param_1 + 0xe) = 1;
  *(undefined *)(param_1 + 0xf) = 1;
  sub_0806BCDC(param_1);
  return in_lr;
}

