// sub_08048A98 at 0x08048A98 (thumb)

undefined4 sub_08048A98(int param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0xa507);
    sub_080032EC(0x52);
    sub_08006E08(param_1 + 0x74,&DAT_0833ad3c);
    if (*(int *)(param_1 + 0xc4) + -0x7800 < *(int *)(param_1 + 0x54)) {
      *(undefined *)(param_1 + 0x4c) = 0;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      *(undefined *)(param_1 + 0x4c) = 1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 0x10;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    }
    if (*(char *)(param_1 + 0xbe) == '\0') {
      uVar2 = DAT_0202e188 * 0x343fd + 0x269ec3;
      DAT_0202e188 = uVar2 & 0x7fffffff;
      cVar1 = sub_080EF330(uVar2 * 2 >> 0x11,3);
      *(char *)(param_1 + 0xbe) = cVar1 + '\x01';
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
  if (*(char *)(param_1 + 0x73) == '\x04') {
    *(undefined *)(param_1 + 0xd) = 0x17;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

