// sub_080CF9FC at 0x080CF9FC (thumb)

undefined4 sub_080CF9FC(int param_1)

{
  byte bVar1;
  char *pcVar2;
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0x12) = 0;
  pcVar2 = (char *)(*(int *)(param_1 + 0x28) + 0xbd);
  if (*pcVar2 != '\0') {
    sub_0801749C(param_1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
    if (*pcVar2 == '\x01') {
      sub_08017700(param_1,0x8900);
    }
    else {
      sub_08017700(param_1,0x8a00);
      *(undefined *)(param_1 + 0x12) = 0xbb;
      bVar1 = sub_08017B8C(param_1);
      *(byte *)(param_1 + 0xc2) = bVar1;
      sub_080040A8(*(undefined *)(param_1 + 0x12),(uint)*(byte *)(param_1 + 0xc2) << 5 | 0x200);
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    *(undefined *)(param_1 + 0x4c) = 0;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
    *(undefined *)(param_1 + 0x25) = 0xf;
  }
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
  *(undefined **)(param_1 + 0x30) = &DAT_0836cef8;
  *(undefined2 *)(param_1 + 0x26) = 1;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0836c2ec + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_080CF76C(param_1);
  return in_lr;
}

