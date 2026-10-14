// sub_08031628 at 0x08031628 (thumb)

undefined4 sub_08031628(int param_1)

{
  undefined4 in_lr;
  
  sub_08029654();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_08029778(param_1,0);
  sub_080297C0(param_1);
  *(undefined *)(param_1 + 0x44) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  if (*(char *)(param_1 + 0x10) == '\0') {
    *(undefined *)(param_1 + 0xd8) = 0x60;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  }
  else {
    *(undefined *)(param_1 + 0xd8) = 0x60;
  }
  sub_08029874(param_1,&DAT_082ad520,*(undefined *)(param_1 + 0xd8));
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined *)(param_1 + 0x11) = 0;
  *(undefined2 *)(param_1 + 0xcc) = 0;
  *(undefined *)(param_1 + 0xce) = 0;
  *(undefined *)(param_1 + 0xcf) = 0;
  *(undefined *)(param_1 + 0xd4) = 0;
  *(undefined *)(param_1 + 0xd5) = 1;
  *(undefined *)(param_1 + 0xd6) = 2;
  *(undefined *)(param_1 + 0xd7) = 3;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082acbf8 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  if (*(char *)(param_1 + 0x10) == '\0') {
    *(undefined *)(param_1 + 0xd) = 0x31;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  }
  else {
    *(undefined *)(param_1 + 0xd) = 0x32;
  }
  *(undefined *)(param_1 + 0xe) = 1;
  sub_08031718(param_1);
  return in_lr;
}

