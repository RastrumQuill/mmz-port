// sub_080CC8DC at 0x080CC8DC (thumb)

undefined4 sub_080CC8DC(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0834863c + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  sub_08012580(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  bVar1 = *(byte *)(param_1 + 10);
  *(byte *)(param_1 + 10) = bVar1 | 1;
  if (*(char *)(param_1 + 0x10) == '\0') {
    *(byte *)(param_1 + 10) = bVar1 | 3;
    uVar2 = sub_080CD148(param_1);
    *(undefined4 *)(param_1 + 0x58) = uVar2;
    *(undefined4 *)(param_1 + 100) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x58);
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0xbc) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_08006DE4(param_1 + 0x74,&DAT_08349434,param_1 + 0x54,0x20);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(undefined4 *)(param_1 + 0x9c) = 0x80cd1e9;
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xef;
    *(undefined *)(param_1 + 0x1d) = *(undefined *)(param_1 + 0x1c);
    sub_080127E4(param_1,0x6c00);
  }
  else if (*(char *)(param_1 + 0x10) == '\x01') {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x1900;
    *(byte *)(param_1 + 10) = bVar1 | 5;
    sub_08006DE4(param_1 + 0x74,&DAT_08349464,param_1 + 0x54,0x10);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    sub_080127E4(param_1,0x6c01);
  }
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
  *(undefined **)(param_1 + 0x30) = &DAT_0834955c;
  *(undefined2 *)(param_1 + 0x26) = 0x2001;
  sub_080CCA10(param_1);
  return in_lr;
}

