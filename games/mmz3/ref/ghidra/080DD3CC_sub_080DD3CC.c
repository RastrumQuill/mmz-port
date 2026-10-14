// sub_080DD3CC at 0x080DD3CC (thumb)

undefined4 sub_080DD3CC(int param_1)

{
  undefined4 uVar1;
  byte bVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    bVar2 = DAT_02002438 & 1;
  }
  else {
    bVar2 = DAT_02002441 & 4;
  }
  if (bVar2 == 0) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0836c2ec + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0836c2ec + (uint)*(byte *)(param_1 + 9) * 4) + 4);
    sub_0801749C(param_1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
    if (*(char *)(param_1 + 0x10) == '\0') {
      sub_08017700(param_1,0xe700);
    }
    else {
      sub_08017700(param_1,0xe701);
    }
    sub_080177F4(param_1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    *(undefined *)(param_1 + 0x4c) = 0;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
    *(undefined *)(param_1 + 0x25) = 0x1e;
    uVar1 = sub_0800A104(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar1;
    sub_080DD4C0(param_1);
  }
  return in_lr;
}

