// sub_08069958 at 0x08069958 (thumb)

undefined4 sub_08069958(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  sub_08012580();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_080127E4(param_1,0x700);
  sub_080128D4(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08006DE4(param_1 + 0x74,&DAT_0833e1a8,param_1 + 0x54,0x10);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0x806a175;
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
  *(undefined **)(param_1 + 0x30) = &DAT_0833e22c;
  *(undefined2 *)(param_1 + 0x26) = 0xc01;
  uVar1 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0x58) = uVar1;
  *(undefined *)(param_1 + 0xbd) = 0;
  *(undefined *)(param_1 + 0xbe) = 0;
  if (*(char *)(param_1 + 0x10) == '\0') {
    *(undefined *)(param_1 + 0xbf) = 4;
  }
  else if (*(char *)(param_1 + 0x10) == '\x01') {
    *(undefined *)(param_1 + 0xbf) = 2;
  }
  else {
    *(undefined *)(param_1 + 0xbf) = 0;
  }
  *(undefined4 *)(param_1 + 100) = 0x1b00;
  *(undefined4 *)(param_1 + 0x68) = 0xfffff400;
  sub_08098B24(param_1,param_1 + 100,0,0);
  *(undefined4 *)(param_1 + 0xb4) = 0x1b00;
  *(undefined4 *)(param_1 + 0xb8) = 0xffffd400;
  sub_08098B24(param_1,(undefined4 *)(param_1 + 0xb4),0,0);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_08069A70(param_1);
  return in_lr;
}

