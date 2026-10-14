// sub_08028630 at 0x08028630 (thumb)

undefined4 sub_08028630(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  *(byte *)(param_1 + 0x181) = *(byte *)(param_1 + 0x181) & 0x7f;
  bVar1 = *(byte *)(param_1 + 0x191);
  if ((bVar1 & 0x1e) == 0) {
    *(undefined *)(param_1 + 0x175) = *(undefined *)(param_1 + 0xe);
    *(undefined2 *)(param_1 + 0xe) = 1;
    sub_08028720(param_1);
  }
  else if ((((bVar1 & 4) == 0) || ((bVar1 & 0x1a) != 0)) ||
          (iVar2 = sub_080D632C(param_1), iVar2 == 0)) {
    *(undefined *)(param_1 + 0x175) = *(undefined *)(param_1 + 0xe);
    *(undefined2 *)(param_1 + 0xe) = 2;
    sub_08028A10(param_1);
  }
  else {
    *(undefined *)(param_1 + 0x174) = *(undefined *)(param_1 + 0xd);
    *(undefined *)(param_1 + 0xd) = 8;
    *(undefined *)(param_1 + 0x175) = *(undefined *)(param_1 + 0xe);
    *(ushort *)(param_1 + 0xe) = bVar1 & 0x1a;
    *(undefined *)(param_1 + 0x17a) = *(undefined *)(param_1 + 0x176);
    *(undefined *)(param_1 + 0x176) = 0;
    *(undefined *)(param_1 + 0x17b) = *(undefined *)(param_1 + 0x177);
    *(undefined *)(param_1 + 0x177) = 0;
    *(undefined *)(param_1 + 0x17c) = *(undefined *)(param_1 + 0x178);
    *(undefined *)(param_1 + 0x178) = 0;
    *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
    *(undefined *)(param_1 + 0x179) = 0;
    sub_08028BA8(param_1);
  }
  return in_lr;
}

