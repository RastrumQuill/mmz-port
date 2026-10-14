// sub_080A6E18 at 0x080A6E18 (thumb)

undefined4 sub_080A6E18(int param_1)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 in_lr;
  
  if (1 < *(byte *)(*(int *)(param_1 + 0x28) + 0xc)) {
    uVar3 = 2;
    if (*(int *)(param_1 + 0xb8) < 0) {
      uVar3 = 3;
    }
    sub_080B919C(param_1 + 0x54,uVar3);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08006E08(param_1 + 0x74,&DAT_0834513c);
    bVar2 = *(byte *)(param_1 + 10);
    *(byte *)(param_1 + 10) = bVar2 | 1;
    bVar1 = *(byte *)(param_1 + 0xb5);
    if (bVar1 == 0) {
      bVar2 = bVar2 & 0xef | 1;
    }
    else {
      bVar2 = bVar2 | 0x11;
    }
    *(byte *)(param_1 + 10) = bVar2;
    *(byte *)(param_1 + 0x4c) = bVar1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)((bVar1 & 1) << 4);
    *(undefined4 *)(param_1 + 0xb8) = 0x4000;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  pcVar4 = (char *)(param_1 + 0xb4);
  *pcVar4 = *pcVar4 - (*(char *)(param_1 + 0xb5) * '\x02' + -1);
  sub_080A6D28(param_1);
  if (*(int *)(param_1 + 0xb8) < 1) {
    sub_08006E08(param_1 + 0x74,&DAT_0834513c);
  }
  else {
    sub_08006E08(param_1 + 0x74,&DAT_0834510c);
  }
  if (*pcVar4 == -0x80) {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

