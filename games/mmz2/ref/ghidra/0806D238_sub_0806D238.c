// sub_0806D238 at 0x0806D238 (thumb)

undefined4 sub_0806D238(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08006E08(param_1 + 0x74,&DAT_0833e628);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  iVar1 = sub_0801E4D8(*(undefined4 *)(param_1 + 0xc0));
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0xc0) = 0;
    if (*(char *)(param_1 + 0x11) == '\0') {
      *(undefined2 *)
       (&DAT_0202e020 +
       (*(byte *)(param_1 + 0x10) & 1) * 2 + (uint)(*(byte *)(param_1 + 0x10) >> 1) * 4) = 0xbe;
    }
    else {
      (&DAT_0202e020)[(*(byte *)(param_1 + 0x10) & 1) + (uint)(*(byte *)(param_1 + 0x10) >> 1) * 4]
           = 0xbe;
    }
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

